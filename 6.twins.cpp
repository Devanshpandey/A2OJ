#include<iostream>
#include <algorithm> 
using namespace std;

int main()
{
   int n;
   int count = 0;
   cin>>n;
   int arr[n];
   int sum = 0;
   for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum = sum + arr[i];
   }
   int half = sum / 2;
   int max_sum = 0;
   sort(arr, arr+n, greater<int>());
   for(int j = 0; j < n; j++){
       max_sum = max_sum + arr[j];
       count++;
       if(max_sum>half){
           break;
       }
   }
   cout<<count;
    
    return 0;
}

