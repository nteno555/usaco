// #include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, right1=0, right2=0, right3=0, swap1, swap2, curShellPos, temp, ans=0, count;

    ifstream fin("shell.in");
    ofstream fout("shell.out");

    fin >> n;

    int shells[n][3];

    for (int i=0; i<n; i++) {
        fin >> shells[i][0] >> shells[i][1] >> shells[i][2];
    }

    for (int j=1; j<=3; j++) {
        count = 0;
        curShellPos = j;

        for (int i=0; i<n; i++) {
            swap1 = shells[i][0];
            swap2 = shells[i][1];

            // cout << "CUR POS: " << curShellPos << " SWAP 1: " << swap1 << " SWAP 2: " << swap2 << endl;

            if (swap1 == curShellPos) {
                curShellPos = swap2;
                // cout << "SWITCHED SWAP1 WITH CUR POS!" << endl;
            }

            else if (swap2 == curShellPos) {
                curShellPos = swap1;
                // cout << "SWITCHED SWAP2 WITH CUR POS!" << endl;
            }

            if (curShellPos == shells[i][2]) {
                count++;
            }
        }

        ans = max(count, ans);
    }


    fout << ans;

    return 0;
}