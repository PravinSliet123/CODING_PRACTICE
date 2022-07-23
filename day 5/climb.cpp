#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    //using dp
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
 
    for(int i = 2;i<=n;i++)
    {
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}
// int climb(int n, int i)
// {
   

//     if (n == i)
//         return 1;
//     if (i > n)
//         return 0;
//     int x = climb(n, i + 1);
//     int y = climb(n, i + 2);
//     return x + y;
// }