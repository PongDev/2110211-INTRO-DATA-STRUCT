#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b, CP::list<T> &output) {
    //write your code here
    while (a != b) {
        iterator tmp = (a.ptr->next);
        if (*a == value) {
            a.ptr->prev->next = a.ptr->next;
            a.ptr->next->prev = a.ptr->prev;
            a.ptr->next = output.mHeader->next;
            output.mHeader->next->prev = a.ptr;
            output.mHeader->next = a.ptr;
            a.ptr->prev = output.mHeader;
            mSize--;
            output.mSize++;
        }
        a = tmp;
    }
}

#endif
