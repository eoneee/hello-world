#include <bits/stdc++.h>
using namespace std;


int Num(int num)
{
    int result = 0;
    if(num < 100)
        return num;
    else
    {
        for(int i = 0; i <= num; i ++)
        {
            int fir = i / 100;
            int sec = (i % 100) / 10;
            int thi = (i % 100) % 10;

            if(fir - sec == sec- thi)
                result = result + 1;
        }
    }
    return(99 + result);
}
int main()
{
    int num;
    cin >> num;
}
