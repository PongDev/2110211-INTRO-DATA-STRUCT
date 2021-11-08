#include <bits/stdc++.h>

int main() {
    int n;

    scanf("%d", &n);
    while (n--) {
        int mFront, mSize, mCap, last, correction;

        scanf("%d%d%d%d%d", &mFront, &mSize, &mCap, &last, &correction);
        if (last == (mFront + mSize) % mCap && mSize <= mCap && mFront < mCap && last < mCap)
            printf("OK\n");
        else {
            printf("WRONG");
            switch (correction) {
            case 1:
                printf(" %d", (last - mSize + mCap) % mCap);
                break;
            case 2:
                printf(" %d", (last - mFront + mCap) % mCap);
                break;
            case 3:
                printf(" %d", mFront + mSize == last ? last + 1 : mFront + mSize - last);
                break;
            case 4:
                printf(" %d", (mFront + mSize) % mCap);
                break;
            }
            printf("\n");
        }
    }
}