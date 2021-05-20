SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    void *ptr = NULL;
    int i = 0;
    SinglyLinkedListNode * head ;
    SinglyLinkedListNode *node = (SinglyLinkedListNode*)malloc(1 * sizeof(SinglyLinkedListNode));
    node->data = data;

    head = llist;
    while (++i< position) 
        head = head->next;

    ptr = head->next;
    head->next = node;
    node->next = ptr;

    return llist;

}
