#include "queue.h"
#include "stack.h"

namespace CP {
template <typename T>
void stack<T>::appendStack(stack<T> s) {
    ensureCapacity(size() + s.size());
    for (int c = size() - 1; c >= 0; c--)
        mData[c + s.size()] = mData[c];
    for (int c = 0; c < s.size(); c++)
        mData[c] = s.mData[c];
    mSize = size() + s.size();
}

template <typename T>
void stack<T>::appendQueue(queue<T> q) {
    ensureCapacity(size() + q.size());
    for (int c = size() - 1; c >= 0; c--)
        mData[c + q.size()] = mData[c];
    for (int c = 0; c < q.size(); c++)
        mData[q.size() - 1 - c] = q.mData[(q.mFront + c) % q.mCap];
    mSize = size() + q.size();
}

template <typename T>
void queue<T>::appendStack(stack<T> s) {
    for (int c = s.size() - 1; c >= 0; c--)
        push(s.mData[c]);
}

template <typename T>
void queue<T>::appendQueue(queue<T> q) {
    for (int c = 0; c < q.size(); c++)
        push(q.mData[(q.mFront + c) % q.mCap]);
}
} // namespace CP
