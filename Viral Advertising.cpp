#include <bits/stdc++.h>

using namespace std;

int main(){

int n ; cin>> n ;
int x =5 ;
int t=0, p=0 ;
   

    for(int i=0 ; i<n ; i++ ){
        p = x/2;
        t = p+t;
        x =p*3;
       
    }
 
cout<< t <<endl;
}


