#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
    //write your code here
    mSize -= std::min(mSize, K);
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    //write your code here
    //
    //don't forget to return an std::stack
    std::stack<T> s;

    for (int c = std::max(0, (int)size() - (int)K); c < size(); c++)
        s.push(mData[c]);
    multi_pop(K);
    return s;
}

#endif
