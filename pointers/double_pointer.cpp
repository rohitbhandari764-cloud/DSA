#include<iostream>
using namespace std;
int main(){
    int n=4;
    int *ptr=&n;
    int **p=&ptr;
    cout<<n<<endl; // first the value of 4 will get print
    cout<<ptr<<endl; //address of n will be printed here 
    cout<<p<<endl;  // here the address of ptr will be printed here 
}