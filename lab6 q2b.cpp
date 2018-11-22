//include library
#include<iostream>
using namespace std;


//declare void function
void add (int x, int y, int &z){
	z=x+y;
}

int main(){
	int p,q,s;
	cout << "Enter two numbers" <<endl;	//ask for inputs
	cin >>p>>q;				//take values
	add (p,q,s);				//call function
	cout << "the sum is: " << s <<endl;
return 0;
}
