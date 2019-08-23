    #include<iostream>
     
    using namespace std;
     
    int main()
    {
        string a = "hello";
        string s;
        cin>>s;
        int n = s.length();
        int count = 0;
        int j = 0;
        
        for(int i = 0; i < n; i++){
            if(s[i] == a[j]){
                count++;
                j++;
            }
        }
        if(count == 5){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        return 0;
    }
