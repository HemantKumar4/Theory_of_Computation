
// Design a PDA and write a program for simulating the machine which accepts the language {wXwr
// | w is any string over S={a, b} and wr is reverse of that string and X is a special symbol }.

#include <iostream>
#include <stack>

using namespace std;

void start(string w, int i);
void read1(string w, int i);
void read2(string w, int i);
void pop1(string w, int i);
void pop2(string w, int i);
void pop3(string w, int i);
void accept();
void reject();

stack<char> pd_stack;

void start(string w, int i){
    read1(w, i);
}

void read1(string w, int i){
    if(w[i]){
        if(w[i] == 'a' || w[i] == 'b'){
            pd_stack.push(w[i]);
            read1(w, i + 1);
        } 
        else if(w[i] == 'X'){
            read2(w, i + 1);
        } 
        else{
            reject();
        }
    } 
    else{
        reject();
    }
}

void read2(string w, int i){
    if(w[i]){
        if(w[i] == 'a'){
            pop1(w, i);
        }
        else if(w[i] == 'b'){
            pop2(w, i);
        }
        else{
            reject();
        }
    }
    else{
        pop3(w, i);
    }
}

void pop1(string w, int i){
    if(!pd_stack.empty() && (w[i] == pd_stack.top())){
        pd_stack.pop();
        read2(w, i + 1);
    }
    else{
        reject();
    }
}

void pop2(string w, int i){
    if(!pd_stack.empty() && (w[i] == pd_stack.top())){
        pd_stack.pop();
        read2(w, i + 1);
    }
    else{
        reject();
    }
}

void pop3(string w, int i){
    if(pd_stack.empty()){
        accept();
    }
    else{
        reject();
    }
}

void accept(){
    cout << "String is accepted";
}

void reject(){
    cout << "String is rejected";
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    start(input, 0);

    return 0;
}