#include <iostream>
using namespace std;

int main(){
    int x, y, m, maxMilk;
    cin >> x >> y >> m;
    for (int i=0; i*x<=m; i++) {
        for (int j=0; j*y + i*x <=m; j++) {
            maxMilk = max(i*x+j*y, maxMilk);
        }
    }
    cout << maxMilk;
    return 0;
}