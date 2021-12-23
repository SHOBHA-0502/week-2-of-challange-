#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t ; 
    cin>> t ;
    while(t--){
        long long int  n , m ,s ;
        
        cin>> n >> m >> s;
       /* long long int q= (m%n);
        cout<< q<<endl;
         long long int p = s-1;
         while( q--){
            p++;
            if(p>n){
                p=1;
            }
        } cout<< p<<endl;
            
        }*/
        if((m-1+s)%n ==0){
            cout<<n <<endl;
        }
        else{
            cout<< (m-1+s)%n<< endl;/// howwwwwww!!!!!!!!
        }
    }
    return 0;
}
 