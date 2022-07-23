#include <bits/stdc++.h>
using namespace std;
int main()
{
    string haystack = "hello";
    string needle = "ll";
    string temp = "";
    int j = 0;
    int result = 0;
    for (int i = 0; i < haystack.length(); i++)
    {

        temp += haystack[i];
        j++;

        if (j == needle.length())
        {

            if (needle == temp)
            {
                result = i - needle.length()+1;
                break;
            }
            j = 0;
            temp = "";
        }
        
    }
    cout << result << temp;
    return 0;
}