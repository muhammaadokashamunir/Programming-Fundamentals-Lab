#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int,int);
int main(){
system("cls");
printmaze();
gotoxy(2,2);
cout<<"$";
Sleep (500);
gotoxy(2,2);
cout<<" ";
gotoxy(3,2);
cout<<"$";
Sleep (500);
gotoxy(3,2);
cout<<" ";
gotoxy(4,2);
cout<<"$";
Sleep (500);
gotoxy(4,2);
cout<<" ";
gotoxy(5,2);
cout<<"$";
Sleep (500);



gotoxy(0,16);
	return 0;
}

void printmaze(){
cout<<"##################################################"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"##################################################"<<endl;}

void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
