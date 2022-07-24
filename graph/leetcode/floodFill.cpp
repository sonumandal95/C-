// leetcode flood fill

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        if (image[sr][sc] == color)
            return image;
        int oldColor = image[sr][sc];
        dfs(image, sr, sc, color, oldColor);
        return image;
    }
    void dfs(vector<vector<int>> &image, int i, int j, int newColor, int oldColor)
     {
        int n = image.size();
        int m = image[i].size();
        if (i < 0 || j < 0)
            return;
        if (i > n || j > m)
            return;
        if (image[i][j] != oldColor)
            return;
        image[i][j] = newColor;
        dfs(image, i + 1, j, newColor, oldColor);
        dfs(image, i, j + 1, newColor, oldColor);
        dfs(image, i - 1, j, newColor, oldColor);
        dfs(image, i, j - 1, newColor, oldColor);
    }
};

int main()
{
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    cout << "Before" << endl;
    for (int i = 0; i < image.size(); i++)
    {
        for (int j = 0; j < image[i].size(); j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    Solution s;
    image = s.floodFill(image, 1, 1, 2);
    cout << "After" << endl;
    for (int i = 0; i < image.size(); i++)
    {
        for (int j = 0; j < image[i].size(); j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}