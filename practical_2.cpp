#include<iostream>
using namespace std;

// Design a Finite Automata (FA) that accepts all strings over S={0, 1} having either exactly two 1's or
// exactly three 1's, not more nor less. Write a program to simulate this FA.

void State1(string w,int i);
void State2(string w,int i);
void State3(string w,int i);
void State4(string w,int i);

                                                        
int main(){

    string w;
    cout << "enter string: ";
    cin >> w;
    State1(w, 0);

    return 0;
}

void State1(string w, int i){
    
    cout << "state 1" << endl;
    if (i == w.length()){
        cout << "string is rejected";
        return;
    }
    else{
        if (w[i] == '1')
            State2(w, i + 1);
        if (w[i] == '0')
            State1(w, i + 1);
    }
}

void State2(string w, int i){

    cout << "state 2" << endl;
    if (i == w.length()){
        cout << "string is rejected";
        return;
    }
    else{
        if (w[i] == '1')
            State3(w, i + 1);
        if (w[i] == '0')
            State2(w, i + 1);
    }
} 

void State3(string w, int i){

    cout << "state 3" << endl;
    if (i == w.length()){
        cout << "string is accepted";  // string has 2 ones
        return;
    }
    else{
        if (w[i] == '1')
            State4(w, i + 1);
        if (w[i] == '0')
            State3(w, i + 1);
    }
}

void State4(string w, int i){

    cout << "state 4" << endl;
    if (i == w.length()){
        cout << "string is accepted"; // String has 3 ones
        return;
    }
    else{
        if (w[i] == '1')
            {cout<<"string is rejected";return;}
        if (w[i] == '0')
            State4(w, i + 1);
    }
}

