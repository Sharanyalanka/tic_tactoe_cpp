#include <iostream>
using namespace std;

    char board[9] = {'1','2','3','4','5','6','7','8','9'};
    void displayboard(){
        cout<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<endl;
        cout<<"----------"<<endl;
        cout<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<endl;
        cout<<"----------"<<endl;
        cout<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<endl;
        }
        bool checkwin() {
  
    if(board[0]==board[1] && board[1]==board[2]) return true;
    if(board[3]==board[4] && board[4]==board[5]) return true;
    if(board[6]==board[7] && board[7]==board[8]) return true;

   
    if(board[0]==board[3] && board[3]==board[6]) return true;
    if(board[1]==board[4] && board[4]==board[7]) return true;
    if(board[2]==board[5] && board[5]==board[8]) return true;

   
    if(board[0]==board[4] && board[4]==board[8]) return true;
    if(board[2]==board[4] && board[4]==board[6]) return true;

    return false;
}
bool checkdraw(){
    for(int i=0;i<9;i++){
        if(board[i]!='X'&&board[i]!='O')
        return false;
    }
    return true;
}
        int main(){
            int choice;
            char player = 'X';
            while(true){
            displayboard();
            cout << "Player " << player << ", enter position: ";
        cin >> choice;
    if(choice < 1 || choice > 9 || board[choice-1] == 'X' || board[choice-1] == 'O') {
            cout << "Invalid move! Try again.\n";
            continue;
        }
         board[choice-1] = player;
           
            if(checkwin()) {
    displayboard();
    cout << "Player " <<player<< " wins!\n";
    break;
 }
 if(checkdraw()){
    displayboard();
    cout<<"It is draw\n";
    break;
}
 player = (player == 'X') ? 'O' : 'X';
 
}
return 0;

        }
