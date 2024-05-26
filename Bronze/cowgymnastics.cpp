#include <fstream>
// #include <iostream>
using namespace std;

int sessions, cows;
int rankings[11][21];


bool isConsistent(int cow1, int cow2) {
    bool bigger1=true;
    for (int i=0; i<sessions; i++) {
        for (int j=0; j<cows; j++) {
            if (rankings[i][j]==cow1) {
                break;
            }
            if (rankings[i][j] == cow2) {
                bigger1 = false;
            }
        }
    }
    
    if (bigger1==true) {
        // cout << cow1 << ' ' << cow2 << endl;
        return true;
    }
    
    for (int i=0; i<sessions; i++) {
        for (int j=0; j<cows; j++) {
            if (rankings[i][j] == cow2) break;
            if (rankings[i][j] == cow1) return false;
        }
    }
    
    // cout << cow1 << ' ' << cow2 << endl;
    return true;
}
 
int main() {
    int ans=0;

    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");

    fin >> sessions >> cows;

    for (int i=0; i<sessions; i++) {
        for (int j=0; j<cows; j++) {
            fin >> rankings[i][j];
        }
    }

    for (int i=1; i<=cows; i++) {
        for (int j=i+1; j<=cows; j++) {
            if (isConsistent(i, j)) ans++;
        }
    }

    fout << ans;

}