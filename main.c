#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

int eaten = 0;
int points = 0;
int rx = 7;
int ry = 5;
int nu = 3;

void play(int currentpositionx, int currentpositiony);
void grid(int currentpositionx, int currentpositiony);
int CheckLimits(int x, int y);
void lost();
void won();

void won()
{

	system("cls");

	printf(ANSI_COLOR_CYAN "\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tX    Congratulations, you won!!   X\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
}

void grid(int currentpositionx, int currentpositiony)
{
	int xy[16][9] = {0};		 // Set all map to 0
							 // printf("%d\n", currentposition);
	xy[currentpositionx][currentpositiony] = 1; // Set player to 1


	if (eaten == 1)
	{									 // Check if player ate the fruit
		rx = rand() % 16;				 // Get a random position in the map
		ry = rand() % 9;
		eaten = 0;						 // Set eaten to 0 again(then it will appear a new fruit in the map)
		nu = rand() % ((9 + 1) - 2) + 2; // Get a random number between 2 and 9
	}

	xy[rx][ry] = nu; // Number that will appear as a fruit in the map
	printf(ANSI_COLOR_GREEN "\t\tMove Test in C\n");
	printf("\t\tDeveloped by Jorge\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN "\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][0], xy[1][0], xy[2][0], xy[3][0], xy[4][0], xy[5][0], xy[6][0], xy[7][0], xy[8][0], xy[9][0], xy[10][0], xy[11][0], xy[12][0], xy[13][0], xy[14][0], xy[15][0]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][1], xy[1][1], xy[2][1], xy[3][1], xy[4][1], xy[5][1], xy[6][1], xy[7][1], xy[8][1], xy[9][1], xy[10][1], xy[11][1], xy[12][1], xy[13][1], xy[14][1], xy[15][1]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][2], xy[1][2], xy[2][2], xy[3][2], xy[4][2], xy[5][2], xy[6][2], xy[7][2], xy[8][2], xy[9][2], xy[10][2], xy[11][2], xy[12][2], xy[13][2], xy[14][2], xy[15][2]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][3], xy[1][3], xy[2][3], xy[3][3], xy[4][3], xy[5][3], xy[6][3], xy[7][3], xy[8][3], xy[9][3], xy[10][3], xy[11][3], xy[12][3], xy[13][3], xy[14][3], xy[15][3]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][4], xy[1][4], xy[2][4], xy[3][4], xy[4][4], xy[5][4], xy[6][4], xy[7][4], xy[8][4], xy[9][4], xy[10][4], xy[11][4], xy[12][4], xy[13][4], xy[14][4], xy[15][4]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][5], xy[1][5], xy[2][5], xy[3][5], xy[4][5], xy[5][5], xy[6][5], xy[7][5], xy[8][5], xy[9][5], xy[10][5], xy[11][5], xy[12][5], xy[13][5], xy[14][5], xy[15][5]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][6], xy[1][6], xy[2][6], xy[3][6], xy[4][6], xy[5][6], xy[6][6], xy[7][6], xy[8][6], xy[9][6], xy[10][6], xy[11][6], xy[12][6], xy[13][6], xy[14][6], xy[15][6]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][7], xy[1][7], xy[2][7], xy[3][7], xy[4][7], xy[5][7], xy[6][7], xy[7][7], xy[8][7], xy[9][7], xy[10][7], xy[11][7], xy[12][7], xy[13][7], xy[14][7], xy[15][7]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[0][8], xy[1][8], xy[2][8], xy[3][8], xy[4][8], xy[5][8], xy[6][8], xy[7][8], xy[8][8], xy[9][8], xy[10][8], xy[11][8], xy[12][8], xy[13][8], xy[14][8], xy[15][8]);
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED "\tYou lose your points if you reach the limit of the map\n" ANSI_COLOR_RESET);
	//printf("\tPosition : %d\n", r);

	/* System of changing text color according to points */
	if (points < 50)
	{
		printf("\t\t\t%d points\n", points);
	}
	else
	{
		if (points >= 500)
		{
			printf(ANSI_COLOR_CYAN "\t\t\t%d points\n" ANSI_COLOR_RESET, points);
		}
		else
		{
			if (points >= 300)
			{
				printf(ANSI_COLOR_MAGENTA "\t\t\t%d points\n" ANSI_COLOR_RESET, points);
			}
			else
			{
				if (points >= 200)
				{
					printf(ANSI_COLOR_BLUE "\t\t\t%d points\n" ANSI_COLOR_RESET, points);
				}
				else
				{
					if (points >= 100)
					{
						printf(ANSI_COLOR_GREEN "\t\t\t%d points\n" ANSI_COLOR_RESET, points);
					}
					else
					{
						if (points >= 50)
						{
							printf(ANSI_COLOR_YELLOW "\t\t\t%d points\n" ANSI_COLOR_RESET, points);
						}
					}
				}
			}
		}
	}
	/* /System of changing text color according to points */

	printf(ANSI_COLOR_YELLOW "\t\t\t\t\n\n\n\n\n								If you want to reset press " ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED "R\n" ANSI_COLOR_RESET);

	if (currentpositionx == rx && currentpositiony == ry)
	{			   // If player get the fruit
		eaten = 1; // Set eaten to 1 bcs player ate the fruit.
		xy[rx][ry] = 1;
		currentpositionx = currentpositionx + 1;
		xy[rx][ry] = 0;			  // Set the position that the fruit was in to 0
		points = points + nu; // Current Points + value of the fruit(line 43)
	}
	else
	{
		eaten = 0; // If player didn't get the fruit, set eaten to 0;
	}

	if (points >= 500)
	{
		won();
	}
}

int main(int rp)
{
	int currentpositionx = 0;
	int currentpositiony = 0;
	char c = 'a';
	eaten = 0;
	points = 0;
	rx = 7;
	ry = 5;
	nu = 3;
	if(rp == 1)
		printf(ANSI_COLOR_BLUE "\nPress 'P' to play again\n");
	else
		printf(ANSI_COLOR_BLUE "Press 'P' to play\n");

	for (;;)
	{
		if (kbhit())
		{
			c = getch();
			if (c == 'p' || c == 'P')
			{ // Check if player pressed "P"

				printf("PLAY\n" ANSI_COLOR_RESET);
				system("cls"); // Clear console
				play(currentpositionx, currentpositiony);	 // Call play function
			}
		}
	}
}

void play(int currentpositionx, int currentpositiony)
{
	char c;
	grid(currentpositionx, currentpositiony);

	for (;;)
	{
		if (kbhit())
		{
			c = getch();
			//printf("%c\n", c); // Print which key player is pressing
			if (c == 's' || c == 'S' || c == 80)
			{						
				if(CheckLimits(currentpositionx, currentpositiony+1) == 0)
				{
					currentpositiony++;
					system("cls");
					grid(currentpositionx, currentpositiony);
				}
				else
				{
					lost();
				}
			}
			if (c == 'w' || c == 'W' || c == 72) // Check if player pressed "W"/"w" or UP Arrow
			{
				if(CheckLimits(currentpositionx, currentpositiony-1) == 0)
				{
					currentpositiony--;
					system("cls");
					grid(currentpositionx, currentpositiony);
				}
				else
				{
					lost();
				}
			}
			if (c == 'd' || c == 'D' || c == 77) // Check if player pressed "D"/"d" or right arrow
			{
				if(CheckLimits(currentpositionx+1, currentpositiony) == 0)
				{
					currentpositionx++;
					system("cls");
					grid(currentpositionx, currentpositiony);
				}
				else
				{
					lost();
				}
			}
			if (c == 'a' || c == 'A' || c == 75) // Check if player pressed "A"/"a" or left arrow
			{
				if(CheckLimits(currentpositionx-1, currentpositiony) == 0)
				{
					currentpositionx--;
					system("cls");
					grid(currentpositionx, currentpositiony);
				}
				else
				{
					lost();
				}
			}
			if (c == 'r' || c == 'R') // A key to reset
			{
				points = 0;
				currentpositionx = 0;
				currentpositiony = 0;
				eaten = 0;
				rx = rand() % 16;				 // Get a random position in the map
				ry = rand() % 9;
				nu = rand() % ((9 + 1) - 2) + 2; // Get a random number between 2 and 9
				system("cls");
				grid(currentpositionx, currentpositiony);
			}
		}
	}
}

int CheckLimits(int x, int y)
{
	if(x > 15 || y > 8 || x < 0 || y < 0)
		return 1;
	else
		return 0;
}

void lost()
{
	
	system("cls");
	printf(ANSI_COLOR_CYAN "\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\t             YOU LOST!!                \n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");

	main(1);
}
