#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 4;
    int res = 1;
    if (x == 1|| x == 0)
         res = x;

    int st = 1, end  = x/2;
    while (st<end)
    {
        int mid = (st+end)/2;
        int sqr = mid*mid;
        if(sqr == x)
        {
            res = mid;
            break;
        }
        if(sqr<x)
        {
            st = mid +1;
            res =mid;
        }
        else
        {
            end = mid-1;
            
        }
    }
    
    cout<< res;
}