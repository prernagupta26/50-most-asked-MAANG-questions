//LEETCODE 733. Flood Fill
//An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image. You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc]. To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color Return the modified image after performing the flood fill.

class Solution {
public:
    //by using dfs
    
    void dfs(int row,int col,vector<vector<int>>& image,int inicolor,int color,int delrow[],int delcol[]){
        image[row][col]=color;
        
        int n=image.size();
        int m=image[0].size();
        
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i]; //neighbour row
            int ncol=col+delcol[i]; //neighbour col
            
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and image[nrow][ncol]==inicolor and image[nrow][ncol]!=color){
                //checking valid index                     //only color indices with inicolor //check if previosly colored
                
                dfs(nrow,ncol,image,inicolor,color,delrow,delcol);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];//intial color
        
        //finding neighbours //moving 4 directions
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        
        dfs(sr,sc,image,inicolor,color,delrow,delcol);
        return image;
    }
};