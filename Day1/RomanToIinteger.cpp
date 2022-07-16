#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "MCMXCIV";
    int  n = s.length();
   
    map<char, int> list = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D',500}, {'M', 1000}};
     int result = list[s.back()];
    for(int i = n-2;i>=0;i--)
    {
            if(list[s[i]] < list[s[i+1]])
            {
                result =  result - list[s[i]];
            }
            else
            {
                result = result + list[s[i]];
            }
    }
    cout<<result;

    return 0;

}