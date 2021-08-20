#include <stdio.h>
#include "../include/tic.h"

char fence[3][3] = { 
     
     {'1', '2', '3'},
     {'4', '5', '6'},
     {'7', '8', '9'}
};

char player = 'X';

void Red(){
    printf("\033[1;31m");
}

void Blue(){
    printf("\033[1;34m");
}

void Yellow(){
    printf("\033[1;33m");
}

void Reset()
{
    printf("\033[0m");
}

void DrawFence()
{
    Red();
    printf("\n\n\t\t\t\t   Tic Tac Toe\n\n");
    Reset();
    Blue();
    printf("\t\t\t  Player 1 (X)  -  Player 2 (O)\n\n\n");
    Reset();

    printf("\t\t\t\t     |     |     \n");
    printf("\t\t\t\t  %c  |  %c  |  %c \n", fence[0][0], fence[0][1], fence[0][2]);

    printf("\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t     |     |     \n");

    printf("\t\t\t\t  %c  |  %c  |  %c \n", fence[1][0], fence[1][1], fence[1][2]);

    printf("\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t     |     |     \n");

    printf("\t\t\t\t  %c  |  %c  |  %c \n", fence[2][0], fence[2][1], fence[2][2]);

    printf("\t\t\t\t     |     |     \n\n");
}

void Input()
{
    int choice;
    printf("\t\t\t       Choose the number: ");
    scanf("%d", &choice);

    if(choice == 1)
	    fence[0][0] = player;
    else if(choice == 2)
	    fence[0][1] = player;
    else if(choice == 3)
	    fence[0][2] = player;
    else if(choice == 4)
	    fence[1][0] = player;
    else if(choice == 5)
	    fence[1][1] = player;
    else if(choice == 6)
	    fence[1][2] = player;
    else if(choice == 7)
	    fence[2][0] = player;
    else if(choice == 8)
	    fence[2][1] = player;
    else if(choice == 9)
	    fence[2][2] = player;
}

void TogglePlayer()
{
    if(player == 'X')
	player = 'O';
    else
	player = 'X';
}

char Win()
{
    if(fence[0][0] == 'X' && fence[0][1] == 'X' && fence[0][2] == 'X')
	    return 'X';
    if(fence[1][0] == 'X' && fence[1][1] == 'X' && fence[1][2] == 'X')
	    return 'X';
    if(fence[2][0] == 'X' && fence[2][1] == 'X' && fence[2][2] == 'X')
	    return 'X';

    if(fence[0][0] == 'X' && fence[1][0] == 'X' && fence[2][0] == 'X')
	    return 'X';
    if(fence[0][1] == 'X' && fence[1][1] == 'X' && fence[2][1] == 'X')
	    return 'X';
    if(fence[0][2] == 'X' && fence[1][2] == 'X' && fence[2][2] == 'X')
	    return 'X';

    if(fence[0][0] == 'X' && fence[1][1] == 'X' && fence[2][2] == 'X')
	    return 'X';
    if(fence[2][0] == 'X' && fence[1][1] == 'X' && fence[0][2] == 'X')
	    return 'X';
    
    if(fence[0][0] == 'O' && fence[0][1] == 'O' && fence[0][2] == 'O')
	    return 'O';
    if(fence[1][0] == 'O' && fence[1][1] == 'O' && fence[1][2] == 'O')
	    return 'O';
    if(fence[2][0] == 'O' && fence[2][1] == 'O' && fence[2][2] == 'O')
	    return 'O';

    if(fence[0][0] == 'O' && fence[1][0] == 'O' && fence[2][0] == 'O')
	    return 'O';
    if(fence[0][1] == 'O' && fence[1][1] == 'O' && fence[2][1] == 'O')
	    return 'O';
    if(fence[0][2] == 'O' && fence[1][2] == 'O' && fence[2][2] == 'O')
	    return 'O';

    if(fence[0][0] == 'O' && fence[1][1] == 'O' && fence[2][2] == 'O')
	    return 'O';
    if(fence[2][0] == 'O' && fence[1][1] == 'O' && fence[0][2] == 'O')
	    return 'O';

    return '/';
}


