#include <bits/stdc++.h>

using namespace std;
int main(){
    int arr[26];
    int arr2;
    for(int i =0 ; i< 26 ; i++){
        cin>> arr[i];
    }
    int max = INT_MIN;
    string s;
    cin>> s;
    for(int i =0 ; i< s.size() ;i++){
        for(int j =0 ; j< 26 ; j++){
            
            if( s[i]-97 == j){
                
                
                if(arr[j]>max){
                    max = arr[j];
                
                }
                
            }
        }
    }
    
    cout<< max*s.size();
}