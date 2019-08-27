#include<iostream>
     
    using namespace std;
     
    int main(){
        int n,p;
        cin>>n;
        int arr[n];
     
        for(int i = 1; i < n+1; i++){
            
            cin>>p;
            arr[p]=i;
        }
        cout<<arr[1];
        for(int j = 2; j < n+1; j++){
            cout<<" "<<arr[j];
        }
        return 0;
    }
