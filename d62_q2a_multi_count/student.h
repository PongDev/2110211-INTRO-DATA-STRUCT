#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T, int> hsh;
    std::vector<std::pair<T, size_t>> r;

    for (auto i : k)
        hsh[i] = 0;
    for (int c = 0; c < mSize; c++)
        if (hsh.find(mData[(mFront + c) % mCap]) != hsh.end())
            hsh[mData[(mFront + c) % mCap]]++;
    for (auto i : k)
        r.push_back({i, hsh[i]});
    return r;
}

#endif
