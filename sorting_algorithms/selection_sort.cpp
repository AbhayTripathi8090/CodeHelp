#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void selectionSort(vector<int> &v)
{
    int size = v.size();

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }
}
int main()
{
    vector<int> v = {4, 6, 7, 3, 5, 10};
    selectionSort(v);
    print(v);
    return 0;
}