#include<iostream>
             
using namespace std;
             
int main(){
                
	string dub;
	int flag = 1;
	cin>>dub;
	int n = dub.length();
	int i = 0; 
	for(int i = 0; i<n; i++){    
		if(dub[i]=='W'&& dub[i+1]=='U' && dub[i+2]=='B'){
			i+=2;
			if(!flag){
			cout<<" ";
			}	    
		}
		else{
		    flag = 0;
	            cout<<dub[i];
		   }
	 }
		        
	 return 0;
}


