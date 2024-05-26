#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int mini=INT_MAX, maxi=-INT_MAX, temp, n, a, b, ans;

    cin >> n >> a >> b;
    for (int i=0; i<n; i++) {
        cin >> temp;
        mini = min(mini, temp);
        maxi = max(maxi, temp);
    }
    int option1 = ((maxi - mini) * a) + (b * n) + (maxi * a);
    if (maxi < 0) option1 = ((maxi - mini) * a) + (b * n) + (-maxi * a);
    int option2 = ((maxi - mini) * a) + (b * n) + (mini * a);
    if (mini < 0) option2 = ((maxi - mini) * a) + (b * n) + (-mini * a);
    ans = min(option1, option2);
    cout << ans;
    
}