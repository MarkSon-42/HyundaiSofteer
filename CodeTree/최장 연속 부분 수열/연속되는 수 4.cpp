//
// Created by Mac Apple on 2023/11/15.
//

// 증가하는 연속 부분 수열 중 최대 길이를 구하는 프로그램을 작성
// 증가하는 연속 부분 수열이란 연속 부분 수열 중 원소의 숫자가 계속 커지는 수열
#include <iostream>

#define MAX_N 1000

using namespace std;

int n;
int arr[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int answer = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++) {

        if (i >= 1 && arr[i - 1] < arr[i])
            cnt++;
        else
            cnt = 1;

        answer = max(answer, cnt);
    }

    cout << answer;
    return 0;
}