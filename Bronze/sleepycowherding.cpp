#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int findMinimum(int a, int b, int c) {
    return min((min(a, b)), c);
}

int findMaximum(int a, int b, int c) {
    return max(max(a, b), c);
}

bool done (int a, int b, int c) {
    if (findMaximum(a, b, c)-findMinimum(a, b, c)==2) return true;
    return false;
}

int findMax1(int a, int b, int c) {
    int stepCount = 0;
    while (!done(a, b, c)) {    
        if (findMinimum(a, b, c) == a) {
            a = findMaximum(a, b, c) - 1;
        }
        else if (findMinimum(a, b, c) == b) {
            b = findMaximum(a, b, c) - 1;
        }
        else {
            c = findMaximum(a, b, c) - 1;
        }
        stepCount++;
        if (done(a, b, c)) return stepCount;
        if (findMaximum(a, b, c) == a) {
            a = findMinimum(a, b, c) + 1;
        }
        else if (findMaximum(a, b, c) == b) {
            b = findMinimum(a, b, c) + 1;
        }
        else {
            c = findMinimum(a, b, c) + 1;
        }
        stepCount++;
    }
    return stepCount;
}

int findMax2(int a, int b, int c) {
    int stepCount = 0;
    while (!done(a, b, c)) {    
        if (findMaximum(a, b, c) == a) {
            a = findMinimum(a, b, c) + 1;
        }
        else if (findMaximum(a, b, c) == b) {
            b = findMinimum(a, b, c) + 1;
        }
        else {
            c = findMinimum(a, b, c) + 1;
        }
        stepCount++;
        if (done(a, b, c)) return stepCount;
        if (findMinimum(a, b, c) == a) {
            a = findMaximum(a, b, c) - 1;
        }
        else if (findMinimum(a, b, c) == b) {
            b = findMaximum(a, b, c) - 1;
        }
        else {
            c = findMaximum(a, b, c) - 1;
        }
        stepCount++;
    }
    return stepCount;
}

int findMin(int a, int b, int c) {
    if (b-a==2||a-b==2||a-c==2||c-a==2||b-c==2||c-b==2) return 1;
    else return 2;
}

int main() {
    ifstream fin("herding.in");
    ofstream fout("herding.out");

    int cow1, cow2, cow3;
    fin >> cow1 >> cow2 >> cow3;
    if (done(cow1, cow2, cow3)) {
        cout << 0 << endl << 0;
    }

    fout << findMin(cow1, cow2, cow3) << endl << max(findMax1(cow1, cow2, cow3), findMax2(cow1, cow2, cow3));
}