#include <iostream>
using namespace std;

// Design a Finite Automata (FA) that accepts language L2, over S= {a, b} where L2= a(a+b)*b. Write
// a program to simulate this FA.

void State1(string w, int i);
void State2(string w, int i);
void State3(string w, int i);

int main(){

    string w;
    cout<<"enter your string: ";
    cin>>w;

    State1(w,0);
}

void State1(string w, int i){

    cout<<"State 1"<<endl;

    if(i == w.length()){
        cout<<"string is rejected";
    }
    else{
        if(w[i] == 'a'){
            State2(w,i+1);
        }
        else{
            cout<<"string is rejected";  //dead state
        }
    }
}

void State2(string w, int i){

    cout<<"State 2"<<endl;

    if(i == w.length()){
        cout<<"string is rejected";
    }
    else{
        if(w[i] == 'a'){
            State2(w,i+1);
        }else{
            State3(w,i+1);
        }
    }
}

void State3(string w, int i){

    cout<<"State 3"<<endl;

    if(i == w.length()){
        cout<<"string is accepted";
    }
    else{
        if(w[i] == 'a'){
            State2(w,i+1);
        }else{
            State3(w,i+1);
        }
    }
}