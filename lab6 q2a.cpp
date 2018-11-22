
//including library
#include<iostream>
using namespace std;

//Define function
int add (int x,int y)
{
	int sum;
	sum = (x + y);
}

int main()
{
	int p,m,n;
	cout << "Enter two numbers" <<endl;	//taking the input of two numbers
	cin >> m >> n;
	p = add (m,n);				 //call function
	cout << "the addition is: " << p <<endl; //print the result
}

