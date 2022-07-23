#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int l = 1, r= 1;
    while(nums.size()>r)
    {
        if(nums[r-1] == nums[r])
        {
            r++;
        }
        else
        {
            nums[l] = nums[r];
            l++;
            r++;
        }
        
        
    }
    cout<<l;
}