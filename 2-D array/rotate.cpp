#include<iostream>
#include<vector>
#include <algorithm>

 void rotate(std::vector<std::vector<int>>& a,int rows,int cols)
{
     for (int i=0;i<rows;i++)
     {
         for (int j=i+1;j<cols;j++)
         {
             std::swap(a[i][j],a[j][i]);
         }
     }for (int i=0;i<rows;i++)
     {
         std::reverse(a[i].begin(), a[i].end());
     }

}

int main()
{
    int rows,cols;
    std::cin>>rows>>cols;
    std::vector<std::vector<int>> a(rows,std:: vector<int>(cols));

    // Fill the matrix with values (optional)
    int val = 1;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
        {
            std::cin>>a[i][j];
        }

    rotate(a,rows,cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            std::cout << a[i][j] << " ";
        std::cout <<std::endl;
    }

    return 0;

}