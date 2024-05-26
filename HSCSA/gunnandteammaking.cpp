#include <iostream>
using namespace std;

int intervals[100000][2];
int n, k;

int search(int start) {
    int ans=1;
    for (int i=0; i<n; i++) {
        if (intervals[i][0] < k+start) {
            ans++;
        }
    }
    return ans;
}

int main(){
    int n1, n2, answer=0;
    cin >> n >> k;

    if (k<75) {
        cout << 0;
        return 0;
    }

    for (int i=0; i<n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }


    int prev = 0;
    for (int i=0; i<n; i++) {
        answer = max(answer, search(intervals[i][0]));
    }

    cout << answer;

    return 0;
}