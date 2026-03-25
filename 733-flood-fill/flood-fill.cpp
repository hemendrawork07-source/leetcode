class Solution {
public:
    void dfs(vector<vector<int>> &image,int currRow,int currCol,int initialcolor,int newColor){
        int n=image.size();
        int m=image[0].size();
        if(currRow<0|| currRow>=n|| currCol<0|| currCol>=m) return;
        if(image[currRow][currCol]!=initialcolor) return;

        image[currRow][currCol]=newColor;
        dfs(image,currRow+1,currCol,initialcolor,newColor);
        dfs(image,currRow,currCol-1,initialcolor,newColor);
        dfs(image,currRow-1,currCol,initialcolor,newColor);
        dfs(image,currRow,currCol+1,initialcolor,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
        dfs(image,sr,sc,image[sr][sc],color);
        return image;
    }
    
};