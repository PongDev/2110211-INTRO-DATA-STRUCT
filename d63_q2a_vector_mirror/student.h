#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
    //write your code here
    resize(size() * 2);
    for (size_t c = 0; c < size() / 2; c++)
        mData[size() - 1 - c] = mData[c];
}

#endif
