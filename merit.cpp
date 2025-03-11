#include <iostream>
using namespace std;

main(){

float fsc;
float cat;
float mtr;
float itr;
float agr;


cout<<"#####################################################################"<<endl;
cout<<"##                        Merit Calculator                        ###"<<endl;
cout<<"#####################################################################"<<endl;
cout<<"Enter ECAT Score:"<<endl;
cin>>cat;

cout<<"Enter FSC Marks:"<<endl;
cin>>fsc;

cout<<"Enter Matric Marks"<<endl;
cin>>mtr;

cout<<"Enter Interview Score out of 10:"<<endl;
cin>>itr;

agr=((cat/400)*50)+((fsc/1200)*40)+((mtr/1100)*30)+((itr/10)*10);
cout<<"The Aggreagte is:"<<endl;
cout<<"                 #######################      "<<endl;
cout<<"                 ###    "<<agr<<"      ###     "<<endl;
cout<<"                 #######################      "<<endl;








}