#include <iostream>

# define MAX_T 1000000

using namespace std;

int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main() {

    cin >> n >> m;

    // A가 매 초마다 서있는 위치를 기록
    int time_a = 1;
    for (int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        while(t--) {
            pos_a[time_a] = pos_a[time_a - 1] + v;
            time_a++;
        }
    }

    // B가 매 초마다 서있는 위치를 기록

    int time_b = 1;
    for (int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        while(t--) {
            pos_b[time_b] = pos_b[time_b - 1] + v;
            time_b++;
        }
    }


    // A와 B 중 더 앞서 있는 경우를 확인하기
    // A가 선두면 1, B가 선두면 2로 관리!


    return 0;
}