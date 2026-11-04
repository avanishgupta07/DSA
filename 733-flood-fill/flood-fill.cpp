class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int oddcolor,
             int color) {
        int n = image.size();
        int m = image[0].size();
        if (sr < 0 || sr >= n || sc < 0 || sc >= m ||
            image[sr][sc] != oddcolor) {
            return;
        }
        image[sr][sc] = color;
        dfs(image, sr + 1, sc, oddcolor, color);
        dfs(image, sr - 1, sc, oddcolor, color);
        dfs(image, sr, sc + 1, oddcolor, color);
        dfs(image, sr, sc - 1, oddcolor, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int oddcolor = image[sr][sc];
        if (oddcolor != color) {
            dfs(image, sr, sc, oddcolor, color);
        }
        return image;
    }
};