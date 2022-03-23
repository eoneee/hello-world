#include<bits/stdc++.h>
using namespace std;

int main(){
    int din;

    cin >> din;

    int i = 1;
    while(din > i){
        din -= i;
        i++;
    }

    if(i % 2 == 1)
        cout << i + 1 - din << "/" << din;
    else
        cout << din << "/" << i + 1 - din;
}