/*  1
    23
    345
    4567*/
    #include<iostream>
    using namespace std;
    int main()
    {
        int i,j,n;
        cout<<"enter n\n";
        cin>>n;
        for(i=1;i<=n;i++)
        {
         for(j=0;j<i;j++)
         {
            cout<<i+j;
         }
        cout<<endl;
        }
        return 0;
        
    }   