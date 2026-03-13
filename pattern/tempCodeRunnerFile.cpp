   #include<iostream>
   using namespace std;
   int main()
   {
            int i,j,k,n;
            cin>>n;  
            for(i=n;i>=1;i--)
            {
                  for(k=i;k>1;k--)
                  {
                        cout<<" ";
                  }
                  for(j=n;j>=i;j--)
                  {
                        cout<<"*";
                  }      
                  cout<<endl;
             }
            return 0;
   }
