//
// Created by Mac Apple on 2023/11/15.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int answer = -1;

    vector<int> penalty(n + 1, 0);
    vector<int> students;

    for (int i = 0; i < m; i++) {
        int studentNumber;
        cin >> studentNumber;
        students.push_back(studentNumber);
    }

    for (int i = 0; i < m; i++) {
        int studentNumber = students[i];
        penalty[studentNumber]++;

        if (penalty[studentNumber] == k) {
            answer = studentNumber;
            break;
        }
    }

    cout << answer;

    return 0;
}