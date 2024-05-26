#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, ans, minSF=0, sums[200001];
    cin >> n >> sums[0];
    ans = sums[0];
    minSF = min(sums[0], minSF);

    for (long long i=1; i<n; i++) {
        cin >> sums[i];
        sums[i] += sums[i-1];

        ans = max(sums[i], ans);
        ans = max(sums[i]-minSF, ans);
        minSF = min(sums[i], minSF);
    }

    cout << ans;
    return 0;
}
