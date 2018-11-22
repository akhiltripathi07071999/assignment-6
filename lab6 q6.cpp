//include libabry
#include<iostream>
using namespace std;
int SumEvenNumbers(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==0){
			sum+=i;}}
	return sum;
}
int SumOddNumbers(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==1){
			sum+=i;}}
	return sum;
}
int SumSquareEvenNumbers(int num1,int num2){
	int Sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==0){
			Sum+=i*i;}}
	return Sum;
}
int SumSquareOddNumbers(int num1,int num2){
	int Sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==1){
			Sum+=i*i;}}
	return Sum;
}

int main() {
	int num1,num2;
	cout<<"Let the two numbers be ";
	cin>>num1;
	cin>>num2;
	cout<<"the sum of even numbers between "<<num1<<" and "<<num2<<" is " <<SumEvenNumbers(num1,num2)<<endl;
    cout<<"the sum of odd numbers between "<<num1<<" and "<<num2<<" is " <<SumOddNumbers(num1,num2)<<endl;
	cout<<"the sum of squares of even numbers between "<<num1<<" and "<<num2<<" is " <<SumSquareEvenNumbers(num1,num2)<<endl;
	cout<<"the sum of  squares of odd numbers between "<<num1<<" and "<<num2<<" is " <<SumSquareOddNumbers(num1,num2)<<endl;
	return 0;
}
