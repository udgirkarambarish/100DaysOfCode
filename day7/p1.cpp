#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	   int n; cin>>n;
	   int arr[n];
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   sort(arr,arr+n);
	   for(int i=0;i<n;i+=2){
	       if(arr[i]!=arr[i+1]){
	            cout<<arr[i]<<endl;
	            break;
	       }
	   }
	}
	return 0;
}
