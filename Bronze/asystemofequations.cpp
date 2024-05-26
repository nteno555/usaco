#include <iostream>
using namespace std;

int main(){
    int count, n, m;
    cin >> n >> m;
    for (int i=0; i*i<n; i++) {
        for (int j=0; j*j<m; j++) {
            if (i*i+j == n && j*j+i == m) count++;
        }
    }
    cout << count;
}