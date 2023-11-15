//
// Created by Mac Apple on 2023/11/15.
//


// A, B가 움직임을 시작한 이후에 다시 만나게 되는 시간은 몇 초 뒤일까 ?

// A, B 개별적으로 시뮬레이션을 진행하되, 각각의 사람이 매 초마다 어느 위치에 있었는지를 기록

//  매 초마다의 위치를 기록한 뒤, 쭉 순회를 하며 그 중 시간과 위치가 동시에 일치하는 최초의 시점을 잡으면 문제에서 원하는 답을 구할 수 있

#include <iostream>
#include <vector>

#define MAX_T 1000000

using namespace std;

int n, m;
vector<int> pos_a(MAX_T + 1, 0);
vector<int> pos_b(MAX_T + 1, 0);

int main() {
    cin >> n >> m;

    int time_a = 1;
    for (int i = 0; i < n; i++) {
        char d;
        int t;
        cin >> d >> t;

        while (t--) {
            if (d == 'R')
                pos_a[time_a] = pos_a[time_a - 1] + 1;
            else
                pos_a[time_a] = pos_a[time_a - 1] - 1;

            time_a++;
        }
    }

    int time_b = 1;
    for (int i = 0; i < m; i++) {
        char d;
        int t;
        cin >> d >> t;

        while(t--) {
            if (d == 'R')
                pos_b[time_b] = pos_b[time_b - 1] + 1;
            else
                pos_b[time_b] = pos_b[time_b - 1] - 1;
        }
    }

    int answer = -1;
    for (int i = 1; i < time_a; i++) {
        if (pos_a[i] == pos_b[i]) {
            answer = i;
            break;
        }
    }

    cout << answer;
    return 0;
}

