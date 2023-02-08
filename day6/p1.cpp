#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int k=0,arr[4];
	    for(int i=0;i<4;i++){
	        cin>>arr[i];
	        if(arr[i]>=10){
	            k++;
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}
