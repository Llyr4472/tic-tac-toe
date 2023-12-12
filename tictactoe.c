//This game was developed as Computer Science Project work by the students as per the instructions of the computer department of kmc. 
//Contributors: Prashant Giri, Praveen Aryal, Rashik Poudel, Ritesh Patak, Tanishq Gautam.
//Grade 12, KMC, Bagbazar


//Import header files
#include <stdio.h>
#include <conio.h>

//Function declarations
void printBoard();
int checkWin();
void system();

//Board where each number signifies a position
char board[]={'0','1','2','3','4','5','6','7','8','9'};

//Main game
void main(){
    int player=1,input,status=-1;
    printBoard();
   
   //(-1) means not a win or draw
    while (status==-1)
    {
        //Which player's turn
        char mark ='X';
        if(player==2)
            mark ='O';

        //Take input
        printf("Please enter Number For Player %d\n",player);
        scanf("%d",&input);

        //Verify input
        if(input<1 || input>9){
            printf("invalid input");
        }

    //printthe move
    board[input]=mark;
    printBoard();

    //Check for win/draw
    int result=checkWin();
    if(result==1){
        printf("Player %d is the Winner",player);
        return;
    }else if(result==0){
        printf("draw");
        return;
    }

    //End player's turn
    if(player==1)
        player++;
    else
        player--;
    }
    
    
}

//Function to print the board
void printBoard(){
    system("cls");
    printf("\n\n");
    printf("=== TIC TAC TOE ===\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[1],board[2],board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[4],board[5],board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[7],board[8],board[9]);
    printf("     |     |     \n");
    printf("\n\n");
}

//Checks if theres a win(1) or a draw(0) or neither(-1)
int checkWin(){

    //Win conditions
    if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
    if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
    if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
    if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
    if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
    if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
    if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
    if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    }

    //Draw conditions
    int count=0;
    for (int i = 1; i <=9; i++)
    {
        if(board[i]=='X' || board[i]=='O'){
            count++;
        }
    }
    
    if(count==9){
        return 0;
    }

    //Game hasn't ended
    return -1;
}