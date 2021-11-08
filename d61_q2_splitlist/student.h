void splitList(list<T> &list1, list<T> &list2) {
    // Add your code here
    int targetIdx = (mSize + 1) / 2;

    iterator it = begin();

    while (targetIdx--)
        it++;
    list1.end().ptr->prev->next = begin().ptr;
    begin().ptr->prev = list1.end().ptr->prev;
    list1.end().ptr->prev = it.ptr->prev;
    it.ptr->prev->next = list1.end().ptr;
    list1.mSize += (mSize + 1) / 2;

    list2.end().ptr->prev->next = it.ptr;
    it.ptr->prev = list2.end().ptr->prev;
    list2.end().ptr->prev = end().ptr->prev;
    end().ptr->prev->next = list2.end().ptr;
    list2.mSize += mSize / 2;

    mSize = 0;
    mHeader->next = mHeader->prev = mHeader;
}
