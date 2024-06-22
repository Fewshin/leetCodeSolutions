/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    //int escape = 0;
    //int l2Active = 0;
    //struct ListNode* tot = 0;
    //int tot = 0;
    //struct ListNode* current = l1;
    struct ListNode* output = malloc(sizeof(struct ListNode));
    struct ListNode* prev = malloc(sizeof(struct ListNode));
    struct ListNode* start = output;
    output->val = 0;
    // output->next = NULL;
    struct ListNode* index1 = l1;
    struct ListNode* index2 = l2;

    while (index1 || index2) {
        struct ListNode* newVal = malloc(sizeof(struct ListNode));
        output->next = newVal;
        output->next->val = 0;
        if (!index1){
            int holder = 0;
            holder = index2->val + output->val;
            if (holder > 9) {
                output->val = holder%10;
                output->next->val = (holder-(holder%10))/10;
            }
            else {
                output->val = holder;
            }
            //output->val = output->val + index2->val;
            index2 = index2->next;
        }
        else if (!index2) {
            int holder = 0;
            holder = index1->val + output->val;
            if (holder > 9) {
                output->val = holder%10;
                output->next->val = (holder-(holder%10))/10;
            }
            else {
                output->val = holder;
            }
            //output->val = output->val + index1->val;
            index1 = index1->next;
        }
        else {
            int holder = 0;
            holder = index1->val + index2->val + output->val;
            if (holder > 9) {
                output->val = holder%10;
                output->next->val = (holder-(holder%10))/10;
            }
            else {
                output->val = holder;
            }
            index1 = index1->next;
            index2 = index2->next;
        }
        prev = output;
        output = output->next;
    }

    // if (output->next->val == 0) {
    //     output->next = NULL;
    // }

    // for (int i = 0; escape = 1; i++) {
    //     if (current) {
    //         if (l2Active == 1){
    //             escape = 1;
    //         }
    //         else {
    //             l2Active = 1;
    //             current = l2;
    //         }
    //     }
    //     else {
    //         tot = tot + (current->val * pow(10, i));
    //         current = current->next;
    //     }
    // }
    // while (current) {
    //     if (!current->next && l2Active) {

    //     }
    //     if (!current->next && !l2Active) {
    //         current = l2;
    //         l2Active = 1;
    //     }
    // }
    // output->val = tot;

    // printf("%i", output->val);

    if (output->val == 0) {
        prev->next = NULL;
        //output->next = NULL;
    }
    else {
        output->next = NULL;
    }

    return start;
}