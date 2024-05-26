#include <fstream>
using namespace std;

int main() {
    int bucket1, bucket2, bucket3, limit1, limit2, limit3;

    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");

    fin >> limit1 >> bucket1 >> limit2 >> bucket2 >> limit3 >> bucket3;

    for (int i=0; i<33; i++) {
        bucket2 = bucket1 + bucket2;
        bucket1 = 0;
        if (bucket2 > limit2) {
            bucket1 = bucket2 - limit2;
            bucket2 = limit2;
        }

        bucket3 = bucket2 + bucket3;
        bucket2 = 0;
        if (bucket3 > limit3) {
            bucket2 = bucket3 - limit3;
            bucket3 = limit3;
        }

        bucket1 = bucket3 + bucket1;
        bucket3 = 0;
        if (bucket1 > limit1) {
            bucket3 = bucket1 - limit1;
            bucket1 = limit1;
        }
    }

    bucket2 = bucket1 + bucket2;
    bucket1 = 0;
    if (bucket2 > limit2) {
        bucket1 = bucket2 - limit2;
        bucket2 = limit2;
    }

    fout << bucket1 << endl << bucket2 << endl << bucket3 << endl;

    return 0;
}