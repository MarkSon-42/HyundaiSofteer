#include <iostream>

#define MAX_N 100
#define MAX_M 10000

using namespace std;

int n, m, k;
int penalized_person[MAX_M];
int penalty_num[MAX_N + 1];

int main() {
    // 입력
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++)
        cin >> penalized_person[i];

    // 각 패널티 횟수를 세서,
    // 최초로 K번 이상 벌칙을 받는 사람을 추적합니다.
    int ans = -1;
    for(int i = 0; i < m; i++) {
        int target = penalized_person[i];
        penalty_num[target]++;

        if(penalty_num[target] >= k) {
            ans = target;
            break;
        }
    }

    cout << ans;
    return 0;
}