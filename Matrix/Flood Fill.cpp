class Solution {
public:
    void dfs(vector<vector<int>> &image, int r, int c, int color, int newColor){
       if(r<0 or r>=image.size() or c<0 or c>=image[0].size() or image[r][c] != color){
          return; 
       }
        // give newColor to the valid pixel
        image[r][c]=newColor;
        
        // recursive call for up
        dfs(image,r-1,c,color,newColor);
        
        // recursive call for right
          dfs(image,r,c+1,color,newColor);
           
         // recursive call for down
         dfs(image,r+1,c,color,newColor);
        
        // recursive call for left
        dfs(image,r,c-1,color,newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color=image[sr][sc];
        if(color != newColor) 
        {
           dfs(image,sr,sc,color,newColor); 
        } 
        return image;
    }
};
