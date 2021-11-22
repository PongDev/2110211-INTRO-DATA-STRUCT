#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "map_bst.h"
#include <algorithm>
#include <vector>

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n) {
    //write your code here
    if (n == nullptr)
        return 0;
    else
        return 1 + process(n->left) + process(n->right);
}

template <typename KeyT, typename MappedT, typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(map_bst<KeyT, MappedT, CompareT> &left, map_bst<KeyT, MappedT, CompareT> &right) {
    //write your code here
    if (empty())
        return std::pair<KeyT, MappedT>();
    else {
        left.clear();
        left.mSize = 0;
        right.clear();
        right.mSize = 0;
        if (mRoot->left != nullptr) {
            mRoot->left->parent = nullptr;
            left.mRoot = mRoot->left;
            left.mSize = process(mRoot->left);
            mRoot->left = nullptr;
        }
        if (mRoot->right != nullptr) {
            mRoot->right->parent = nullptr;
            right.mRoot = mRoot->right;
            right.mSize = process(mRoot->right);
            mRoot->right = nullptr;
        }
        mSize = 1;
        return mRoot->data;
    }
}

#endif
