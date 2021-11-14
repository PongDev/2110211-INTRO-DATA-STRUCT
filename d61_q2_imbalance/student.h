// Your code here

int findMostImbalanceNode(node *ptr, KeyT &value, int &imbalance) {
    if (ptr == nullptr)
        return -1;
    else {
        int leftSize = findMostImbalanceNode(ptr->left, value, imbalance);
        int rightSize = findMostImbalanceNode(ptr->right, value, imbalance);

        if (abs(leftSize - rightSize) > imbalance) {
            imbalance = abs(leftSize - rightSize);
            value = (ptr->data).first;
        } else if (abs(leftSize - rightSize) == imbalance && mLess((ptr->data).first, value)) {
            value = (ptr->data).first;
        }
        return 1 + std::max(leftSize, rightSize);
    }
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    KeyT r;
    int imbalance = -1;

    findMostImbalanceNode(mRoot, r, imbalance);
    return r;
}
