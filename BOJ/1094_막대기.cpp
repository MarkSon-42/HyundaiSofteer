//
// Created by Mac Apple on 2023/11/15.
//
#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int answer = 0;
    while (x > 0) {
        if (x % 2 == 1) {
            answer++;
        }
        x /= 2;
    }
    cout << answer;
}