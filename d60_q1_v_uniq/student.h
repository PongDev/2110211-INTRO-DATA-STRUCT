#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>

template <typename T>
void CP::vector<T>::uniq() {
    //do someting here
    if (size() == 0)
        return;
    std::set<T> rem;
    int ptr = 1;

    rem.insert((*this)[0]);
    for (size_t c = 1; c < size(); c++) {
        if (rem.find((*this)[c]) == rem.end()) {
            rem.insert((*this)[c]);
            (*this)[ptr++] = (*this)[c];
        }
    }
    resize(ptr);
}

#endif
