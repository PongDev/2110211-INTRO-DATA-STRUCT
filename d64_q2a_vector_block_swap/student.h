#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
    //write your code here
    if (a > b)
        std::swap(a, b);
    if (m <= 0 ||
        !(a >= begin() && a < end()) ||
        !(b >= begin() && b < end()) ||
        !(a + m - 1 >= begin() && a + m - 1 < end()) ||
        !(b + m - 1 >= begin() && b + m - 1 < end()) ||
        a + m - 1 >= b)
        return false;
    for (int c = 0; c < m; c++)
        std::swap(*(a + c), *(b + c));
    return true;
}

#endif

