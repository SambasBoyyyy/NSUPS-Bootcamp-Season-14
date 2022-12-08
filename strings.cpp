#include<bits/stdc++.h>

using namespace std;

int main(){


string first,second;

cin>>first>>second;


cout<<first.length()<<' '<<second.length()<<endl;

cout<<first+second<<endl;

char s;

s = first[0];
first[0]=second[0];
second[0] = s;

cout<<first<<' '<<second<<endl;



}