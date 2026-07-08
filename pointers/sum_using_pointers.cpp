# include<iostream>
using namespace std;

int main(){
 int a,b;
  int* x=&a;
  int* y=&b;
  cout<<"enter the first value"<<endl;
  cin>>a;
  cout<<"enter the second value"<<endl;
  cin>>b;

cout<<"the sum of the values is "<<a+b;  // both are the right way to write the sum 
// cout<<"the sum of the values is "<< *x+*y;
}