int findUnique(int *arr, int size)
{
    //Write your code here
   int c;
    for(int i=0;i<size;i++)
    {   
        c=c^arr[i];
    }
    return c;
}
//ya fir frequencu coutn karo har element ki and if it is 1 then return 1//
