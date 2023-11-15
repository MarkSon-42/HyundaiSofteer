//
// Created by Mac Apple on 2023/11/15.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> block(n + 1, 0);

    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;

        for (int j = a; j <= b; j++){
            block[j]++;
        }
    }

    int maxBlocks = 0;

    for (int i = 1; i <= n; i++)
        maxBlocks = max(maxBlocks, block[i]);

    cout << maxBlocks;
    return 0;
}