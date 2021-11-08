void replace(const T &x, list<T> &y) {
    //write your code here
    for (iterator it = begin(); it != end(); it++) {
        if (*it == x) {
            it = erase(it);
            for (iterator it2 = y.begin(); it2 != y.end(); it2++) {
                it = insert(it, *it2);
                it++;
            }
            it--;
        }
    }
}
