#include <iostream>
using namespace std;

int n, maxArea=0, maxPer=0;
int board[1001][1001], visited[1001][1001];

void floodfill(int x, int y, int count) {
    if ()
}

int main() {
    string temp
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> temp;
        for (int j=0; j<n; j++) {
            if (temp[j] == '#') {
                board[i][j] = 0;
            }
            else {
                board[i][j] = 1;
            }
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                floodfill()
            }
        }
    }

    return 0;
}