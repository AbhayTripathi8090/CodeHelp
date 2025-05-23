#include <iostream>
using namespace std;
bool checkSorted(int arr[], int size, int i)
{
    // base case
    if (i == size - 1)
        return true;
    if (arr[i] > arr[i + 1])
        return false;

    // recursive call
    return checkSorted(arr, size, i + 1);
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 4, 5};
    cout << checkSorted(arr, 6, 0);
    return 0;
}