// #include<iostream>
// using namespace std;

// void print(int arr[],int size)
// {
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int findMax(int arr[],int n)
// {
//     int maxAns=INT16_MIN;
//     for(int )
// }
// int main()
// {
// // int arr[5];
// // fill(arr,arr+5,67);
// // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[4]<<" ";
// int arr[]={10,20,30,40,50};
// int size=5;
// print(arr,size);

// return 0;
// }
#include <iostream>
#include <climits> // Include for INT_MIN
using namespace std;

// int findMax(int arr[], int size)
// {
//     int maxAns = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         maxAns = max(maxAns, arr[i]);
//     }
//     return maxAns; // Return statement should be outside the loop
// }
#include <iostream>
using namespace std;

void countZeroAndOne(int arr[], int size)
{
    int count0 = 0, count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1) // Ensure we only count 0s and 1s
        {
            count1++;
        }
    }
    cout << "Number of zeros is: " << count0 << endl;
    cout << "Number of ones is: " << count1 << endl;
}

int main()
{
    int arr[100];
    int size;
    cin >> size; // Correct input stream

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    countZeroAndOne(arr, size); // Correct function call

    return 0;
}

