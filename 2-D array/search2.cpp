#include<iostream>
#include <vector>
bool searchMatrix(std::vector<std::vector<int>>& mat, int target) {
    int m=mat.size();
    int n=mat[0].size();
    int r=0,c=n-1;
    while(c>=0 && r<m)
    {
        if(target == mat[r][c])
        {
            return true;
        }
        else if(target<mat[r][c])
        {
            c--;
        }
        else
        {
            r++;
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
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cout<<a[i][j]<<" ";
        }
        std::cout <<"\n";
    }
    bool ans=searchMatrix(a,target);
    std::cout<<"the answer is" <<ans;
    return 0;
}