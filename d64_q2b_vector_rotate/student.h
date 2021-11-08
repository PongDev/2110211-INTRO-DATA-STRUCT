#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
    //write your code here
    CP::vector<T> tmp(last - first);

    for (int c = 0; c < tmp.size(); c++)
        tmp[c] = mData[c + (first - begin())];
    for (int c = 0; c < tmp.size(); c++)
        mData[c + (first - begin())] = tmp[(c + k) >= tmp.size() ? c + k - tmp.size() : c + k];
}

#endif
