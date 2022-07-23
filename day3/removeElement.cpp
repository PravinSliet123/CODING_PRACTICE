#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums = {0,1,2,2,3,0,4,2};
    int l = 0, r = 0;
    int val = 2;
    while(r<nums.size())
    {
        if(nums[r] == val) r++;
        else
        {
            nums[l] = nums[r];
            l++;
            r++;
        }
    }
    cout<<l;
    for(auto it: nums)
    cout<<it<<" ";
}