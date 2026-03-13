#include<iostream>
#include<vector>
#include<algorithm>
bool searchMatrix(std::vector<std::vector<int>>& matrix, int target)
{
    int r=matrix.size();
    int c=matrix[0].size();
    int l=0,h=(r*c)-1,mid;
    while (l<=h)
    {
        mid=(l+h)/2;
        int n=mid/c;
        int m=mid%c;
        if (matrix[n][m]==target)
        {
            return true;
        }
        else if (target>=matrix[n][m])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return false;
}
int main()
{
    int target,m,n;
    std::cin >> target>>m>>n;
    std::vector<std::vector<int>> a(m, std::vector<int>(n));
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cin>>a[i][j];
        }
    }
    bool ans=searchMatrix(a,target);
    std::cout<<"the answer is" <<ans;
    return 0;
}