#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    int k ;
    cin>> n >> k ;
    int arr[n];
    int energy =100;
    for(int i =0 ; i< n ; i++){
        cin>>arr[i];
    }
    int i =k%n ;
    energy -= arr[i]*2+1;
    while(i!=0){
        i= (i+k)%n;
        energy-=arr[i]*2 +1;
    }
    cout<< energy;
}
    

