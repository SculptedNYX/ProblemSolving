#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2);

int main()
{
    return 0;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{

    if(list1==NULL && list2==NULL)
    {
        return NULL;
    }

    if(list1 == NULL)
    {
        return list2;
    }

    if(list2 == NULL)
    {
        return list1;
    }

    struct ListNode *currentNode = NULL;

    if((list1->val) < (list2->val))
    {
        currentNode = list1;
        list1 = list1->next;
    }
    else
    {
        currentNode = list2;
        list2 = list2->next;
    }

    struct ListNode *sortedList = currentNode;

    while (list1 != NULL && list2 != NULL)
    {

        if((list1->val) < (list2->val))
        {
            currentNode->next = list1;
            currentNode = list1;
            list1 = list1->next;
        }
        else
        {
            currentNode->next = list2;
            currentNode = list2;
            list2 = list2->next;
        }

    }

        if(list1 == NULL)
        {
            currentNode->next = list2;
            return sortedList;
        }
        else if(list2 == NULL)
        {
            currentNode->next = list1;
            return sortedList;
        }
    
    return sortedList;
}