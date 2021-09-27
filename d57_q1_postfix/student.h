#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int, int>> v) {
    //WRITE YOUR CODE HERE
    //DON"T FORGET TO RETURN THE RESULT
    stack<int> s;

    for (auto i : v) {
        if (i.first == 1) {
            s.push(i.second);
        } else {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            switch (i.second) {
            case 0:
                s.push(a + b);
                break;
            case 1:
                s.push(a - b);
                break;
            case 2:
                s.push(a * b);
                break;
            case 3:
                s.push(a / b);
                break;
            }
        }
    }
    return s.top();
}

#endif
