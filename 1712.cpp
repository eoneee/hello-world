#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, amount;
    cin >> A >> B >> C;
    if(B >= C)
        cout << "-1";
    else {
        amount = A/(C-B) + 1;
        cout << amount;
    }



}