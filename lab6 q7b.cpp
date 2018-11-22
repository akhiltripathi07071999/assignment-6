#include <iostream>
using namespace std;
char lower(int p){
	int q;
	for(int i=65;i<=90;i++){
		if(p==i){
		q=i;}}
return q;
}
int main(){
	char a;
	cout<<"enter any alphabet in uppercase: ";
	cin>>a;
	int p=int(a);
	int x=lower(p);
	cout<<"The lowercase of the entered character: "<<char(x+32)<<endl;
return 0;
}
