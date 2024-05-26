#include <iostream>
using namespace std;

int main () {
    int cows, t, moves, temp;

    cin >> cows >> moves >> t;

    int positions[cows], order[moves];

    for (int i=0; i<moves; i++) {
        cin >> order[i];
    }
    

    for (int i=0; i<cows; i++) {
        positions[i] = i;
    }

    for (int i=0; i<t; i++) {
        temp = positions[order[moves-1]];
        for (int j=moves-1; j>0; j--) {
            positions[order[j]] = positions[order[j-1]];
        }
        positions[order[0]] = temp;
        
        // for (int j=0; j<cows; j++) {
        //     cout << positions[j] << ' ';
        // }
        // cout << endl;

        for (int j=0; j<moves; j++) {
            order[j]++;
            order[j] = order[j] % (cows);
        }
    }

    for (int i=0; i<cows-1; i++) {
        cout << positions[i] << ' ';
    }
    cout << positions[cows-1];

    return 0;
}