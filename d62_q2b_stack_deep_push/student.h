#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::deep_push(size_t pos, const T &value) {
    //write your code here
    push(value);
    for (size_t c = 0; c < pos; c++)
        std::swap(mData[size() - 1 - c], mData[size() - 2 - c]);
}

#endif
