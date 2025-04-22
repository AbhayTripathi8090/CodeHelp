#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>


using namespace std;

void solve(int arr[],int n,vector<int> &ans){
    stack<int> s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        while(arr[i] <= s.top()){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(arr[i]);
    }
}

int main()
{
    int arr[] ={8,4,6,2,3,9};
    int size = 6;

    vector<int>ans;

    solve(arr,size,ans);

    reverse(ans.begin(),ans.end());

    for(auto i:ans)cout<<i<<" ";
    cout<<endl;

return 0;
}
