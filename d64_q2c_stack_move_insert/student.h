#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m) {
    //your code here
    k = std::min(k, (int)size());
    m = std::min(m, (int)s2.size());
    expand(size() + m);
    mSize += m;
    for (int c = 0; c < k; c++)
        mData[size() - 1 - c] = mData[size() - 1 - m - c];
    for (int c = 0; c < m; c++)
        mData[size() - 1 - k - c] = s2.mData[s2.size() - 1 - c];
    s2.mSize -= m;
}
#endif
