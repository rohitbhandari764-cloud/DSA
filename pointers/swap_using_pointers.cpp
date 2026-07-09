#include<iostream>
using namespace std;
int swap_values(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
cout<<x<<y;
}

int main(){
    int x=3;
    int y=5;
    int *a= &x;
    int *b= &y;
    void swap_values();
    

}