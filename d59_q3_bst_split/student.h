#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT>
CP::map_bst<KeyT, MappedT, CompareT> CP::map_bst<KeyT, MappedT, CompareT>::split(KeyT val) {
    //your code here
    using namespace std;

    CP::map_bst<KeyT, MappedT, CompareT> result;
    result.mLess = mLess;
    vector<node *> otherTree, originalTree;

    node *ptr = mRoot;

    while (ptr != nullptr) {
        if (mLess((ptr->data).first, val)) {
            originalTree.push_back(ptr);
            ptr = ptr->right;
        } else {
            otherTree.push_back(ptr);
            ptr = ptr->left;
        }
    }
    if (!originalTree.empty()) {
        mRoot = originalTree[0];
        if (originalTree[0]->right != nullptr && !mLess(originalTree[0]->right->data.first, val))
            originalTree[0]->right = nullptr;
        for (int c = 1; c < originalTree.size(); c++) {
            child_link(originalTree[c - 1], (originalTree[c]->data).first) = originalTree[c];
            originalTree[c]->parent = originalTree[c - 1];
            if (originalTree[c]->right != nullptr && !mLess(originalTree[c]->right->data.first, val))
                originalTree[c]->right = nullptr;
        }
    } else {
        mRoot = nullptr;
    }
    if (!otherTree.empty()) {
        result.mRoot = otherTree[0];
        if (otherTree[0]->left != nullptr && mLess(otherTree[0]->left->data.first, val))
            otherTree[0]->left = nullptr;
        for (int c = 1; c < otherTree.size(); c++) {
            child_link(otherTree[c - 1], (otherTree[c]->data).first) = otherTree[c];
            otherTree[c]->parent = otherTree[c - 1];
            if (otherTree[c]->left != nullptr && mLess(otherTree[c]->left->data.first, val))
                otherTree[c]->left = nullptr;
        }
    } else {
        result.mRoot = nullptr;
    }
    return result;
}

#endif
