#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin>> n;
    int arr[n];
    int count=0 ;
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i =0 ;i<n-1; i++){
     if(arr[i+2]==0 && arr[i]==0){
         i++;
         count++;
         //cout<< count<< " " <<" 2j"<<endl;
     }
     else{
         count++;
         //cout<< count<< " " <<"1j"<<endl;
     }
    
   
    
}
 cout<< count <<endl;
}
