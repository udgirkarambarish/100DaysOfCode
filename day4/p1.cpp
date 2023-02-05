#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a[10000000],cnt=0;
	    cin>>n;
	    cin>>a[0];
	    cnt++;
	    for(int i=1;i<n;i++){
	        cin>>a[i];
	        cnt++;
	        if(a[i]==a[i-1]){
	            i--;
	            cnt--;
	            n--;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
