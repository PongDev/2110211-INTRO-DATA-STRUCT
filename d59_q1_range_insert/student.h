#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last) {
    //write your code here
    int startIdx = position - &((*this)[0]);
    resize(size() + (last - first));
    for (int c = size() - 1; c >= startIdx + (last - first); c--)
        (*this)[c] = (*this)[c - (last - first)];
    for (int c = 0; c < last - first; c++)
        (*this)[startIdx + c] = *(first + c);
}

#endif
