/*A
  BC
  CDE
  DEFG*/
  #include<iostream>
  using namespace std;
  int main()
  {
    int i,j,n,c;cin>>n;
    for(i=0;i<n;i++)
    {
        c=i;
        for(j=0;j<=i;j++)
        {
            cout<<(char)('A'+c);
            c++;
         }
      cout<<endl;
  }
  return 0;
}