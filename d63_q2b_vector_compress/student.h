#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T *tmp = new T[size()];
    for (size_t c = 0; c < size(); c++)
        tmp[c] = mData[c];
    delete[] mData;
    mData = tmp;
    mCap = mSize;
}

#endif
