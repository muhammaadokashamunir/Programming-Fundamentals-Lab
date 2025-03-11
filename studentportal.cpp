#include <iostream>
using namespace std;

main(){

string name;
string fathername;
int age;
string gender;
int rollno;
int fscobtmarks;
int fsctotalmarks;
int obt10marks;
int total10marks;

system("color 02");
cout<<"#########################################################################################"<<endl;
cout<<"###########################Student Portal################################################"<<endl;
cout<<"#########################################################################################"<<endl;
cout<<"Enter name:"<<endl;
cin>>name;

cout<<"Enter Father Name:"<<endl;
cin>>fathername;

cout<<"Enter age:"<<endl;
cin>>age;

cout<<"Enter Gender:"<<endl;
cin>>gender;

cout<<"Enter Roll No:";
cin>>rollno;

cout<<"Enter Matric Total Marks:";
cin>>total10marks;

cout<<"Enter Obtained Matric Marks:";
cin>>obt10marks;

cout<<"Enter Fsc total marks:";
cin>>fsctotalmarks;

cout<<"Enter Fsc Obtained Marks:";
cin>>fscobtmarks;

cout<<"Generating Form..."<<endl;

cout<<"*****************************************************"<<endl;
cout<<"|      *********Application Form********            | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"| It is hereby stated that "<< name<<"              | "<<endl;
cout<<"|  is the ward of                                   | "<<endl;
cout<<"| "<<fathername <<" is" << age <<" years old.       | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"| They have recieved "<<obt10marks<< "out of        | "<<endl;
cout<<"|"<<total10marks<<" in Matric and have              | "<<endl;
cout<<"|"<<fscobtmarks<<" out of "<<fsctotalmarks<<" in FSc| "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"| They have willingly applied forr admission.       | "<<endl;
cout<<"| Roll No:"<<rollno<<"                              | "<<endl;
cout<<"| Gender:"<<gender<<"                               | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"|                                                   | "<<endl;
cout<<"*****************************************************"<<endl;





}