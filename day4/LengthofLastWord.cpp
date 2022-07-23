#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ="   fly me   to   the moon  " ;
    int n = s.length();
    int j = s.length()-1;
    while(isspace(s[j]))
    {
        j--;
    }
   int countLength = 0;
    for(int i = j;i>=0;i--)
    {
        if(isspace(s[i]))
        {
            break;
        }
        else
        {
            countLength++;
        }
    }
    cout<<countLength;
}