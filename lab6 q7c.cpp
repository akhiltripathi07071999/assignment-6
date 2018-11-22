#include <iostream>
using namespace std;
char upper(int p){
	int q;
	for(int i=97;i<=122;i++){
		if(p==i){
		q=i;}}
return q;
}
char lower(int p){
	int q;
	for(int i=65;i<=90;i++){
		if(p==i){
		q=i;}}
return q;
}
int main(){
	char a;
	int x,p;
	cout<<"enter any alphabet: ";
	cin>>a;
	p=int(a);
	if (int(a)>=97 && int(a)<=122){
	x=upper(p);
		cout<<"The uppercase of the entered character: "<<char(x-32);}
	if(int(a)>=65 && int(a)<=90){
		int x=lower(p);
		cout<<"lowercase of the entered character: "<<char(x+32)<<endl;}
return 0;
}
