#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,nrem=0,d[1000];
	    
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>d[i];
	        if(d[i]>=1000){
	            nrem++;
	        }
	    }
	    cout<<nrem<<endl;
	}
	return 0;
}
