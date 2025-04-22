// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     int sum = 0;
//     cin >> n;
//     vector<int> input(n);
//     for(int i = 0; i < n; i++) {
//         cin >> input[i];
//     }
//     for(int i = 0; i < n; i++) {
//         sum += input[i];
//     }
//     cout << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void linearSearch(int arr[], int n, int val)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == val)
//         {
//             cout << true ;
//         }
//     }
//     cout<<false;
// }
// int main()
// {
//     int n = 5;
//     int arr[5] = {2, 4, 6, 7, 8};
//     int val = 9;
//     linearSearch(arr, n, val);
//     return 0;
// }

// #include<iostream>

// using namespace std;
// void arrange(int arr[],int n){
//     int j=0;
//     for(int i=0;i<n;i = i + 2){
//         arr[n-j-1] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     arrange(arr,n);
// return 0;
// }

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        
        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) && 
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                count++;
                if (count >= n) {
                    return true;
                }
            }
        }
        return count >= n;
    }
};

