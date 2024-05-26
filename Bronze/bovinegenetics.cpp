#include <fstream>
// #include <iostream>
using namespace std;

int rows, genomes;
string spotty[101], plain[101];

bool valid(int col) {
    int a=0, t=0, c=0, g=0;

    for (int i=0; i<rows; i++) {
        if (spotty[i][col] == 'A') {
            if (a==2) return false;
            else a=1;
        }
        else if (spotty[i][col] == 'T') {
            if (t==2) return false;
            else t=1;
        }
        else if (spotty[i][col] == 'C') {
            if (c==2) return false;
            else c=1;
        }
        else {
            if (g==2) return false;
            else g=1;
        }

        if (plain[i][col] == 'A') {
            if (a==1) return false;
            else a=2;
        }
        else if (plain[i][col] == 'T') {
            if (t==1) return false;
            else t=2;
        }
        else if (plain[i][col] == 'C') {
            if (c==1) return false;
            else c=2;
        }
        else {
            if (g==1) return false;
            else g=2;
        }
    }

    return true;
}

int main() {
    int ans=0;

    ifstream fin("cownomics.in");
    ofstream fout("cownomics.out");

    fin >> rows >> genomes;

    for (int i=0; i<rows; i++) {
        fin >> spotty[i];
    }

    for (int i=0; i<rows; i++) {
        fin >> plain[i];
    }

    for (int i=0; i<genomes; i++) {
        if (valid(i)) ans++;
    }

    fout << ans;

}