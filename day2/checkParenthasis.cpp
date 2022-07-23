#include <bits/stdc++.h>
using namespace std;
int test()
{   string s = "(])";
    stack<char>st;
    for(int i = 0;i<s.length();i++)
    {
      
        if(s[i] == '(' || s[i] == '['||s[i] == '{')
        {
            st.push(s[i]);
        }
        if(s[i] == ')')
        {
           if(st.size()==0)
           return false;
            if(st.top() == '(')
            {
                st.pop();
            }
             else{
                return false;
            }
        }
        if(s[i] == ']')
        {
           if(st.size()==0)
            return false ;
            if(st.top() == '[')
            {
                st.pop();
            }
            else{
                return false;
            }
        }
        if(s[i] == '}')
        {
           if(st.size()==0)
           return false;
            if(st.top() == '{')
            {
                st.pop();
            }
             else{
                return false;
            }
        }
        
    }
    if(st.size()>=1)
    return false;
    else
    return true;
}
int main()
{
    cout<<test();
}