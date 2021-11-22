#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "priority_queue.h"
#include <algorithm>
#include <vector>

template <typename T, typename Comp>
std::vector<T> CP::priority_queue<T, Comp>::at_level(size_t k) const {
    //write your code here
    //can include anything
    std::vector<T> r;
    size_t startIdx = 0;

    for (size_t c = 0; c < k; c++)
        startIdx += 1 << c;
    for (size_t c = 0; c < (1 << k) && (startIdx + c) < size(); c++)
        r.push_back(mData[startIdx + c]);
    std::sort(r.begin(), r.end(), mLess);
    std::reverse(r.begin(), r.end());
    return r;
}

#endif
