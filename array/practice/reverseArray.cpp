#include<iostream>
#include <climits>
using namespace std;
void countZeroesAndOnes(int arr[],int size)

{
    int countZero = 0;
    int countOne = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        countZero++;
        else
        countOne++;
    }
    fill(arr,arr+countZero,0);
    fill(arr+countZero,arr+size,1);
    cout<<countZero<<" "<<countOne<<endl;
     for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
pair<int, int> findPair(int arr[], int n, int target)
{
    pair<int, int> ans = make_pair(-1, -1);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 40, 30};
    int n = 4;
    
    pair<int, int> ans = findPair(arr, n, 600);
    if(ans.first == -1 && ans.second == -1)
    {
        cout << "pair not found" << endl;
    }
    else
    {
        cout << "pair found: " << ans.first << " " << ans.second << endl;
    }

    // int arr[100];
    // int size;
    // cin >> size; // Correct input stream

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // countZeroesAndOnes(arr, size); 


return 0;
}