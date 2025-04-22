 
#include <iostream>
using namespace std;

bool elementSearching(int arr[], int size, int index, int target) {
    // Base case: if the index is out of bounds, return false
    if (index >= size) return false;
    // If the target element is found, return true
    if (arr[index] == target) return true;
    // Recursive call to check the next element
    return elementSearching(arr, size, index + 1, target);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int target = 60;
    bool ans = elementSearching(arr, size, 0, target);
    cout << ans;
    return 0;
}
