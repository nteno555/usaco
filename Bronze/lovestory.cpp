#include <iostream>
using namespace std;

int main(){
    int n;
    string timur;
    cin >> n;
    string codeforces = "codeforces";
    for (int i=0; i<n; i++) {
        cin >> timur;
        int count = 0;
        for (int j=0; j<10; j++) {
            if (codeforces[j] != timur[j]) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}