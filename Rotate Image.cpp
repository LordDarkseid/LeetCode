/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            int start{},end{n-1};
            while(start<end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};
