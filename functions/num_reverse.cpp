#include<iostream>
using namespace std;


int main(){
   int a,b;
   int box;

   cin>>a>>b;

    box=a;
    a=b;
    b=box;
    cout<<a<<" "<<b;


return 0;
}