#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <cmath>
#include <iostream>
#include <stdio.h>

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::height() const {
    //write your code here
    return mSize == 0 ? -1 : (int)log2(mSize);
}

#endif
