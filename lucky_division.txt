#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    int array[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i = 0; i < 14; i++){
        if(n%array[i]==0){
            cout<<"YES"<<endl;
            break;
        }else{
            count++;
        }
    }if(count==14){
        cout<<"NO"<<endl;
    }
    
    return 0;
}
