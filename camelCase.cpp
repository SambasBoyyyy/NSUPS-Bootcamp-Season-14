#include<bits/stdc++.h>

using namespace std;

int main(){


string f;

cin>>f;

int c=0;

for (int  i = 0; i < f.length(); i++)
{
    if (65 <= f[i] && f[i]<=90)
    {
     c++;   
    }
    
}

cout<<c+1<<endl;




}