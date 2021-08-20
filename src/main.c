#include <stdio.h>
#include <stdlib.h>
#include "../include/tic.h"

int main(void)
{
	DrawFence();
	while(1)
	{
	    Input();
	    DrawFence();
	    system("clear");
	    DrawFence();
	    if(Win() == 'X')
	    {
	        Yellow();
		printf("\t\t\t\t>>>> X WINS! <<<<\n");
		Reset();
		break;
	    }else if(Win() == 'O')
	    {
		Yellow();
		printf("\t\t\t\t>>>> O WINS! <<<<\n");
		Reset();
		break;
	    }
	    TogglePlayer();
	}
	return 0;
}
