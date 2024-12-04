// Design a PDA and write a program for simulating the machine which accepts the language
// {a^n b^n where n>0, S= {a, b}}.

#include <iostream>
#include <stack>
using namespace std;

bool PDA(string w){
    
    if (w.length() == 0){                        // Checking for empty strings
        cout << "Empty string found" << endl;
        return false;
    }

    stack<char> pda_stack;   // stack for PDA

    int i = 0;
    while (i < w.length() and w[i] == 'a'){ // Read_1 for reading 'a'
        pda_stack.push('a');
        i++;
    }

    while (i < w.length() and w[i] == 'b'){   // Read_2 for popping 'a' from stack for each 'b'

        if (pda_stack.empty()){
            return false;
        }
        pda_stack.pop();
        i++;
    }

    // Checking if the stack is empty after reading or there is something still left to read
    if (!pda_stack.empty() or i < w.length()){
        return false;
    }
    return true;
}

int main(){
    string w;
    cout << "Enter the string: ";
    cin >> w;
    
    if (PDA(w)){
        cout << "String is accepted";
    }else{
        cout << "String is rejected";
    }
}
