#include<iostream>
using namespace std ;
int main(){
    
    int *ptr1=NULL;  // reserved address as 0 and in case of mac its 0x0 
    int *ptr2=0;
    int *ptr3='\0'; //null character 
    cout<<ptr1<<' '<<ptr2<<' '<<ptr3<<endl;
}