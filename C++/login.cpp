#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, in_user, in_pass;
    cout<<"register Account:"<<endl;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    cout<<"Login:"<<endl;
    cout<<"Enter your Username: ";
    cin>>in_user;
    cout<<"Enter ypur Password: ";
    cin>>in_pass;
    if(in_user==username && in_pass==password){
        cout<<"Welcome, "<<username<<".";
    }else{
        cout<<"Invalid Username or Password";
    }
}