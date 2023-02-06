#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int n,k=1;
	    n=str.length();
	    for(int i=1;i<n;i++){
	        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
	            if(str[i-1]=='a'||str[i-1]=='e'||str[i-1]=='i'||str[i-1]=='o'||str[i-1]=='u'){
	                k++;
	            }else{
	                k=1;
	                continue;
	            }
	        }
	    }
	    if(k>2){
	        cout<<"happy"<<endl;
	    }else{
	        cout<<"sad"<<endl;
	    }
	}
	return 0;
}
