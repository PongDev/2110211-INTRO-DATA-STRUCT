#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
    //write your code here
    // if you use std::vector, your score will be half (grader will report score BEFORE halving)
    size_t ptr = 0;

    while (true) {
        if (ptr >= size() && ptr < other.size())
            return true;
        else if (ptr < size() && ptr >= other.size())
            return false;
        else if (ptr >= size() && ptr >= other.size())
            return false;
        else if ((*this)[ptr] < other[ptr])
            return true;
        else if ((*this)[ptr] > other[ptr])
            return false;
        ptr++;
    }
}

#endif
