#include <iostream>
#include <string>
using namespace std;
char st[100000];
int top=-1;


void pushst(char a){
    top++;
	st[top] = a;
}

void opst(){
    cout<<st[top];
	top--;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int n = str.length();
	    for(int i = 0;i<n;i++){
	        if(str[i]=='('){
	            continue;
	        }
	        else if(str[i]>=97&&str[i]<=122){
	            cout<<str[i];
	        }
	        else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^'||str[i]=='%'){
	            pushst(str[i]);
	        }
	        else if(str[i] == ')'){
	            opst();
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
