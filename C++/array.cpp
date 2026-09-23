#include <iostream>
#include<string>
using namespace std;

string name[3];
string subject[1];
string program[1];
string yr_sec[2];

int main(){
    //input info
    cout<<"--Enter Info--"<<endl;

    cout<<"Last Name: ";
    getline(cin, name[1]);
    cout<<"First Name: ";
    getline(cin, name[1]);
    cout<<"Middle Initial: ";
    getline(cin, name[1]);
    cout<<"Subject: ";
    getline(cin, subject[0]);
    cout<<"Program: ";
    getline(cin, program[0]);
    cout<<"Year: ";
    getline(cin, yr_sec[0]);
    cout<<"Section: ";
    getline(cin, yr_sec[1]);

    //output info
    cout<<"---------------------------------------------------";
    cout<<"Name: "<<name[0]<<", "<<name[1]<<" "<<name[2]<<endl;
    cout<<"Subject: "<<subject[0]<<endl;
    cout<<"Program: "<<program[0]<<endl;
    cout<<"Year & Section: "<<yr_sec[0]<<"-"<<yr_sec[1];


}