DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
DoublyLinkedListNode *cursor = llist;
    DoublyLinkedListNode *node = (DoublyLinkedListNode*)malloc(1 * sizeof(DoublyLinkedListNode));
    node->data = data;

    //check for first node
    if (cursor->data > data && cursor->prev == NULL) {
        node->next = cursor;
        node->prev = NULL;
        cursor->prev = node;
        return node;
    }

    while (cursor->data < data && cursor->next != NULL)
        cursor = cursor->next;

    if (cursor->next == NULL && cursor->data < data) {
        cursor->next = node;
        node->next = NULL;
        node->prev = cursor;
        goto ret;
    }

    cursor->prev->next = node;
    node->prev = cursor->prev;
    node->next = cursor;
    cursor->prev = node;

ret:
    return llist;
}

