#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    //write your code here
    size_t idx = 0, posIdx = 0;

    for (size_t c = 0; c < size(); c++)
        if (posIdx < pos.size() && c == pos[posIdx])
            posIdx++;
        else
            (*this)[idx++] = (*this)[c];
    resize(size() - pos.size());
}

#endif
