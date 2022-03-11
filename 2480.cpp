#include<bits/stdc++.h>
using namespace std;

int main()
{
    int die_1, die_2, die_3;
    int prize; 
    
    cin >> die_1 >> die_2 >> die_3;

    if((die_1 == die_2) && (die_2 == die_3) && (die_3 == die_1)){
        prize = 10000 + die_1 * 1000;
    }
    else if(die_1 == die_2){
            prize = 1000 + die_1 * 100;
    }
    else if(die_2 == die_3){
            prize = 1000 + die_2 * 100;
    }
    else if(die_3 == die_1){
            prize = 1000 + die_3 * 100;
    } 
    
    if((die_1 != die_2) && (die_2 != die_3) && (die_1 != die_3)){
        int max_die;
        if(die_1 < die_2)
            max_die = die_2;
        if(max_die < die_3)
            swap(max_die,die_3);
        if(max_die < die_1)
            swap(max_die, die_1);
        prize = (max_die) * 100;
    }
    cout << prize;
    return 0;
}