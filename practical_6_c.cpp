#include <iostream>
using namespace std;

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
void state17(string w, int i);
void state18(string w, int i);
void state19(string w, int i);
void state20(string w, int i);
void state21(string w, int i);
void state22(string w, int i);
void state23(string w, int i);
void state24(string w, int i);
void state25(string w, int i);
void state26(string w, int i);
void state27(string w, int i);
void state28(string w, int i);
void state29(string w, int i);
void state30(string w, int i);
void state31(string w, int i);
void state32(string w, int i);
void state33(string w, int i);
void state34(string w, int i);
void state35(string w, int i);
void state36(string w, int i);
void state37(string w, int i);
void state38(string w, int i);
void state39(string w, int i);
void state40(string w, int i);
void state41(string w, int i);
void state42(string w, int i);
void state43(string w, int i);
void state44(string w, int i);
void state45(string w, int i);
void state46(string w, int i);

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
        state4(w, i + 1);
    }
}
void state5(string w, int i){
    cout << "State5" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state9(w, i + 1);
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
        state10(w, i + 1);
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
        state11(w, i + 1);
    }
}
void state8(string w, int i){
    cout << "State8" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state12(w, i + 1);
    }
    else{
        state4(w, i + 1);
    }
}
void state9(string w, int i){
    cout << "State9" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state9(w, i + 1);
    }
    else{
        state13(w, i + 1);
    }
}
void state10(string w, int i){
    cout << "State10" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state14(w, i + 1);
    }
    else{
        state10(w, i + 1);
    }
}
void state11(string w, int i){
    cout << "State10" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state7(w, i + 1);
    }
    else{
        state15(w, i + 1);
    }
}

void state12(string w, int i){
    cout << "State12" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state16(w, i + 1);
    }
    else{
        state17(w, i + 1);
    }
}
void state13(string w, int i){
    cout << "State13" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state18(w, i + 1);
    }
    else{
        state19(w, i + 1);
    }
}
void state14(string w, int i){
    cout << "State14" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state20(w, i + 1);
    }
    else{
        state21(w, i + 1);
    }
}
void state15(string w, int i){
    cout << "State15" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state22(w, i + 1);
    }
    else{
        state23(w, i + 1);
    }
}
void state16(string w, int i){
    cout << "State16" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state16(w, i + 1);
    }
    else{
        state24(w, i + 1);
    }
}
void state17(string w, int i){
    cout << "State17" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state25(w, i + 1);
    }
    else{
        state17(w, i + 1);
    }
}
void state18(string w, int i){
    cout << "State18" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state18(w, i + 1);
    }
    else{
        state26(w, i + 1);
    }
}
void state19(string w, int i){
    cout << "State19" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state27(w, i + 1);
    }
    else{
        state19(w, i + 1);
    }
}
void state20(string w, int i){
    cout << "State20" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state20(w, i + 1);
    }
    else{
        state28(w, i + 1);
    }
}
void state21(string w, int i){
    cout << "State21" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state29(w, i + 1);
    }
    else{
        state21(w, i + 1);
    }
}
void state22(string w, int i){
    cout << "State22" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state22(w, i + 1);
    }
    else{
        state30(w, i + 1);
    }
}
void state23(string w, int i){
    cout << "State23" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state31(w, i + 1);
    }
    else{
        state23(w, i + 1);
    }
}
void state24(string w, int i){
    cout << "State24" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state32(w, i + 1);
    }
    else{
        state24(w, i + 1);
    }
}
void state25(string w, int i){
    cout << "State25" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state33(w, i + 1);
    }
    else{
        state17(w, i + 1);
    }
}
void state26(string w, int i){
    cout << "State26" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state18(w, i + 1);
    }
    else{
        state34(w, i + 1);
    }
}
void state27(string w, int i){
    cout << "State27" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state27(w, i + 1);
    }
    else{
        state35(w, i + 1);
    }
}
void state28(string w, int i){
    cout << "State28" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state36(w, i + 1);
    }
    else{
        state28(w, i + 1);
    }
}
void state29(string w, int i){
    cout << "State29" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state37(w, i + 1);
    }
    else{
        state21(w, i + 1);
    }
}
void state30(string w, int i){
    cout << "State30" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state22(w, i + 1);
    }
    else{
        state38(w, i + 1);
    }
}
void state31(string w, int i){
    cout << "State31" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state31(w, i + 1);
    }
    else{
        state39(w, i + 1);
    }
}
void state32(string w, int i){
    cout << "State32" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state40(w, i + 1);
    }
    else{
        state24(w, i + 1);
    }
}
void state33(string w, int i){
    cout << "State33" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state40(w, i + 1);
    }
    else{
        state17(w, i + 1);
    }
}
void state34(string w, int i){
    cout << "State34" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state41(w, i + 1);
    }
    else{
        state34(w, i + 1);
    }
}
void state35(string w, int i){
    cout << "State35" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state41(w, i + 1);
    }
    else{
        state19(w, i + 1);
    }
}
void state36(string w, int i){
    cout << "State36" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state20(w, i + 1);
    }
    else{
        state42(w, i + 1);
    }
}
void state37(string w, int i){
    cout << "State37" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state37(w, i + 1);
    }
    else{
        state42(w, i + 1);
    }
}
void state38(string w, int i){
    cout << "State38" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state22(w, i + 1);
    }
    else{
        state43(w, i + 1);
    }
}
void state39(string w, int i){
    cout << "State39" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state44(w, i + 1);
    }
    else{
        state43(w, i + 1);
    }
}
void state40(string w, int i){
    cout << "State40" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state40(w, i + 1);
    }
    else{
        state24(w, i + 1);
    }
}
void state41(string w, int i){
    cout << "State41" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state41(w, i + 1);
    }
    else{
        state45(w, i + 1);
    }
}
void state42(string w, int i){
    cout << "State42" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state46(w, i + 1);
    }
    else{
        state42(w, i + 1);
    }
}
void state43(string w, int i){
    cout << "State43" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state44(w, i + 1);
    }
    else{
        state43(w, i + 1);
    }
}
void state44(string w, int i){
    cout << "State44" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state44(w, i + 1);
    }
    else{
        state39(w, i + 1);
    }
}
void state45(string w, int i){
    cout << "State45" << endl;
    if(i == w.length()){
        cout << "String is accepted";
        return;
    }
    if(w[i] == 'a'){
        state41(w, i + 1);
    }
    else{
        state34(w, i + 1);
    }
}
void state46(string w, int i){
    cout << "State46" << endl;
    if(i == w.length()){
        cout << "String is rejected";
        return;
    }
    if(w[i] == 'a'){
        state37(w, i + 1);
    }
    else{
        state42(w, i + 1);
    }
}

int main(){
    string w;
    cout << "Enter the string: ";
    cin >> w;
    state1(w, 0);
}