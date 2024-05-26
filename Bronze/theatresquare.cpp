#include <iostream>
using namespace std;

int main() {
    long long n, m, a, n1, n2;
    cin >> n >> m >> a;

    if (n % a == 0) n1 = (n/a);
    else n1 = (n/a) + 1;

    if (m % a == 0) n2 = (m/a);
    else n2 = (m/a) + 1;
    
    cout << n1 * n2;
}