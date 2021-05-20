DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode *cursor = llist;
    void *tmp_store, *tmp;

    while (cursor->next != NULL) {
        tmp_store = cursor->next;
        tmp = cursor->next;
        cursor->next = cursor->prev;
        cursor->prev = tmp;
        cursor = tmp_store;
    }
    cursor->next = cursor->prev;
    cursor->prev = NULL;

    return cursor;
}
