#include <iostream>
using namespace std;

char st1[10000000];
char st2[10000000];
char st3[10000000];

int top1=-1;
int top2=-1;
int top3=-1;

void opst2(){
    for(int i=0;i<top2;i++){
        cout<<st2[top2];
    }
    top2=-1;
}

void opst3(){
    while(top3!=-1){
        cout<<st3[top3];
        top3--;
    }
}

void pushst1(char a){
    top1++;
    st1[top1]=a;
}

void pushst2(char a){
    top2++;
    st2[top2]=a;
}

void pushst3(char a){
    top3++;
    st3[top3]=a;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	   // int i=0;
	    cin>>str;
	    for(int i=0;i<str.size();i++){
	        if(str[i]=='('){
	            pushst1(str[i]);
	        }else if((str[i]>='a')&&(str[i]<='z')){
	           pushst2(str[i]); 
	        }else if(str[i]=='(' || str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^'){
	            pushst3(str[i]);
	        }else if(str[i]==')'){
	            top1--;
	            while(str[i]!='('){
	                i--;
	            }
	            i--;
	            opst2();
	            opst3();
	        }
	    }
	}
	return 0;
}
