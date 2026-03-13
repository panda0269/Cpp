/*ABC
 DEF
  GHI*/
  #include<iostream>
  using namespace std;
  int main()
 {
    int i,j,n,c=0;
    cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
         cout<<(char)('A'+c);
        c++;
    }
  cout<<endl;
  }
  return 0;
 }