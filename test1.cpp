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
    void reorderList(ListNode *head)
    {
        if (!head || !head->next)
            return;

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 1 2 3 |  NULL<-4 5

        ListNode *second = slow->next;
        slow->next = nullptr;
        ListNode *prev = nullptr;

        while (second)
        {
            ListNode *tmp = second->next;
            second->next = prev;
            prev = second;
            second = tmp;
        }

        // Merge two halves
        ListNode* first = head;
        second = prev;

        while (second) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next = second;
            second->next = tmp1;
            first = tmp1;
            second = tmp2;
        }
    }
};

// Function to print the linked list
void printList(ListNode *head)
{
    while (head)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main()
{
    // Example input: 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    solution.reorderList(head);

    // std::cout << "Reordered list: ";
    printList(head);

    // Clean up memory
    ListNode *temp;
    while (head)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}


/*
143. Reorder List blind 75,
Blind 75,
Blind 75 LeetCode Sheet Solved,
Blind 75 Sheet Solved,
Reorder List blind 75,
Reorder List,
143. Reorder List,
143. Reorder List,
143 Reorder List on leetcode,
143 on leetcode,143 on leetcode solved, 
leetcode,leetcode problem 143,
Reorder List c++,
Reorder List python,
Reorder List solution


*/