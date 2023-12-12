//This game was developed as Computer Science Project work by the students as per the instructions of the computer department of kmc. 

//Contributors: Prashant Giri, Praveen Aryal, Rashik Poudel, Ritesh Pathak, Tanishq Gautam.
//Grade 12, KMC, Bagbazar


//This game implements 3 helper functions and a main function and relies on a while loop for each set of turns. No GUI is implemented and the game uses console inputs and outputs for playing. Its a p2p game and can also be made into player to computer/ai game but its not in the scope of learning at grade 12.
//The code has been hosted at https://github.com/Llyr4472/tic-tac-toe

//Difficulties encountered:
// 1. Verifying each move
// 2. Keeping track of players and moves
// 3. Winner/Draw logic implementation


//Import header files
#include <stdio.h>

//Function declarations
void printBoard();
int checkWin();
void system();

//Board where each number signifies a position
char board[]={'0','1','2','3','4','5','6','7','8','9'};

//Main game
void main(){

    //initialize variables and board
    int player=1,input,status=-1;
    printBoard();
   
   //(-1) means not a win or draw
    while (status==-1)
    {
        //Choose the symbol according the player (default player 1 as 'X' )
        char mark ='X';
        if(player==2)
            mark ='O';

        //Take input
        printf("Please enter Number For Player %d\n",player);
        scanf("%d",&input);

        //Verify input. Checks if input position exists or not (i.e is between 1-9 or not) and if its already taken
        if((input<1 || input>9) || (board[input] == 'X' || board[input] == 'O')){
            printf("invalid input\n\n");
            continue;
        }

    //print the move to the console
    board[input]=mark;
    printBoard();

    //gets result of the move fron checkWin function (1=won,0=draw,-1=not won nor draw)
    int result=checkWin();
    if(result==1){
        printf("Player %d is the Winner",player);
        return;
    }else if(result==0){
        printf("draw");
        return;
    }

    //Switch player and end the turn
    if(player==1)
        player++;
    else
        player--;
    }
    
    
}

//Function to print the board
void printBoard(){

    //clears console (windows specific)
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

    //Draw condition i.e every position has been filled
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


//We express our gratitude to the Computer Department at KMC for providing guidance and support throughout the development of this project.