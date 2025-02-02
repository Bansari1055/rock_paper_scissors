/* 
NAME: Bansari Patel

Create a rock paper scissors game demonstrating the difference structures learned in week 1 and 2\

choice
1-Rock
2-Paper
3-Scissor              
*/

//include libraries
#include<stdio.h>   // input output
#include<stdlib.h>  //random number function
#include<time.h>    //current computer time
//start main
int main()
{
	//variable
	int computers, players; //player choices
	char done; //loop sentinel 
	
	//re seed the random number generator with the srand() function'
	srand(time(0));  //use current time to re seed random number generator.
	//print rules welcome screen 
	printf("****************************************************************\n");
	printf("*                                                              *\n");
	printf("*             Welcome to Rock Paper Scissors                   *\n");
	printf("*                                                              *\n");
	printf("*             You will choose an option                        *\n");
	printf("*             Rock beats Scissors                              *\n");
	printf("*             Paper beats Rock                                 *\n");
	printf("*             Scissors beats Paper                             *\n");
	printf("*                                                              *\n");
	printf("****************************************************************\n");
	
	do //start  a loop for the individual game
	{
		computers=(rand() %3)+1; //generate a 1,2, or 3 
		printf("%d", computers);
		//print menu for players choice
		printf("\n\n\nPlease choose from the following options: \n");
		printf("1) Rock\n");
		printf("2) Paper\n");
		printf("3) Scissors\n");
		
		scanf("%d", &players);
		// determine who won
		if (players==computers)
		{
			switch (computers)
			{
				case 1: //rock
				printf("It's a tie- Both players chose Rock\n");
				break;
				case 2: //paper
				printf("It's a tie- Both players chose Paper\n");
				break;
				case 3: //scissors
				printf("It's a tie- Both players chose Scissors\n");
				break;
				
			}
		}
		else if(players==1)  //player chose rock
		{
			if(computers==2)  //computer is paper
			{
				printf("Computer Wins! Paper beats Rock\n");
				
			}
			else
			{
				printf("Player Wins! Rock beats scissors\n");
			}
		}
		else if(players==2)  //player chose paper
		{
			if(computers==3)  //computer is scissors
			{
				printf("Computer Wins! Scissors beat Paper\n");
				
			}else
			{
				printf("Player Wins! Paper beats Rock\n");
			}
		}
			else if(players==3)  //player chose scissors
		{
			if(computers==1)  //computer is rock
			{
				printf("Computer Wins! Rock beats scissors\n");
				
			}
			else
			{
				printf("Player Wins! Scissors beats paper\n");
			}
		}
		else
		{
			printf("Invalid Player Choice chose an option 1, 2, or 3\n");
		}
		//ask if they want to play again
		printf("Do you want to play again?: (y to continue)");
		scanf(" %c", &done);
		}while(done=='Y'|| done=='y');
	
	return 0; //end main
}
