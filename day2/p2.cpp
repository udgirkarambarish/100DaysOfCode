#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int d,t=0;
	    string n;
	    cin >> d;
	    cin >> n;
	    for(int i=0;i<d;i++){
	        if(n[i]=='0' || n[i]=='5'){
	            t=1; 
	            break;
	        }
	       
	    }
	    (t==1)?(cout << "Yes" << endl):(cout << "No" << endl);
	}
	return 0;
}
