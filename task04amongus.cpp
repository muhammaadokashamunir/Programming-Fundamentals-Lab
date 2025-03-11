#include <iostream>
using namespace std;

int main(){

system("color 75");
int player;
int imp;
int chance;
int fraction;

cout<<"Enter number of imposters:"<<endl;
cin>>imp;

cout<<"Enter number of Players:"<<endl;
cin>>player;

fraction=imp/player;
chance=fraction*100;
cout<<"Your chance of being the imposter is " << chance <<" percent."<<endl;
cout<<"Enjoy the game man!"<<endl;

}
