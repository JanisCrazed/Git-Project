#include<iostream>
#include<string>
using namespace std;

// sir ang hirap ng early draw kasi sobrang daming possible na winning position eh, if manually iccheck super dami and ewan hehe

// what i changed: pretty table, diagonal and vertical wining, auto tie at move 9(full table)

string board[3][3] = {{" "," "," "},{" "," "," "},{" "," "," "}};
int row,col;
int turn = 0;
void resetboard(){
    turn = 0;
    for(int i = 0;i < 3;i++){
        board[i][0] = " ";
        board[i][1] = " ";
        board[i][2] = " ";
    }
}

void gameboard(){
    cout<<"  C 0   1   2  "<<endl;
    cout<<"R +---+---+---+"<<endl;
    for(int row = 0;row<3;row++){
        cout<<row<<" | "<<board[row][0]<<" | "<<board[row][1]<<" | "<<board[row][2]<<" |"<<endl;
        if(row < 2){
            cout<<"  +---+---+---+"<<endl;
        }
    }
    cout<<"  +---+---+---+"<<endl;
}
void checkwin(string name){
    if(turn == 9){
        system("cls");
        gameboard();
        cout<<"Its a tie!"<<endl;
        resetboard();
        system("pause");
    } else{
        for(int row = 0;row < 3;row++){
            if(board[row][0] == "X" && board[row][1] == "X" && board[row][2] == "X"){
            gameboard();
            cout<<"You are the winner "<<name<<endl;
            resetboard();
            system("pause");
            }else if(board[row][0] == "O" && board[row][1] == "O" && board[row][2] == "O"){
            gameboard();
            cout<<"You are the winner "<<name<<endl;
            resetboard();   
            }
        }

        for(int col = 0;col < 3;col++){
            if(board[0][col] == "X" && board[1][col] == "X" && board[2][col] == "X"){
            gameboard();
            cout<<"You are the winner "<<name<<endl;
            resetboard();
            system("pause");
            }else if(board[0][col] == "O" && board[1][col] == "O" && board[2][col] == "O"){
            gameboard();
            cout<<"You are the winner "<<name<<endl;
            resetboard();
            system("pause");     
            }
        }
        if(board[0][0] == "X" && board[1][1] == "X" && board[2][2] == "X"){
            gameboard();
            cout<<"You are the winner "<<name<<endl;
             resetboard();
            system("pause");
        }else if(board[0][0] == "O" && board[1][1] == "O" && board[2][2] == "O"){
            gameboard();
            cout<<"You are the winner "<<name<<endl;
            resetboard();
            system("pause");
        }

        if(board[0][2] == "X" && board[1][1] == "X" && board[2][0] == "X"){
            gameboard();
            cout<<"You are the winner "<<name<<endl;
            resetboard();
            system("pause");
        }else if(board[0][2] == "O" && board[1][1] == "O" && board[2][0] == "O"){
            gameboard();
            cout<<"You are the winner "<<name<<endl;
            resetboard();
            system("pause");
        }
    }




    for(int col = 0;col<3;col++){
        if(board[0][col] == "X" && board[1][col] == "X" && board[2][col] == "X"){
        gameboard();
        cout<<"Your are the winner "<<name<<endl;
        resetboard();
        system("pause");
        }
    }
   
}
void player1(){
    cout<<"Player 1"<<endl;
    cout<<"Enter Row:";
    cin>>row;
    cout<<"Enter Column:";
    cin>>col;
    if(row >=3 || col >=3){
        cout<<"God Bless"<<endl;
        player1();
    }else{
        if(board[row][col] != " "){
        cout<<"Slot taken by X or O"<<endl;
        player1();
    }else{
        board[row][col] = "X";
        turn += 1;
        checkwin("Player 1");
    }
    }

   
}
void player2(){
    cout<<"Player 2"<<endl;
    cout<<"Enter Row:";
    cin>>row;
    cout<<"Enter Column:";
    cin>>col;
    if(row >=3 || col >=3){
        cout<<"God Bless"<<endl;
        player2();
    }else{
        if(board[row][col] != " "){
        cout<<"Slot taken by X or O"<<endl;
        player2();
    }else{
        board[row][col] = "O";
        turn += 1;    
        checkwin("Player 2");
    }
    }
   
}

int main(){
    while(true){
   
    gameboard();
    player1();    
    system("cls");
    gameboard();
    player2();    
    system("cls");
   
    }
}
