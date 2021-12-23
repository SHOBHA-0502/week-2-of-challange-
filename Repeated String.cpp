#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    long long int  n ;
    cin>>n;
    long long int p = s.size();
    long long int k = n/p;
    
    long long int count =0 ;
    for( int i =0 ; i< s.size(); i++){
        if(s[i]=='a'){
            count+=1;
            
        }
    }
    
     count = count*k ;
     
     for( int i =0 ; i< (n%s.size());i++){
         if(s[i]=='a'){
             count+=1;
         }
     }
     cout<< count ;
    
}
