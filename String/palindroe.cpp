 #include<iostream>
 #include<cstring>
 using namespace std;
 int palin(char a[],int n)
 {
   
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
   
 }
 //alpha numeric wala
  int alpalin(char a[],int n)
  {
   int b=0;
   int e=n-1;
   while (b<e)
   {
    /* code */
    if(isalnum(a[b])&&isalnum(a[e]))
    { 
       if(tolower(a[b]) != tolower(a[e]))
       {
        return 0;
       }
    }
    b++;
    e--;
    }
      return 1;
    
  }
  bool validpalin(char a[],int n)
  {

  }

 int main()
 {
   int n;
   cout<<"enter n\n";
   cin>>n;
   char a[n];
   cout<<"Enter string\n";
   cin>>a;
  
   if (alpalin(a,n)) 
   {
    cout << "Palindrome\n";
    } 
    else 
    {
    cout << "Not a palindrome\n";
    }
        return 0;
} 

