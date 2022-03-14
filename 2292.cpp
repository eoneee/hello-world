#include<bits/stdc++.h>
using namespace std;

int main(){
    int din, count;
    cin >> din;
    for (int i = 2; i <= din; count ++)
        i += 6 * count;
    if(din == 1){
        count = 1;
    }




    cout << count;
    return 0; 
}