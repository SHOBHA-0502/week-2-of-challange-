/*#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[] = {0};
    int y = INT_MIN;
    
    for(int i =0 ; i< n ; i++){
        int x;
        cin>>x;
        arr[x] = arr[x]+1; 
        }
        
    
    for(int i =0 ; i< n ; i++){
        cout<< arr[i]<< endl ;
        //if(arr[i]>y){
           // y=arr[i];
        }
        
    }
    //cout<< y << endl ;
    //cout<< (n-y)<< endl;
    */
   #include <bits/stdc++.h>

using namespace std;

int main(){
    map<int,int>m;
    int n ;
    cin>> n ;
    int max =0;
    for(int i =0 ; i<n ; i++){
        int x;
        cin>> x;
        m[x]++;
        if(m[x]>=max){
            max = m[x];
        }
    }
    cout<< n -max;
}

    
