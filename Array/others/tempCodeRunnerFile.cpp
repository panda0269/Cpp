#include<iostream>
using namespace std;

void printArray(int arr[], int n) {

    for(int i = 0; i<n; i++ ) {
        cout<< arr[i] <<" ";
    }cout<<endl;

}

void swapAlternate(int arr[], int size) {

    for(int i = 0; i<size; i+=2 ) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }

}

int main() {

    int even[8];
    int odd[5];
    cout<<"fill even\n";
for ( int i = 0; i <8; i++)
{
    /* code */cin>>even[i];
}
cout<<"fill od\n";
for(int j=0;j<5;j++)
{
    cin>>odd[j];
}
    swapAlternate(even, 8);
    printArray(even, 8);

    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);



    return 0;
}