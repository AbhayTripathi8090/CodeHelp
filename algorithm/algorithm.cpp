#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDouble(int n)
{
    cout << 2 * n << " ";
}
bool checkEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(22);
    v.push_back(14);
    v.push_back(19);
    v.push_back(32);

    // auto it = unique(v.begin(),v.end());
    // v.erase(it,v.end());
    // for(int i : v){
    //     cout<<i<<" ";
    // }
    auto it = partition(v.begin(),v.end(),checkEven);
    for(int i : v){
        cout<<i<<" ";
    }



    // sort(v.begin(),v.end());
    // for(int i : v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // reverse(v.begin(),v.end());
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout<<endl;
    // rotate(v.begin(), v.begin() + 3, v.end());
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }

    // for_each(v.begin(),v.end(),printDouble);
    int target = 11;
    // auto it = find(v.begin(),v.end(),target);
    // cout<< *it << endl;

    // auto it = find_if(v.begin(),v.end(),checkEven);
    // cout<< *it << endl;

    // int ans = count(v.begin(),v.end(),target);
    // cout<< ans << endl;

    // int ans = count_if(v.begin(),v.end(),checkEven);
    // cout<< ans << endl;
    return 0;
}