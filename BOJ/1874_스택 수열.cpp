//
// Created by Mac Apple on 2023/11/15.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int main() {
    stack<int> s;
    vector<char> result;
    int cnt = 1;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        while (cnt <= x) {
            s.push(cnt);
            cnt += 1;
            result.push_back('+');
        }

        if (s.top() == x) {
            s.pop();
            result.push_back('-');
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    for (char i : result)
        cout << i << '\n';
}