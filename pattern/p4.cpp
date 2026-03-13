/*1
  23
  456
  78910*/
  #include<iostream>
  using namespace std;
  int main()
  {
       int i,j,n,c=1;
       cout<<"enter n\n";
       cin>>n;
       for ( i = 1; i <=n; i++)
       {
        /* code */
        for (j = 1; j <=i;j++)

        {
            /* code */
            cout<<c;
            c++;
        }
        cout<<endl;
       }
       



    return 0;
  }