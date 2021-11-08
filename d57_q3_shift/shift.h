void shift(int k) {
    // TODO: Add your code here
    if (mSize > 0) {
        iterator it;

        if (k >= 0) {
            k = k % mSize;
            it = begin();
            while (k--)
                it++;
        } else {
            k = (-k - 1) % mSize;
            it = end().ptr->prev;
            while (k--)
                it--;
        }
        mHeader->next->prev = mHeader->prev;
        mHeader->prev->next = mHeader->next;
        it.ptr->prev->next = mHeader;
        mHeader->prev = it.ptr->prev;
        mHeader->next = it.ptr;
        it.ptr->prev = mHeader;
    }
}
