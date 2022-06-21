class Solution 
{
    public:
        void setZeroes(vector<vector<int>>& matrix) 
        {
            vector<int>r;
            vector<int>c;
            int col=matrix[0].size();
            int row=matrix.size();
            vector<vector<int>>::iterator it;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    if(matrix[i][j]==0)
                    {
                        r.push_back(i);
                        c.push_back(j);
                    }
                }
            }
            for(int i=0;i<r.size();i++)
            {
                for(int j=0;j<col;j++)
                {
                    matrix[r[i]][j]=0;
                }
                for(int j=0;j<row;j++)
                {
                    matrix[j][c[i]]=0;
                }
            }
        }
};
