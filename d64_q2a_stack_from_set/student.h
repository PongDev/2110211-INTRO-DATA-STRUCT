#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING

template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first, typename std::set<T>::iterator last) {
    //write your code ONLY here
    mCap = 1;
    mData = new T[mCap]();
    mSize = 0;

    while (first != last) {
        push(*first);
        first++;
    }
    for (int c = 0; c < size() / 2; c++) {
        T dTmp = mData[c];
        mData[c] = mData[size() - 1 - c];
        mData[size() - 1 - c] = dTmp;
    }
}

#endif
