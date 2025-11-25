/** * Definition for singly-linked list. * struct ListNode { * int val; * struct ListNode *next; * }; */




bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return true;

    struct ListNode *fast = head, *slow = head;

    // Step 1: Find middle
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse second half
    struct ListNode *tptr = slow->next, *prev = NULL, *safe;
    while (tptr != NULL) {
        safe = tptr->next;
        tptr->next = prev;
        prev = tptr;
        tptr = safe;
    }

    // Step 3: Compare two halves
    struct ListNode *start1 = prev;   // FIXED
    struct ListNode *p1 = head;

    while (start1 != NULL) {
        if (p1->val != start1->val)   // FIXED
            return false;             // FIXED

        p1 = p1->next;
        start1 = start1->next;
    }

    return true;                       // FIXED
}
