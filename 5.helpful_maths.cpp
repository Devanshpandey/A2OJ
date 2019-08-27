#include<iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for(int i = 0; i < n; i=i+2){
        if(s[i]=='1'){
            count1++;
        }else if(s[i]=='2'){
            count2++;
        }else{
            count3++;
        }
    }for(int j = 0; j < count1; j++){
        if(j!=count1-1){
        cout<<1<<"+";
        }else{
            cout<<1;
        }
    }
    if(count2!=0&&count1!=0){cout<<"+";}
    for(int k = 0; k < count2; k++){
        if(k!=count2-1){
        cout<<2<<"+";
        }else{
            cout<<2;
        }
    }
    if((count3!=0&&count2!=0&&count1!=0)||(count2==0&&count1!=0&&count3!=0)||(count2!=0&&count3!=0)){cout<<"+";}
    for(int l = 0; l < count3; l++){
        if(l!=count3-1){
        cout<<3<<"+";
        }else{
            cout<<3;
        }
    }
    
    return 0;
}

