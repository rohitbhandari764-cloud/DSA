#include<iostream>
using namespace std;
int main(){
    int a=14;
    int *x= &a;
    // int b= ++(*x);//pre increment first increase the value and then change the value of b to the new valure
    int b=(*x)++;  // this is the post increament first give the value and then increase it .

    cout<<a<<" "<<b;
}