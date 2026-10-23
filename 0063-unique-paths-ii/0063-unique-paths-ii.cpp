class Solution {
public:
    int m,n;
    int t[101][101];
    int solve(vector<vector<int>>& obstacleGrid,int i,int j)
    {
        
        if(i<0||i>=m||j<0||j>=n)return 0;
        if(obstacleGrid[i][j]==1)return 0;
        if(i==m-1&&j==n-1)return 1;
        if(t[i][j]!=-1)return t[i][j];
        
        int right=solve(obstacleGrid,i,j+1);
        int down=solve(obstacleGrid,i+1,j);
        return t[i][j]=right+down;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         m=obstacleGrid.size();
         n=obstacleGrid[0].size();
        // vector<vector<int>>arr(m,vector<int>(n,0));
        // if(obstacleGrid[0][0]==1)return 0;
        // for(int i=0;i<n;i++){
        //     if(obstacleGrid[0][i]==1){
        //         break;
        //     }
        //     arr[0][i]=1;
        // }
        // for(int i=0;i<m;i++){
        //     if(obstacleGrid[i][0]==1){
        //         break;
        //     }
        //     arr[i][0]=1;
        // }
        // for(int i=1;i<obstacleGrid.size();i++){
        //     for(int j=1;j<n;j++){
        //         if(obstacleGrid[i][j]==1){
        //             arr[i][j]=0;
        //         }
        //         else{
        //             arr[i][j]=arr[i][j-1]+arr[i-1][j];
        //         }
        //     }
        // }
        // return arr[m-1][n-1];
        memset(t,-1,sizeof(t));
        return solve(obstacleGrid,0,0);
    }
};