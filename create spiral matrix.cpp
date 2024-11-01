#include<iostream>
#include<vector>

using namespace std;

void spiral(vector<vector<int>> &v) {
    int left = 0;
    int top = 0;
    int right = v[0].size() - 1; // Use size - 1 to get the last index
    int bottom = v.size() - 1;   // Use size - 1 to get the last index
    int direction = 0;

    while (left <= right && top <= bottom) {
        if (direction == 0) {
            // Traverse from left to right
            for (int col = left; col <= right; col++) {
                cout << v[top][col] << " ";
            }
            top++;
        } else if (direction == 1) {
            // Traverse from top to bottom
            for (int row = top; row <= bottom; row++) {
                cout << v[row][right] << " ";
            }
            right--;
        } else if (direction == 2) {
            // Traverse from right to left
            for (int col = right; col >= left; col--) {
                cout << v[bottom][col] << " ";
            }
            bottom--;
        } else if (direction == 3) {
            // Traverse from bottom to top
            for (int row = bottom; row >= top; row--) {
                cout << v[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    spiral(v);
    return 0;
}
