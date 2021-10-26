#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
#include <vector>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::operator==(const CP::priority_queue<T, Comp> &other) const {

    //write your code here
    if (mSize != other.mSize)
        return false;
    std::vector<T> tmp1(mData, mData + mSize), tmp2(other.mData, other.mData + mSize);
    std::sort(tmp1.begin(), tmp1.end(), mLess);
    std::sort(tmp2.begin(), tmp2.end(), other.mLess);
    return tmp1 == tmp2;
    return true; // you can change this line
}

#endif
