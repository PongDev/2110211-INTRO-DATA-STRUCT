#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
    //write your code here
    std::vector<std::vector<T>> r;
    int ptr = mSize - 1;

    for (int c = 0; c < k; c++) {
        std::vector<T> tmp;

        for (int c2 = 0; c2 < mSize / k; c2++) {
            tmp.push_back(mData[ptr]);
            ptr--;
        }
        if (c < mSize % k) {
            tmp.push_back(mData[ptr]);
            ptr--;
        }
        r.push_back(tmp);
    }
    return r;
}
#endif
