#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void bubbleSort(vector<int> &v)
{
    int size=v.size();
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> v = {4, 6, 7, 3, 5, 9};
    bubbleSort(v);
    print(v);
    return 0;
}