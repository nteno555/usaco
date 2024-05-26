#include <iostream>
using namespace std;

int main() {
    int n, num1, num2, num3;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num1 >> num2 >> num3;
        if (num1 + num3 > 9 || num1 + num2 > 9 || num3 + num2 > 9) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}