#include <iostream>
using namespace std;

// Write a program to simulate an FA that accepts
// a. Union of the languages L1 and L2
// b. Intersection of the languages L1 and L2
// c. Language L1 L2 (concatenation)

void state1(string w, int i);
void state2(string w, int i);
void state3(string w, int i);
void state4(string w, int i);
void state5(string w, int i);
void state6(string w, int i);
void state7(string w, int i);
void state8(string w, int i);
void state9(string w, int i);
void state10(string w, int i);
void state11(string w, int i);
void state12(string w, int i);
void state13(string w, int i);
void state14(string w, int i);
void state15(string w, int i);
void state16(string w, int i);

void state1(string w, int i){
    cout << "State1" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state2(w, i + 1);
    }
    else{
        state3(w, i + 1);
    }
}
void state2(string w, int i){
    cout << "State2" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state4(w, i + 1);
    }
    else{
        state5(w, i + 1);
    }
}
void state3(string w, int i){
    cout << "State3" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state6(w, i + 1);
    }
    else{
        state7(w, i + 1);
    }
}
void state4(string w, int i){
    cout << "State4" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state8(w, i + 1);
    }
    else{
        state9(w, i + 1);
    }
}
void state5(string w, int i){
    cout << "State5" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state10(w, i + 1);
    }
    else{
        state5(w, i + 1);
    }
}
void state6(string w, int i){
    cout << "State6" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state6(w, i + 1);
    }
    else{
        state11(w, i + 1);
    }
}
void state7(string w, int i){
    cout << "State7" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state7(w, i + 1);
    }
    else{
        state12(w, i + 1);
    }
}
void state8(string w, int i){
    cout << "State8" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state13(w, i + 1);
    }
    else{
        state9(w, i + 1);
    }
}
void state9(string w, int i){
    cout << "State9" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state8(w, i + 1);
    }
    else{
        state9(w, i + 1);
    }
}
void state10(string w, int i){
    cout << "State10" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state10(w, i + 1);
    }
    else{
        state14(w, i + 1);
    }
}
void state11(string w, int i){
    cout << "State10" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state15(w, i + 1);
    }
    else{
        state11(w, i + 1);
    }
}

void state12(string w, int i){
    cout << "State12" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state7(w, i + 1);
    }
    else{
        state16(w, i + 1);
    }
}
void state13(string w, int i){
    cout << "State13" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state13(w, i + 1);
    }
    else{
        state9(w, i + 1);
    }
}
void state14(string w, int i){
    cout << "State14" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state10(w, i + 1);
    }
    else{
        state5(w, i + 1);
    }
}
void state15(string w, int i){
    cout << "State15" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state6(w, i + 1);
    }
    else{
        state11(w, i + 1);
    }
}
void state16(string w, int i){
    cout << "State16" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state7(w, i + 1);
    }
    else{
        state16(w, i + 1);
    }
}

int main(){
    string w;
    cout << "Enter the string: ";
    cin >> w;
    state1(w, 0);
}