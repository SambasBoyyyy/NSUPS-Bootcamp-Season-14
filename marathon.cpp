#include<bits/stdc++.h>
using namespace std;

int main() {
    int times;
    cin >> times;
    while (times--) {
        int Taimur;
        cin >> Taimur;

        int o1,o2,o3;
        cin>>o1>>o2>>o3;
        vector<int> v;
        v.push_back(o1);
        v.push_back(o2);
        v.push_back(o3);
        

        int d=0;

        for (int  i = 0; i < 3; i++)
        {
            if(v[i]> Taimur){
                d++;
            }
        }

        cout<<d<<endl;
        
        
}
}