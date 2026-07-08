#include<iostream> 
using namespace std;

int main (){
    int x=5;
    int* p=&x;
    cout<<p<< endl;  // this will print the address of the int x

    int y=23;
    int* e=&y;
    cout<<"the value of y will be directly accessed through this "<< *e << endl;  // *e means go to the address where addresss is stored and print that value

   // we can directly change the value of the variable whose address is stored in the pointer  variable
   
   int c=78;
   int* b=&c;
   *b=55;
   cout<<"the new value of the variablle c is "<< *b<< endl;

}
