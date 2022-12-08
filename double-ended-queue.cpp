#include<bits/stdc++.h>

using namespace std;

int main(){

int casee=0;
cin>>casee;

for (int i = 0; i < casee; i++)
{
   

deque<int> d;


int size,n;

cin>>size>>n;

 cout<<"Case "<<i+1<<":"<<endl;

  while (n--)
{

   string s;
   cin>>s;

   if( s == "pushLeft"){

    int x;
    cin>>x;
    if(d.size() != size){
         d.push_front(x);
         cout<<"Pushed in left: "<<x<<endl;

    }
    else{
          cout<<"The queue is full"<<endl;
    }

   }

   else if( s == "pushRight"){

    int x;
    cin>>x;
    if(d.size() != size){
         d.push_back(x);
         cout<<"Pushed in right: "<<x<<endl;

    }
    else{
          cout<<"The queue is full"<<endl;
    }

   }
   
   else if( s == "popLeft"){

   
    if(!d.empty()){
       
         cout<<"Popped from left: "<<d.front()<<endl;
          d.pop_front();

    }
    else{
          cout<<"The queue is empty"<<endl;
    }

   }

     else if( s == "popRight"){

   
    if(!d.empty()){
       
         cout<<"Popped from right: "<<d.back()<<endl;
          d.pop_back();

    }
    else{
          cout<<"The queue is empty"<<endl;
    }

   }





    
}


}










}