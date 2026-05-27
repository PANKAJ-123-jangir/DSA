#include<iostream>
#include<vector>
using namespace std;

vector<int> diagonal(vector<vector<int>> v) {
    if (v.empty() || v[0].empty()) return {};

    int row = v.size(), col = v[0].size();
    int total = row * col, count = 0;
    vector<int> ans;

    int r = 0, c = 0;

    while (count < total) {
        ans.push_back(v[r][c]);
        count++;

        // EVEN → up-right
        if ((r + c) % 2 == 0) {
            if (c == col - 1) {
                r++;
            }
            else if (r == 0) {
                c++;
            }
            else {
                r--;
                c++;
            }
        }
        // ODD → down-left
        else {
            if (r == row - 1) {
                c++;
            }
            
            else if (c == 0) {
                r++;
            }
            else {
                r++;
                c--;
            }
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result = diagonal(v);

    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}
