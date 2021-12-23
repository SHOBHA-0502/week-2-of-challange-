#include <bits/stdc++.h>

using namespace std;

int main(){
    int t ;
    cin>> t;
    while(t--){
        int n; 
        cin >> n ;
        if(n==0){
            cout<< "1 "<< endl;
        }
        else{
        int x =1;
        for(int i =1 ; i<n+1;i++ ){
            
            if( i%2 ==0 && i !=0){
                
                x+=1;
                
            
            }
            else{
                
                x= 2*x;
                
            
            }
            
        }
        cout<< x<< endl;
    }
    }
}