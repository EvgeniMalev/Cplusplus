#include <iostream>
#include <vector>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void floodFill(vector<vector<int>>& image, int x, int y, int newColor, int oldColor) {
    int rows = image.size();
    int cols = image[0].size();

    if (x < 0 || x >= rows || y < 0 || y >= cols || image[x][y] != oldColor)
        return;

    image[x][y] = newColor;

    for (int i = 0; i < 4; i++) {
        floodFill(image, x + dx[i], y + dy[i], newColor, oldColor);
    }
}


void startFloodFill(vector<vector<int>>& image, int x, int y, int newColor) {
    int oldColor = image[x][y];
    if (oldColor != newColor) {  
        floodFill(image, x, y, newColor, oldColor);
    }
}


void printImage(const vector<vector<int>>& image) {
    for (const auto& row : image) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
}

int main() {

    vector<vector<int>> image = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 2, 2, 2},
        {0, 0, 2, 3, 3}
    };

    cout << "Original Image:" << endl;
    printImage(image);

    startFloodFill(image, 1, 1, 9);

    cout << "\nImage after Flood Fill:" << endl;
    printImage(image);

    return 0;
}
