#include <iostream>
#include <vector>

using namespace std;


int main() {

    int n, t;
    cin >> n >> t;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxLen = 0;
    int currentLen = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > t)
            currentLen++;
        else
            currentLen = 0;
        maxLen = max(maxLen, currentLen);
    }

    cout << maxLen;
    return 0;
}
//두 번째 줄에는 n개의 수가 공백을 사이에 두고 주어집니다.
//
//t보다 큰 수로만 이루어진 연속 부분 수열 중 최대 길이를 구하는 프로그램을 작성


