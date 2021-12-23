#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t ;
    cin >> t; 
    while(t--){
    long long int b , w , bc, wc , k;
    cin>> b>> w>> bc >>wc>> k ;
    cout<< b*min(bc, wc+k)+ w* min(bc+k , wc)<< endl ;
    }
    
    
}
