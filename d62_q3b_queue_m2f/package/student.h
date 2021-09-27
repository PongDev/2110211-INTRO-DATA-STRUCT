#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    for (int c = pos; c > 0; c--)
        std::swap(mData[(mFront + c) % mCap], mData[(mFront + c - 1) % mCap]);
}

#endif
