#include <fstream>
// #include <iostream>
using namespace std;

string seq;

bool valid(char c1, char c2) {
    int c11=-1, c12, c21=-1, c22;
    for (int i=0; i<52; i++) {
        if (seq[i]==c1 && c11==-1) c11=i;
        else if(seq[i]==c1) c12=i;

        if (seq[i] == c2 && c21==-1) c21=i;
        else if (seq[i]==c2) c22=i; 
    }

    if (c11 < c21 && c21<c12 && c12 < c22) return true;
    if (c21 < c11 && c11<c22 && c22 < c12) return true;
    return false;
}

int main() {
    int ans=0; 
    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    ifstream fin("circlecross.in");
    ofstream fout("circlecross.out");

    fin >> seq;

    for (int i=0; i<26; i++) {
        for (int j=i+1; j<26; j++) {
            if (valid(letters[i], letters[j])) ans++;
        }
    }

    fout << ans;
}