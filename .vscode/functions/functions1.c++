#include<iostream>
using namespace std;

    int fact(int x){
    int f=1;
    for(int i=2; i<=x ;i++){
    f*=i;
    }
    return f;
    }

int main(){
     
    int n;
    int r;
    cout<< "enter the value of n:";
    cin>> n;

    cout<<"enter the value of r:";
    cin>> r;

    int nfact= fact(n);
    int rfact= fact(r);
    int nmrfact= fact(n-r);

    int output=nfact/(rfact*nmrfact);
    cout<<"the output of the combination is :"<<output;
}


//     int nfact=1;
//     for(int i=1; i<=n; i++){
//         nfact *=i;
//     }

    

// int rfact=1;
//     for(int i=1; i<=r; i++){
//         rfact *=i;
//     }



// int nmrfact=1;
//     for(int i=1; i<=(n-r); i++){
//         nmrfact *=i;
//     }

//     int ncr= nfact/(rfact * nmrfact);

//     cout<<"thus the resultant value of the combination is:"<<ncr;
// }