#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,sum=0;
	    cin>>n;
	    k=n;
	    while(n>0){
	        sum=(sum*10)+n%10;
	        n/=10;
	    }
	    cout<<((sum==k)?"wins":"loses")<<endl;
	}
	return 0;
}
