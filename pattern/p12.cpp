/*A
 BB
 CCC*/
 #include<iostream>
 using namespace std;
 int main()
 {
    int i,j,n;
     cin>>n;
     for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
        {
            cout<<(char)(64+i);
        }
        cout<<endl;
     }   
    return 0;
 }