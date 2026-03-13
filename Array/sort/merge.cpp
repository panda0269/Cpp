#include <iostream>
#include <vector>
void merge(std::vector<int>& arr, int l, int m, int h)
{
    std::vector<int> temp;
    int left = l;
    int right = m + 1;

    while (left <= m && right <= h)
    {
        if (arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }
    while (left <= m)  temp.push_back(arr[left++]);
    while (right <= h) temp.push_back(arr[right++]);

    for (int i = l; i <= h; i++)
        arr[i] = temp[i - l];
}

void mergeSort(std::vector<int>& arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
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
    mergeSort(arr, 0, n - 1);

    std::cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";

    return 0;
}