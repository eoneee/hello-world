#include<bits/stdc++.h>
using namespace std;


int main()
{
    int hour, min, req_time, fin_hour, fin_min;

    cin >> hour >> min >> req_time;
    
    fin_hour = hour + (min + req_time) / 60;
    if(fin_hour >= 24){
        fin_hour = fin_hour -24;
    }
    fin_min = (min + req_time) % 60;

    cout << fin_hour << " " << fin_min;
    return 0;
}
