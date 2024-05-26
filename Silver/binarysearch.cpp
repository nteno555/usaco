#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, target, arr[1000];

int binarySearch() {
    int i=0, j=n-1;
    while (j-i > 1) {
        if (arr[(i+j)/2] == target) return (i+j)/2;
        else if (arr[(i+j)/2] < target) i = (i+j)/2;
        else j = (i+j)/2;
    }
    if (arr[i] == target) return i;
    if (arr[j] == target) return j;
    if (arr[i+1] == target) return (i+1);
    return -1;
}

int main() {
    cin >> n >> target;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cout << binarySearch();
}