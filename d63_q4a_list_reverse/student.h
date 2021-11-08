#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
    //write your code here
    iterator it(b);

    while (a != it && a.ptr->next != it.ptr) {
        iterator tmp = (a.ptr->next);

        a.ptr->prev->next = a.ptr->next;
        a.ptr->next->prev = a.ptr->prev;
        a.ptr->next = it.ptr;
        a.ptr->prev = it.ptr->prev;
        it.ptr->prev->next = a.ptr;
        it.ptr->prev = a.ptr;
        a = tmp;
        it--;
    }
    return a;
}

#endif
