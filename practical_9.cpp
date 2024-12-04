#include <iostream>
using namespace std;

// Design and simulate a Turing Machine that accepts the language a^n b^n c^n where n >0.

void R(string &tape, int head);
void dR_a(string &tape, int head);
void dR_b(string &tape, int head);
void dLu(string &tape, int head);
void yes();
void no();

void R(string &tape, int head) {
    if (tape[head] == 'a') {
        tape[head] = 'd'; // Mark 'a' as processed
        dR_a(tape, head + 1); // Move to find the next 'b'
    } else if (tape[head] == 'd') { // Skip over processed symbols
        R(tape, head + 1);
    } else if (tape[head] == '_') { // Check for acceptance
        // If no unprocessed symbols are left, accept
        for (char ch : tape) {
            if (ch == 'a' || ch == 'b' || ch == 'c') {
                no();
                return;
            }
        }
        yes();
    } else {
        no();
    }
}

void dR_a(string &tape, int head) {
    if (tape[head] == 'b') {
        tape[head] = 'd'; // Mark 'b' as processed
        dR_b(tape, head + 1); // Move to find the next 'c'
    } else if (tape[head] == 'a' || tape[head] == 'd') {
        dR_a(tape, head + 1); // Skip over 'a' or already processed symbols
    } else {
        no();
    }
}

void dR_b(string &tape, int head) {
    if (tape[head] == 'c') {
        tape[head] = 'd'; // Mark 'c' as processed
        dLu(tape, head - 1); // Move left to return to the start
    } else if (tape[head] == 'b' || tape[head] == 'd') {
        dR_b(tape, head + 1); // Skip over 'b' or already processed symbols
    } else {
        no();
    }
}

void dLu(string &tape, int head) {
    while (tape[head] != '_') {
        head--; // Move left until reaching the leftmost blank
    }
    R(tape, head + 1); // Start over from the leftmost unprocessed symbol
}

void yes() {
    cout << "String is accepted" << endl;
}

void no() {
    cout << "String is rejected" << endl;
}

int main() {
    string input;
    cout << "Enter a string over {a, b, c}: ";
    cin >> input;

    string tape = "_" + input + "_";
    R(tape, 1);
    return 0;
}