#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
    //write your code here
    for (int c = 0; c < size() - pos - 1; c++)
        std::swap(mData[(mFront + pos + c) % mCap], mData[(mFront + pos + c + 1) % mCap]);
}

#endif
