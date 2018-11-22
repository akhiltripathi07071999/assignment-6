//include library
#include<iostream>
using namespace std;
//define function-1
int add(int a,int b){
return (a+b);
}
//define function-2
int maximum(int a,int b){
if(a>b)
return a;
else
return b;
}
//define function-3
int minimum(int a,int b){
if(a<b)
return a;
else
return b;
}

int main() {
      int x,y,sum,max,min,i;
      cout<<"enter the value of x,y" <<endl;
      cin>>x>>y;
      cout<<"to call function 1,function 2 and function 3  press 1,2 and 3 respectively";
      cin>>i;

      if(i==1){
              cout<<"apply function 1"<<endl;
              sum=add(x,y);
              cout<<"sum is "<<sum;

              }

       else if(i==2){
                    cout<<"apply function 2"<<endl;
                    max=maximum(x,y);
                    cout<<"maximum of two number is"<<max;
                    }
       else if(i==3){
                    cout<<"apply function 3"<<endl;
                    min=minimum(x,y);
                    cout<<"minimum of two number is"<<min;
                    }

       else
           cout<<"invalid input of i";

return 0;
}
