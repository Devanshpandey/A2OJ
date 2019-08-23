#include<iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i]>=65 && s[i]<= 91){
            s[i]=s[i]+32;
        }
    } for(int j = 0; j < n; j++){
        if(s[j]!='a' && s[j]!='e' &&s [j]!='i' && s[j]!='o' && s[j]!='u'&& s[j]!='y'){
            cout<<"."<<s[j];
        }
    }
    
    return 0;
}
