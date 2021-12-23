#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t ; 
    cin>>t;
    long long int count =0;
    while(t--){
        long long int a , b ;
        cin>> a >> b ;
        
    for(int i =sqrt(a); i<= sqrt(b) ; i++){
        
            
        if( pow(i,2)>=a &&  pow(i,2)<=b){
            count+=1;
            }
          
        }
    cout << count  << endl ;
    count =0;
    }
}