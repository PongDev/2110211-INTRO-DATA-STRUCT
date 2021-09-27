#include <iostream>
#include <vector>

using namespace std;

void remove_even(vector<int> &v, int a, int b) {
    //write your code only in this function
    a = ((a + 1) / 2) * 2;
    b = (b / 2) * 2;
    if (a > b)
        return;
    for (int i = a; i < v.size(); i++) {
        int oddBetween = (((min((i / 2) * 2, b)) - a) / 2) + 1;
        if (i > b || i % 2)
            v[i - oddBetween] = v[i];
    }
    v.resize(v.size() - (((b - a) / 2) + 1));
}

int main() {
    //read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;

    //call function
    remove_even(v, a, b);

    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}