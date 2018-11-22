//include library
#include <iostream>
using namespace std;
char upper(int p){
	int q;
	for(int i=97;i<=122;i++){
		if(p==i){
		q=i;}}
return q;
}
int main(){
	char a;
	cout<<"enter any alphabet in lowercase:";
	cin>>a;
	int p=int(a);
	int f=upper(p);
	cout<<"The uppercase of the entered character:"<<char(f-32)<<endl;
return 0;
}
