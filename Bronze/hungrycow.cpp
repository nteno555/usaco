#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
    int n, t, d, b, remaining=0, total=0;
    cin >> n >> t;
    int hay[t+2];
    
    for (int i=0; i<=t+1; i++) {
        hay[i] = 0;
    }

    for (int i=0; i<n; i++) {
        cin >> d >> b;
        hay[d] = hay[d] + b;
    }
    

    for (int i=1; i<=t; i++) {
        if (hay[i] > 1) {
            remaining = remaining + hay[i] - 1;
            hay[i] = 1;
        }
        else if (hay[i] == 1) continue;
        else {
            if (remaining > 0) {;
                hay[i] = 1;
                remaining--;
            }
            else continue;
        }
    }
    

    for (int i=0; i<=t; i++) {
        if (hay[i] == 1) total++;
    }
    
    cout << total;
    return 0;
}