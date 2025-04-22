#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
// #include<vector>

using namespace std;
int main()
{

    vector<int> v(5);
    iota(v.begin(),v.end(),240);
    for(int a:v){
        cout<<a<<" ";
    }

    // vector<int> second;
    // second.push_back(1);
    // second.push_back(2);
    // second.push_back(3);
    // second.push_back(4);

    // vector<int> first(second.size());

    // partial_sum(second.begin(),second.end(),first.begin());
    // for(int a:first){
    //     cout<<a<<" ";
    // }


    // vector<int> first;
    // first.push_back(1);
    // first.push_back(2);
    // first.push_back(3);

    // vector<int> second;
    // second.push_back(3);
    // second.push_back(4);
    // second.push_back(5);

    // int ans = inner_product(first.begin(),first.end(),second.begin(),0);
    // cout<<ans<<endl;
    // vector<int> v(5);
    //  v[0] = 10;
    //  v[1] = 20;
    //  v[2] = 30;
    //  v[3] = 40;
    //  v[4] = 50;

    // int total = accumulate(v.begin(),v.end(),0);
    // cout<<total<<endl;
return 0;
}