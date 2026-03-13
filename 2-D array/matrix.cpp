#include <iostream>

int m, n;

// Correct declaration
void rowsum(int r, int c, int arr[][100]);

// Correct definition
void rowsum(int r, int c, int arr[][100]) {
    std::cout << "Array row sums:\n";
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += arr[i][j];  // Fixed incorrect index
        }
        std::cout << "Row " << i + 1 << " sum = " << sum << std::endl;
    }
}
int main()
{

    std::cin>>m>>n;
    int arr[100][100];
    //agar ek specific row mein kya dalna hai toh fir a={{1,22,333}{4,55,666}{7.88.999}}
    //first row wil be 1 22 333 so on
    std::cout << "Enter matrix\n";
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {std::cin >> arr[i][j];}
    }
    rowsum(m,n,arr);
   /*for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cout<<a[i][j]<<" ";
        }
        std::cout <<"\n";
    }*/
    return 0;
}
