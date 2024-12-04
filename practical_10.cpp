#include <iostream>
using namespace std;

// Design and simulate a Turing Machine which will increment the given binary number by 1.

void Ru(string& tape, int head);
void L(string& tape, int head);

void Ru(string& tape, int head){
    while(tape[head] != '_'){
        head++;
    }
    L(tape, head);
}

void L(string& tape, int head){
    head--;
    if(tape[head] == '1'){
        tape[head] = '0';
        L(tape, head);
    }
    else if(tape[head] == '0'){
        tape[head] = '1';
        for(int i = 1; i < tape.size() - 1; i++){
            cout << tape[i];
        }
        return;
    }
    else if(tape[head] == '_'){
        tape[head] = '1';
        for(int i = 0; i < tape.size() - 1; i++){
            cout << tape[i];
        }
        return;
    }
}

int main(){
    string input;
    cout << "Enter a string over {0, 1}: ";
    cin >> input;

    string tape = "_" + input + "_";
    Ru(tape, 1);
    return 0;
}