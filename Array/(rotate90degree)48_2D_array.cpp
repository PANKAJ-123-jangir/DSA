#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
/*learning from this question
#first transpose of the matrix


#reversing the each row elements
for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
}
123     321
456---> 654
789     987

#reversing elements of each column
for (int j = 0; j < n; j++) {
    int top = 0, bottom = n - 1;
    while (top < bottom) {
        swap(matrix[top][j], matrix[bottom][j]);
        top++;
        bottom--;
    }
}
here we cannnot apply swap because swap works on contigous memory location
and columns are not stored continues in memory like row 
123    789
456--->456
789    123

#reversing rows not their elemnts
void reverseRows(vector<vector<int>>& matrix) {
    reverse(matrix.begin(), matrix.end());
}
1 2 3       7 8 9
4 5 6   --->4 5 6
7 8 9       1 2 3

#reversing col not their elements
void reverseColumns(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int j = 0; j < cols; j++) {
        int top = 0;
        int bottom = rows - 1;

        while (top < bottom) {
            swap(matrix[top][j], matrix[bottom][j]);
            top++;
            bottom--;
        }
    }
}
123    321
456--->654
789    987
*/
void rotate(vector<vector<int>>& matrix) {
    // first we will transpose the matrix
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // we have to reverse the each row
    for(int i=0;i<3;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    vector<vector<int>>v={{1,2,3},{4,5,6},{7,8,9}};
    rotate(v);
    for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v[i].size(); j++){
        cout << v[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}