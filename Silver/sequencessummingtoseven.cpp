// #include <iostream>
#include <fstream>
using namespace std;


int main() {
    int n, ans=0, j;
    long long temp;
    long long psums[50001];

    ifstream fin("div7.in");
    ofstream fout("div7.out");

    fin >> n;

    for (int i=0; i<n; i++) {
        fin >> temp;
        if (i==0) psums[0] = temp;
        else psums[i] = (temp+psums[i-1])%7;
    }


    for (int i=n-1; i>=(n/2); i--) {
        j=1;
        while (i-j>ans) {
            if (psums[i]==psums[j-1]) {
                ans = i-(j-1);
            }
            j++;
        }
    }

    fout << ans;
}