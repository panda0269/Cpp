int findDuplicate(int arr)//(vector<int> &arr) 
{
    // Write your code here
    int a=0;
    for(int i=0;i<arr.size();i++)
    {
        a=a^arr[i];
    }
    for(int j=1;j<arr.size();j++)
    {
        a=a^j;
    }
    return a;
}
//ya fir brute  


