#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("cowqueue.in");
    ofstream fout("cowqueue.out");

    map<int, int> m;
    vector<int> v;
    int n, enterTime, questioningTime, currentTime = 0;

    fin >> n;

    for (int i=0; i<n; i++) {
        fin >> enterTime >> questioningTime;
        m.insert(pair<int, int>(enterTime, questioningTime));
        v.push_back(enterTime);
    }
    
    sort(v.begin(), v.end()); 

    for (int i=0; i<n; i++) {
        if (v[i] >= currentTime) {
            currentTime = v[i];
        }
        currentTime += m[v[i]];
    }

    fout << currentTime;
}