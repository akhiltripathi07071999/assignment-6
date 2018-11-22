//include library

#include <iostream>

using namespace std;

//function to take two parameters and finds the big
void maximum (int& x, int& y)
{
	cout<<"Enter two numbers"<<endl;
	cin>>x>>y;
	int big;
	if(x>y)
	{
		cout<< "The big number is "<<x<<endl;
	}
	else
	cout<< "The big number is "<<y<<endl;
}
// main function
int main()
{
    int x,y;
	maximum(x,y);
	return 0;
}
