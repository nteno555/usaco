#include <fstream>
using namespace std;

int main() {
    ifstream fin("paint.in");
    ofstream fout("paint.out");

    int a, b, c, d, ans=0;
    fin >> a >> b >> c >> d;

    int fence[101];

    for (int i=0; i<101; i++) fence[i] = 0;

    for (int i=a; i<b; i++) {
        fence[i] = 1;
    } 

    for (int i=c; i<d; i++) {
        fence[i] = 1;
    }

    for (int i=0; i<101; i++) {
        if (fence[i] == 1) ans++;
    }

    fout << ans;

    // if (b < c) {
    //     fout << d-a;
    // }
    // else if (a < d) {
    //     fout << b-c;
    // }
    // else if (a == c) {
    //     fout << max(b, d) - a;
    // }
    // else if (b==d) {
    //     fout << d - min(a, c);
    // }
    // else if (a > c && b < d) {
    //     fout << d-c;
    // }
    // else if (c > a && d < b) {
    //     fout << b-a;
    // }
    // else {
    //     fout << (b-a) + (d-c);
    // }
    
    return 0;
}