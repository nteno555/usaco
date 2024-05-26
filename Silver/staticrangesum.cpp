#include <iostream>
using namespace std;

int main () {
    long long n, q, start, end;
    long long psums[500001];

    cin >> n >> q;
    
    psums[0] = 0;

    for (long long i=1; i<=n; i++) {
        if (i==1) {
            cin >> psums[1];
        }
        else {
            cin >> psums[i];
            psums[i] = psums[i] + psums[i-1];
        }
    }

    for (long long i=0; i<q; i++) {
        cin >> start >> end;
        cout << psums[end] - psums[start] << endl;
    }

    return 0;
}