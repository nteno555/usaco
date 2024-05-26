#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string letters;
    for (int i=0; i<n; i++) {
        cin >> letters;
        if (letters[0] == 'a' || letters[1] == 'b' || letters[2] == 'c') {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}