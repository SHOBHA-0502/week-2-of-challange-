#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t ;
    cin>> t ;
   
    while(t--){
        long long int n ;
         long long int count =0;
        long long int r,p ; 
        cin>>n ;
        r=n;
        
        while(r!=0){
            
            p = r%10;
            if (p ==0){
                count = count ;
            }
            else if (n%p==0 ){
                count++;
            }
            r=r/10;
        }
        cout<< count << endl;
    }
    
}
