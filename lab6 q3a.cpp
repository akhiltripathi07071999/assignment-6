//include library
#include <iostream>

using namespace std;

//function to take two int parameters and return the big
int big (int x, int y)
{
	cout<<"Enter two numbers"<<endl;
	cin>>x>>y;
	if(x>y)
	{
		cout<< "The big number is "<<x<<endl;
	}
	else
	cout<< "The big number is "<<y<<endl;
	return 0 ;
}

// main function
int main()
{
	int x,y;
	big(x,y);
	return 0;
}
