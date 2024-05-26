#include <bits/stdc++.h>
using namespace std;

int n, ans=INT_MAX, totalWeight=0, temp;
int apples[21];

void recurse(int index, int count) {
    if (index == n) {
        temp = max(totalWeight - count, count) - min(totalWeight - count, count);
        ans = min(ans, temp);
        return;
    }

    recurse(index+1, count+apples[index]);
    recurse(index+1, count);
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> apples[i];
        totalWeight = totalWeight + apples[i];
    }

    recurse(0, apples[0]);
    recurse(0, 0);

    cout << ans;
}