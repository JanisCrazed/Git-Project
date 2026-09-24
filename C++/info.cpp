#include <iostream>
#include <string>
using namespace std;

string info[3][6][2] = {
        { {"Student ID", "123"}, {"Name", ""}, {"Age", ""}, {"Gender", ""}, {"Contact", ""}, {"Address", ""} },  
        { {"Student ID", "456"}, {"Name", ""}, {"Age", ""}, {"Gender", ""}, {"Contact", ""}, {"Address", ""} }, 
        { {"Student ID", "789"}, {"Name", ""}, {"Age", ""}, {"Gender", ""}, {"Contact", ""}, {"Address", ""} } 
    }; 
void addData(string studentId);
void editData(string studentId);
int resume;

int checkId(string studentId){
    if (studentId == info[0][0][1]){
        return 0;
    } else if (studentId == info[1][0][1]){
        return 1;
    } else if (studentId == info[2][0][1]){
        return 2;
    } else{
        return 99;
    }
}

void addData(string studentId){
    while(true){
        system("cls");
        int Id = checkId(studentId);
        cout<<endl<<"Student ID : "<<studentId<<endl;
        cout<<"Which data wouldyou like to add?(type a number only!)"<<endl<<"1:Student ID"<<endl<<"2:Name"<<endl<<"3:Age"<<endl<<"4:Gender"<<endl<<"5:Contact"<<endl<<"6:Address"<<endl<<"7:Go Back"<<endl<<"-->";
        int act;
        cin>>act;
        system("cls");
        if(act == 1 && info[Id][0][1] == ""){
            cout<<"Enter a Student ID"<<endl<<"Student ID : ";
            getline(cin >> ws, info[Id][0][1]);
        } else if(act == 2 && info[Id][1][1] == ""){
            cout<<"Enter a new Student Name"<<endl<<"Name : ";
            getline(cin >> ws, info[Id][1][1]);
        } else if (act == 3 && info[Id][2][1] == ""){
            cout<<"Enter a Student Age"<<endl<<"Age : ";
            getline(cin >> ws, info[Id][2][1]);
        } else if (act == 4 && info[Id][3][1] == ""){
            cout<<"Enter aStudent Gender"<<endl<<"Gender : ";
            getline(cin >> ws, info[Id][3][1]);
        } else if (act == 5 && info[Id][4][1] == ""){
            cout<<"Enter a Student Contact"<<endl<<"Contact : ";
            getline(cin >> ws, info[Id][4][1]);
        } else if (act == 6 && info[Id][5][1] == ""){
            cout<<"Enter a Student Address"<<endl<<"Address : ";
            getline(cin >> ws, info[Id][5][1]);
        } else if (act == 7){ 
            break;
        } else if(act <= 6 && act >= 0){
            cout<<"This data is already occupied, would you like to edit it?(1: Yes)"<<endl<<"-->";
            int Eact = 0;
            cin>>Eact;
            if(Eact == 1){
                system("cls");
                editData(studentId);
            } else{
                system("cls");
                addData(studentId);
            }
        } else{
            cout<<"Invalid type, please input the exact number";
            addData(studentId);
        }
    }
}

void searchData(string studentId){
    int success;
    string search;
    while(true){
        success = 0;
        cout<<endl<<"Searching all student data"<<endl;
        cout<<"     ---Search a Data---"<<endl<<"Type the exact value or type 'stop' to stop."<<endl;
        cout<<"-->";
        getline(cin >> ws, search);
        if(search == "stop"){
            system("cls");
            break;
        }else{   
            for(int k = 0; k <=2; k++){
                for(int i = 0; i <= 6; i++){
                    if(info[k][i][1] == search){
                        system("cls");
                        cout<<search<<" is a "<<info[k][i][0]<<" Data Value of Student ID: "<<info[k][0][1]<<endl;
                        success = 1;
                    }
                }
            }
            if (success != 1){

                system("cls");
                cout<<"Could not find "<<search<<" as a data."<<endl;
            }
        }
    }
}

void editData(string studentId){
    while(true){
        system("cls");
        int Id = checkId(studentId);
        cout<<endl<<"Student ID : "<<studentId<<endl;
        cout<<"Which data wouldyou like to edit?(type a number only!)"<<endl<<"1:Student ID"<<endl<<"2:Name"<<endl<<"3:Age"<<endl<<"4:Gender"<<endl<<"5:Contact"<<endl<<"6:Address"<<endl<<"7:Go Back"<<endl<<"-->";
        int act;
        cin>>act;
        if(act == 1 && info[Id][0][1] != ""){
            cout<<"Enter a Student ID"<<endl<<"Student ID : ";
            getline(cin >> ws, info[Id][0][1]);
        } else if(act == 2 && info[Id][1][1] != ""){
            cout<<"Enter a new Student Name"<<endl<<"Name : ";
            getline(cin >> ws, info[Id][1][1]);
        } else if (act == 3 && info[Id][2][1] != ""){
            cout<<"Enter a Student Age"<<endl<<"Age : ";
            getline(cin >> ws, info[Id][2][1]);
        } else if (act == 4 && info[Id][3][1] != ""){
            cout<<"Enter aStudent Gender"<<endl<<"Gender : ";
            getline(cin >> ws, info[Id][3][1]);
        } else if (act == 5 && info[Id][4][1] != ""){
            cout<<"Enter a Student Contact"<<endl<<"Contact : ";
            getline(cin >> ws, info[Id][4][1]);
        } else if (act == 6 && info[Id][5][1] != ""){
            cout<<"Enter a Student Address"<<endl<<"Address : ";
            getline(cin >> ws, info[Id][5][1]);
        } else if (act == 7){
            break;
        } else if(act >= 0 && act <= 6){
            for(int i = 0; i <= 5; i++){
                if(i == act && info[Id][i][1] == ""){
                    cout<<"The data is Empty, would you like to add data?(1: Yes)"<<endl<<"-->";
                    int Eact = 0;
                    cin>>Eact;
                    if(Eact == 1){
                        system("cls");
                        addData(studentId);
                    }else{
                        system("cls");
                        editData(studentId);
                    }
                }
            }
        } else{
            cout<<"Invalid type, please input the exact number";
            editData(studentId);
        }
    }
}   

void deleteData(string studentId){
    while(true){
        system("cls");
        int Id = checkId(studentId);
        cout<<endl<<"Student ID : "<<studentId<<endl;
        cout<<"Which data wouldyou like to Delete?(type a number only!)"<<endl<<"1:Student ID"<<endl<<"2:Name"<<endl<<"3:Age"<<endl<<"4:Gender"<<endl<<"5:Contact"<<endl<<"6:Address"<<endl<<"7:Go Back"<<endl<<"-->";
        int act = 0;
        int sure = 0;
        cin>>act;
        if(act == 1 && info[Id][0][1] != ""){
            cout<<"Are you sure to delete?(1:Yes)"<<endl<<"Student ID : "<<info[Id][0][1]<<endl<<"-->";
            cin>>sure;
            if(sure == 1){
                info[Id][0][1] = "";
                system("cls");
            }else{
                system("cls");
                cout<<"Type 1 if you want to delete"<<endl;
                deleteData(studentId);
            }
        } else if(act == 2 && info[Id][1][1] != ""){
            cout<<"Are you sure to delete?(1:Yes)"<<endl<<"Name : "<<info[Id][1][1]<<endl<<"-->";
            cin>>sure;
            if(sure == 1){
                info[Id][1][1] = "";
                system("cls");
            }else{
                system("cls");
                cout<<"Type 1 if you want to delete"<<endl;
                deleteData(studentId);
            }
        } else if (act == 3 && info[Id][2][1] != ""){
            cout<<"Are you sure to delete?(1:Yes)"<<endl<<"Age : "<<info[Id][2][1]<<endl<<"-->";
            cin>>sure;
            if(sure == 1){
                info[Id][2][1] = "";
                system("cls");
            }else{
                system("cls");
                cout<<"Type 1 if you want to delete"<<endl;
                deleteData(studentId);
            }
        } else if (act == 4 && info[Id][3][1] != ""){
            cout<<"Are you sure to delete?(1:Yes)"<<endl<<"Gender : "<<info[Id][3][1]<<endl<<"-->";
            cin>>sure;
            if(sure == 1){
                info[Id][3][1] = "";
                system("cls");
            }else{
                system("cls");
                cout<<"Type 1 if you want to delete"<<endl;
                deleteData(studentId);
            }
        } else if (act == 5 && info[Id][4][1] != ""){
            cout<<"Are you sure to delete?(1:Yes)"<<endl<<"Contact : "<<info[Id][4][1]<<endl<<"-->";
            cin>>sure;
            if(sure == 1){
                info[Id][4][1] = "";
                system("cls");
            }else{
                system("cls");
                cout<<"Type 1 if you want to delete"<<endl;
                deleteData(studentId);
            }
        } else if (act == 6 && info[Id][5][1] != ""){
            cout<<"Are you sure to delete?(1:Yes)"<<endl<<"Address : "<<info[Id][5][1]<<endl<<"-->";
            cin>>sure;
            if(sure == 1){
                info[Id][5][1] = "";
                system("cls");
            }else{
                system("cls");
                cout<<"Type 1 if you want to delete"<<endl;
                deleteData(studentId);
            }
        } else if (act == 7){
            break;
        } else if(act >= 0 && act <= 6){
            for(int i = 0; i <= 5; i++){
                if(i == act && info[Id][i][1] == ""){
                    cout<<"The data is Empty, would you like to add data?(1: Yes)";
                    int Eact;
                    cin>>Eact;
                    if(Eact == 1){
                        system("cls");
                        addData(studentId);
                    }else{
                        system("cls");
                        deleteData(studentId);
                    }
                }
            }
        } else{
            cout<<"Invalid type, please input the exact number";
            deleteData(studentId);
        }
    }
}

void viewAllData(string studentId){
    
    int Id = checkId(studentId);
    cout<<"     ---Viewing Data---"<<endl<<endl;
    if(Id == 99){
        for(int k = 0; k <= 2; k++){
            for(int i = 0; i <= 5; i++){
                for(int j = 0; j <= 1; j++){
                    cout<<info[k][i][j];
                    if(j <= 0){
                        cout<<" : ";
                    }
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }else{
        for(int i = 0; i <= 5; i++){
            for(int j = 0; j <= 1; j++){
                cout<<info[Id][i][j];
                if(j <= 0){
                    cout<<" : ";
                }
            }
            cout<<endl;
        }
    }
       
}

void method(string studentId){
    int perform = 0;
    cout<<"Student ID : "<<studentId<<endl;
    cout<<"Which would you like to perform: "<<endl<<"1:Add a Data"<<endl<<"2:Edit a Data"<<endl<<"3:Delete a Data"<<endl<<"4:Search a Data"<<endl<<"5:View All Data"<<endl<<"6:Go Back"<<endl<<"-->";
    cin>>perform;
    if(perform == 1){
        resume = 0;
        system("cls");
        addData(studentId);
    }else if(perform == 2){
        resume = 0;
        system("cls");
        editData(studentId);
    }else if(perform == 3){
        resume = 0;
        system("cls");
        deleteData(studentId);
    }else if(perform == 4){
        resume = 0;
        system("cls");
        searchData(studentId);
    }else if(perform == 5){
        resume = 0;
        system("cls");
        int view = 0;
        cout<<"Type (1:View Student Only) (2:View All Student)"<<endl<<"-->";
        cin>>view;
        if(view == 1){
            system("cls");
            viewAllData(studentId); 
        } else if(view >= 2){
            system("cls");
            viewAllData("All");
        }
    }else if(perform == 6){
        system("cls");
        resume = 1; 
    }else{
        system("cls");
        cout<<"type a number from 1 to 6 only!"<<endl;
        method(studentId);
    }
}

int main(){
    cout<<"----------Welcome----------"<<endl;
    cout<<endl<<"   -----Current Data-----"<<endl;
    viewAllData("All");
    int Id = 0;
    string studentId;
    while(true){
        cout<<"Type the EXACT Student Id to interact(or type 'stop' to end the session)"<<endl<<"-->";   
        getline(cin >> ws, studentId);
        if(studentId == "stop"){
            system("cls");
            cout<<"     ---Session Stoppedd---";
            break;
        }else{          
            Id = checkId(studentId);
            if(Id > 3 || Id < 0){
                system("cls");
                cout<<"--Invalid Id--"<<endl;
            }else{
                system("cls");
                while(true){
                    if(resume != 1){
                        method(studentId);
                    }else{
                        resume = 0;
                        for(int i = 0; i <= 2; i++){
                            cout<<info[i][0][0]<<" : "<<info[i][0][1]<<endl;                      
                        }
                        break;
                    }
                }
            }
        }
    }
}