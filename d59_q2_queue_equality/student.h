#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
    //write your code here
    //
    // YOU CANNOT CALL push or pop
    if (size() != other.size())
        return false;
    for (int c = 0; c < mSize; c++)
        if (mData[(mFront + c) % mCap] != other.mData[(other.mFront + c) % other.mCap])
            return false;
    return true;
}

#endif
