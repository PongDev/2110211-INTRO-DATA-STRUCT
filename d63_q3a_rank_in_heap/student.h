#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T, typename Comp>
size_t CP::priority_queue<T, Comp>::get_rank(size_t pos) const {
    //write your code here
    int r = 0;

    for (int c = 0; c < mSize; c++)
        if (mLess(mData[pos], mData[c]))
            r++;
    return r;
}

#endif
