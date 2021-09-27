#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
    std::vector<T> res;
    //write your code only here
    //
    for (int c = 0; c < std::min((int)mSize, k); c++)
        res.push_back(mData[(mFront + c) % mCap]);
    return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to) {
    //write your code only here
    mCap = to - from;
    mData = new T[mCap]();
    mSize = mCap;
    mFront = 0;
    for (auto it = from; it < to; it++)
        mData[it - from] = (*it);
}

#endif
