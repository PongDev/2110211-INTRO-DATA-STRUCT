#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    if (mCap - mSize == other.mCap - other.mSize)
        return 0;
    else
        return mCap - mSize < other.mCap - other.mSize ? -1 : 1;
}

#endif
