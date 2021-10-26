#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>

#define K 4

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];

    while (idx > 0 && mLess(mData[(idx - 1) / K], tmp)) {
        mData[idx] = mData[(idx - 1) / K];
        idx = (idx - 1) / K;
    }
    mData[idx] = tmp;
}

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];

    while (true) {
        T mx = tmp;
        int mxIdx = idx;

        for (int c = (idx * K) + 1; c <= (idx * K) + K && c < mSize; c++) {
            if (mLess(mx, mData[c])) {
                mx = mData[c];
                mxIdx = c;
            }
        }
        if (mxIdx == idx)
            break;
        else {
            mData[idx] = mData[mxIdx];
            idx = mxIdx;
        }
    }
    mData[idx] = tmp;
}

#endif
