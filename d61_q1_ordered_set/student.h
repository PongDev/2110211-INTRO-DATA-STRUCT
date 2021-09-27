#include <set>
#include <vector>
using namespace std;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B) {
    vector<T> v;
    set<T> setA(A.begin(), A.end());

    for (auto i : A)
        v.push_back(i);
    for (auto i : B)
        if (setA.find(i) == setA.end())
            v.push_back(i);
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B) {
    vector<T> v;
    set<T> setB(B.begin(), B.end());

    for (auto i : A)
        if (setB.find(i) != setB.end())
            v.push_back(i);
    return v;
}
