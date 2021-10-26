#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <cmath>
#include <iostream>
#include <stdio.h>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const {
    //your code here
    for (int c = 0; c < mSize; c++)
        if (mData[c] == k)
            return true;
    return false;
}

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const {
    //your code here
    for (int c = mSize - 1; c >= 0; c--)
        if (mData[c] == k)
            return (int)log2(c + 1);
    return -1;
}

#endif
