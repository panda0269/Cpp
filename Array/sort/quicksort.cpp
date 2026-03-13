#include<iostream>
#include<vector>
#include<cstdlib>

int partition(std::vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
            i++;

        while (arr[j] >= pivot && j > low)
            j--;

        if (i < j)
            std::swap(arr[i], arr[j]);
    }
    std::swap(arr[low], arr[j]);
    return j;
}

void quickSort(std::vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int partiti = partition(arr, low, high);
        quickSort(arr, low, partiti - 1);
        quickSort(arr, partiti + 1, high);
    }
}

int main()
{
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000;

    std::cout << "UNSorted array:\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";

    quickSort(arr, 0, n - 1);

    std::cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
    return 0;
}