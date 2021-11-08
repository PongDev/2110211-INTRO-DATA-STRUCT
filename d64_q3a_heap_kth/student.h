#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "priority_queue.h"
#include <algorithm>
#include <vector>

template <typename T, typename Comp>
T CP::priority_queue<T, Comp>::get_kth(size_t k) const {
    //write your code here
    //can include anything
    std::vector<T> tmp;

    for (int c = 0; c <= 6 && c < mSize; c++)
        tmp.push_back(mData[c]);
    std::sort(tmp.begin(), tmp.end(), mLess);
    return tmp[tmp.size() - k];
}

#endif
