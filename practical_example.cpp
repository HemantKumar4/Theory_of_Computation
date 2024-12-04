#include<iostream>
using namespace std;

// Design an FA that accepts a language over S={a, b} consisting of strings that do not contain a
// double a. Write a program to simulate this FA                                          

void State1(string w,int i);
void State2(string w,int i);
void State3(string w,int i);

                                                        
int main(){
    string w;
    cout << "enter string: ";
    cin >> w;
    State1(w, 0);
}

void State1(string w, int i){
    
    cout << "state 1" << endl;
    if (i == w.length())
    {
        cout << "string is accepted"; // String ending in final state
        return;
    }
    else{
        if (w[i] == 'b')
            State1(w, i + 1);
        if (w[i] == 'a')
            State2(w, i + 1);
    }
}

void State2(string w, int i)
{
    cout << "state 2" << endl;
    if (i == w.length()){
        cout << "string is accepted"; // String ending in final state
        return;
    }
    else{
        if (w[i] == 'b')
            State1(w, i + 1);
        if (w[i] == 'a')
            State3(w, i + 1);
    }
} 

void State3(string w, int i)
{
    cout << "state 3" << endl;
    if (i == w.length()){
        cout << "string is rejected"; // String ending in non-final state
        return;
    }
    else{
        if (w[i] == 'b')
            State3(w, i + 1);
        if (w[i] == 'a')
            State3(w, i + 1);
    }
}



