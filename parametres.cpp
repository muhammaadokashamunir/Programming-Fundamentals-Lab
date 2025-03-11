#include<iostream>
using namespace std;

float num1;
float num2;
char op;
void addition (float,float);
void diffrence (float,float);

main(){
cout<<"Enter First Number:"<<endl;
cin>>num1;

cout<<"Enter Second number:"<<endl;
cin>>num2;

cout<<"Enter Operator(+ -):"<<endl;
cin>>op;

if (op=='+'){
	addition(num1,num2);
}
if (op=='-'){
	diffrence(num1,num2);
}
}
void addition(float num1,float num2){
cout<<"The sum is: "<<num1+num2<<endl;
}

void diffrence(float num1, float num2){
cout<<"The diffrence is: "<<num1-num2<<endl;
}







