#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
    // your code here
    if (mSize > 1) {
        node *first = mHeader->next;

        mHeader->next = first->next;
        mHeader->next->prev = mHeader;
        first->next = mHeader;
        first->prev = mHeader->prev;
        mHeader->prev->next = first;
        mHeader->prev = first;
    }
}

#endif
