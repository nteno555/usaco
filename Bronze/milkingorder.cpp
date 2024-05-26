#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("milkorder.in");
    ofstream fout("milkorder.out");

    int n, m, k, cowI, posI, bestAns, hierarchyIndex=0, orderIndex=0;
    fin >> n >> m >> k;
    int order[n];
    vector<int> hierarchy;
    bool inHierarchy = false;

    for (int i=0; i<n; i++) {
        order[i] = 0;
        // setting all the cows to empty
    }

    for (int i=0; i<m; i++) {
        fin >> cowI;
        hierarchy.push_back(cowI);
        // the hierarchy cows
    }

    for (int i=0; i<k; i++) {
        fin >> cowI >> posI;
        order[posI-1] = cowI; 
    }

    for (int i=0; i<n; i++) {
        if (order[i]==0) {
            continue;
        }
        else {
            for (int j=0; j<m; j++) {
                if (order[i]==hierarchy[j]) {
                    if (j!= 0) inHierarchy = true;
                    hierarchy.erase(hierarchy.begin()+j);
                    hierarchyIndex = j-1;
                    break;
                }
            }

            if (inHierarchy) {
                while (hierarchyIndex>-1 && !hierarchy.empty()) {
                    if (order[hierarchyIndex+1] == 0) {
                        order[hierarchyIndex+1] = hierarchy[hierarchyIndex];
                        hierarchy.erase(hierarchy.begin()+hierarchyIndex);
                    }
                    hierarchyIndex--;
                }
                inHierarchy=false;
            }
        }
    }

    if (!hierarchy.empty()) {
        for (int i=n-1; i<=0; i--) {
            if (order[i] == 0) {
                order[i] = hierarchy.back();
                hierarchy.pop_back();
            } 
            if (hierarchy.empty()) break;
        }
    }
    
    for (int i=0; i<n; i++) {
        if (order[i] == 0) {
            fout << i+1;
            return 0;
        }
    }
}