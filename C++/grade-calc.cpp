#include<iostream>
#include<string>
using namespace std;
// Sir Arjo, reusable napo to so if example total points sa quiz 150, assigment 200 midterm and finals 100 
int main(){
    int quiz, assignment, midterm, finals;
    float tquiz, tass, tmid, tfinals;
    string name, secyear, subject, remark;
    // Information INPUT
    cout<<"Enter Your Information"<<endl;
    cout<<"Name: ";
    getline(cin, name); // nagka problem if cin lang, if inputting names with spaces nakukuha ng next cin yung values after spaces
    cout<<"Section & Year: ";
    cin>>secyear;
    cout<<"Subject: ";
    cin>>subject;
    // Grades INPUT
    cout<<endl<<"Enter Your Grades and Total Points"<<endl;
    cout<<"Quiz: ";
    cin>>quiz;
    cout<<"Total Quizzes: ";
    cin>>tquiz;
    cout<<"Assignment: ";
    cin>>assignment;
    cout<<"Total Assignments: ";
    cin>>tass;
    cout<<"Midterm: ";
    cin>>midterm;
    cout<<"Total Midtems: ";
    cin>>tmid;
    cout<<"Finals: ";
    cin>>finals;
    cout<<"Total Finals: ";
    cin>>tfinals;
    // COMPUUTATION
    // quiz = 20% assignmen = 20% midterm = 25% finals = 35%ss
    float fquiz, fass, fmid, ffinal, fgrade;
    fquiz = ((quiz / tquiz) * 100) * 0.20;
    fass =  ((assignment / tass) * 100) * 0.20;
    fmid = ((midterm / tmid) * 100) * 0.25;
    ffinal = ((finals / tfinals) * 100) * 0.35;
    fgrade = fquiz + fass + fmid + ffinal;
    //check remarks
    if (fgrade < 75){
        remark = "-Failed";
    }
    else if (fgrade >= 75 && fgrade <= 79){
        remark = "-Passed";
    }
    else if (fgrade >= 80 && fgrade <= 84){
        remark = "-Good";
    }
    else if (fgrade >= 85 && fgrade <= 89){
        remark = "-Very Good";
    }
    else if (fgrade >= 90 && fgrade <= 100){
        remark = "-Excellent";
    }
    // OUtput
    cout<<endl<<"_____________________________________________________________________________";
    cout<<endl<<"Name: "<<name<<endl;
    cout<<"Section & Year: "<<secyear<<endl;
    cout<<"Subject: "<<subject<<endl;
    cout<<endl<<"Your Final Grade: "<<fgrade<<remark;
    cout<<endl<<"_____________________________________________________________________________";

}