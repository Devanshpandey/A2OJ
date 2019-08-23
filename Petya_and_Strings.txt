#include<iostream>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int count = 0;
    int n = s1.length();
    for(int i = 0; i < n; i++){
        if(s1[i]>=65 && s1[i]<=91){
            s1[i] = s1[i] + 32;
        }
    }
     for(int i = 0; i < n; i++){
        if(s2[i]>=65 && s2[i]<=91){
            s2[i] = s2[i] + 32;
        }
    }
    for(int i = 0; i < n; i++){
        if(s1[i]==s2[i]){
            count++;
        }
    } if(count==n){
        cout<<0<<endl;
    }
    for(int j = 0; j < n; j++){
        if(s1[j]!=s2[j]){
            if(s1[j]<s2[j]){
                cout<<-1<<endl;break;
            }else{
                cout<<1<<endl;break;
                }
        }
    }
   
   return 0;
}
