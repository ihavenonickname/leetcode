#include <stdbool.h>
#include <stdlib.h>

// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    int val;

    if (list1 == NULL)
    {
        if (list2 == NULL)
        {
            return NULL;
        }

        val = list2->val;
        list2 = list2->next;
    }
    else if (list2 == NULL)
    {
        val = list1->val;
        list1 = list1->next;
    }
    else if (list1->val < list2->val)
    {
        val = list1->val;
        list1 = list1->next;
    }
    else
    {
        val = list2->val;
        list2 = list2->next;
    }

    struct ListNode* node = calloc(1, sizeof(struct ListNode));

    node->val = val;
    node->next = mergeTwoLists(list1, list2);

    return node;
}
