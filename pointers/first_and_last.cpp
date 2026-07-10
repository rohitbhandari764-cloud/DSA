#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    int last = n % 10;
    int first = n;
    while(first >= 10){
        first /= 10;
    }

    cout<< first << " " << last << endl;
    return 0;
}

