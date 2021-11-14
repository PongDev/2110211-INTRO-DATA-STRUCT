#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT>
CP::map_bst<KeyT, MappedT, CompareT> CP::map_bst<KeyT, MappedT, CompareT>::split(KeyT val) {
    //your code here
    CP::map_bst<KeyT, MappedT, CompareT> result;

    node *ptr = mRoot;

    if (ptr == nullptr) {
        result.mRoot = nullptr;
    } else if (!mLess((ptr->data).first, val)) {
        if (ptr->left == nullptr || mLess((ptr->left->data).first, val)) {
            result.mRoot = mRoot;
            mRoot = ptr->left;
            if (ptr->left != nullptr) {
                ptr->left->parent = nullptr;
                ptr->left = nullptr;
            }
        } else if (!mLess((ptr->left->data).first, val)) {
            while (ptr->left != nullptr && !mLess((ptr->data).first, val))
                ptr = ptr->left;
            if (!mLess((ptr->data).first, val)) {
                result.mRoot = mRoot;
                mRoot = nullptr;
            } else {
                result.mRoot = mRoot;
                mRoot = ptr;
                ptr->parent->left = ptr->right;
                if (ptr->right != nullptr) {
                    ptr->right->parent = ptr->parent;
                    ptr->right = nullptr;
                }
                ptr->parent = nullptr;
            }
        }
    } else if (mLess((ptr->data).first, val)) {
        while (ptr->right != nullptr && mLess((ptr->data).first, val))
            ptr = ptr->right;
        if (mLess((ptr->data).first, val)) {
            result.mRoot = nullptr;
        } else {
            result.mRoot = ptr;
            ptr->parent->right = ptr->left;
            if (ptr->left != nullptr) {
                ptr->left->parent = ptr->parent;
                ptr->left = nullptr;
            }
            ptr->parent = nullptr;
        }
    }
    result.mLess = mLess;
    return result;
}

#endif
