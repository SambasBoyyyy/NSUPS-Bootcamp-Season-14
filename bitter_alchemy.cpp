#include<bits/stdc++.h>

using namespace std;

int main(){

int type,Moto;
cin>>type>>Moto;
int val=0;

int arr[type];

for (int i = 0; i < type; i++)
{
    cin>>arr[i];
    val += arr[i];

}

Moto = Moto - val;

sort(arr, type+arr);

cout<<((Moto/arr[0])+type)<<endl;



}