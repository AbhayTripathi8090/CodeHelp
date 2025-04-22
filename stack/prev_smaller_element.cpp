// #include<iostream>
// #include<vector>
// #include<stack>
// #include<algorithm>

// using namespace std;

// void solve(int arr[],int n,vector<int> &ans){
//     stack<int> s;
//     s.push(-1);
//     for(int i=0;i<n;i++){
//         while(arr[i] <= s.top()){
//             s.pop();
//         }
//         ans.push_back(s.top());
//         s.push(arr[i]);
//     }
// }

// int main()
// {
//     int arr[] ={8,4,6,2,3,9};
//     int size = 6;

//     vector<int>ans;

//     solve(arr,size,ans);

//     // reverse(ans.begin(),ans.end());

//     for(auto i:ans)cout<<i<<" ";
//     cout<<endl;

// return 0;
// }a
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <math.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<int> vi;

bool isPerfectSquare(long long x)
{
    long long root = sqrt(x);
    return (root * root == x);
}

void interleaveVectors(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();
    int i = 0, j = 0;

    for (ll i = 0; i < n1; i++)
    {
        cout << v1[i] << " ";
    }
    for (ll i = 0; i < n2; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
}

void solve()
{
    ll n;
    cin >> n;
    ll temp = n * (n + 1) / 2;
    vector<int> v1;
    vector<int> v2;
    ll tempSum;
    if (isPerfectSquare(temp))
    {
        cout << -1 << endl;
    }
    else
    {
        if (!isPerfectSquare(n))
        {
            cout << n << " ";
            tempSum = n;
            for (ll i = n - 2; i >= 1; i--)
            {

                if (!isPerfectSquare(tempSum))
                {
                    cout << i << " ";
                    tempSum += i;
                }
                else
                {
                    cout << i - 1 << " ";
                    tempSum += (i - 1);
                    cout << i << " ";
                    tempSum += (i);
                    i--;
                }
            }
        }
        else
        {
            cout << n - 1 << " ";
            tempSum = n - 1;
            cout << n << " ";
            tempSum += (n);
            for (ll i = n - 1; i >= 1; i--)
            {

                if (!isPerfectSquare(tempSum))
                {
                    cout << i << " ";
                    tempSum += i;
                }
                else
                {
                    cout << i - 1 << " ";
                    tempSum += (i - 1);
                    cout << i << " ";
                    tempSum += (i);
                    i--;
                }
            }
        }

        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
