    #include <iostream>
    #include<algorithm>
    #include<string.h>
     
    using namespace std;
     
    int main()
    {
        
        char input[1001];
        gets(input);
        int count = 1;
        int cou = 0;
        int n = strlen(input);
        for(int i = 0; i < n; i++){
            if(input[i]<=122&&input[i]>=97){
                cou++;
            }
        }
        sort(input, input + n); 
        for(int i = 2*cou-2; i < n-3; i++){
                if(input[i]!=input[i+1]){
                    count++;
                }
            
        }if(cou==0){
            cout<<0<<endl;
        }else{
            cout<<count<<endl;
        }
     
        return 0;
    }
