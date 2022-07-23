

#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        vector<int>ar;
        ListNode *temp;
        while(list1->next != NULL)
        {
            ar.push_back(list1->val);
        }
        while(list2->next != NULL)
        {
            ar.push_back(list1->val);
        }
        list1 = NULL;
        temp = list1;


        for(int i = 0;i<ar.size();i++)
        {
           while(list1->next != NULL)
           {
                
           }
        }
    }
};