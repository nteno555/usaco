#include <iostream>
using namespace std;

int n, k, count=0;
bool changes=true;
int board[101][10], visited[101][10];

bool valid(int x, int y) {
    return (visited[x][y] != 1 && x>-1 && y>-1 && x<n && y<10);
}

void gravity() {
    for (int j=0; j<10; j++) {
        int xz = -1;
        int xy = -1;
        for (int i=n; i>-1; i--) {

        }
    }
}

bool floodfill(int x, int y, int prev) {
    if (valid(x, y) && board[x][y] == prev) {
        visited[x][y] = 1;
        count++;
        floodfill(x+1, y, prev);
        floodfill(x-1, y, prev);
        floodfill(x, y+1, prev);
        floodfill(x, y-1, prev);
        if (count>=k) {
            board[x][y] = 0;
            return false;
        }
    }
    return true;
}

int main() {
    string temp;
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> temp;
        for (int j=0; j<10; j++) {
            board[i][j] = stoi(temp[j]);
        }
    }
    
    while (changes) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<10; j++) {
                if (board[i][j] != 0) {
                    done = floodfill(i, j, board[i][j]);
                }
            }
        }

        gravity();
    }

    return 0;
}