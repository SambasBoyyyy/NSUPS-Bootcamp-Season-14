#include<bits/stdc++.h>

using namespace std;

int main(){

int n;

cin>>n;

vector<int> vec;

while (n--)
{
    int val;
    cin>>val;

    vec.push_back(val);

}

sort(vec.begin(),vec.end());

for (auto x : vec)
        cout << x << " ";





}