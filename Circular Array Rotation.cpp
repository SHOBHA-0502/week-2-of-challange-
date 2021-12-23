#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , k , q ; 
    cin>> n>>k>>q;
    int arr[n];
    int x;
    for(int i =0 ; i< n; i++){
        cin>>arr[i];
        
    }
    int s = k%n;
    int b[s];
    for(int i =0 ; i<n; i++){
        b[s++] =arr[i];
        if(s == n){
            s=0;
        }
    }
    for(int i =0 ; i< q; i++){
        cin>>x;
        cout<<b[x]<<endl;
    }
    return 0;
    }

