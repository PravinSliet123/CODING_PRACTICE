#include<bits/stdc++.h>
using namespace std; 
string fun()
{
    vector<string> strs = {"flower","flow","flight"};

    string prefix ="";
    string res = "";
    if(strs.size()<=0)
     { return prefix ;}
    else
    prefix =  strs[0];
    for(int i = 1;i< strs.size();i++)
    {       int j = 0;
            string temp = strs[i];
            while ( j<max(prefix.length(), temp.length()))
            {
                if(prefix[j] == temp[j])
                {
                    res +=prefix[j];
                }
                else{
                    break;
                }
                j++;
            }
            prefix = res;
            res = "";
             
    }
    return prefix;
}
int main()
{
    string s = fun();
    cout<<s;
}