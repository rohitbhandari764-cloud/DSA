#include<iostream>
using namespace std;
int main(){
    int arr[10]={66,77,67,88,23,54,24,88,90,99};
    for(int i=0 ; i<=9 ; i++){
     if(arr[i]<=35){
        cout<<i<<',';
     }
    }
}