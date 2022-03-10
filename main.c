#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int eaten = 0;
int points = 0;
int r = 75;
int nu = 3;

int won() {

	system("cls");

	printf(ANSI_COLOR_CYAN"\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
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

int grid(int currentposition)
{
	int xy[1000] = { 0 }; // Set all map to 0
						  //printf("%d\n", currentposition);
	xy[currentposition] = 1; // Set player to 1

	while (r == 0 || r == 9 || r == 10 // Check if the "food" is in a position that don't exist in the map.
		|| r == 19 || r == 20
		|| r == 29 || r == 30
		|| r == 39 || r == 40
		|| r == 49 || r == 50
		|| r == 59 || r == 60
		|| r == 69 || r == 70
		|| r == 80 || r == 90
		|| r == 100 || r == 110
		|| r == 120 || r == 130
		|| r == 140 || r == 150) {
		r = rand() % 158; // Get a random position in the map
	}

	srand(time(NULL));
	if (eaten == 1) { // Check if player ate the fruit
		r = rand() % 158; // Get a random position in the map
		eaten = 0; // Set eaten to 0 again(then it will appear a new fruit in the map)
		nu = rand() % ((9 + 1) - 2) + 2; // Get a random number between 2 and 9
	}


	xy[r] = nu; // Number that will appear as a fruit in the map
	printf(ANSI_COLOR_GREEN"\t\tMove Test in C\n");
	printf("\t\tDeveloped by Jorge\n"ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN"\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[01], xy[11], xy[21], xy[31], xy[41], xy[51], xy[61], xy[71], xy[81], xy[91], xy[101], xy[111], xy[121], xy[131], xy[141], xy[151]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[02], xy[12], xy[22], xy[32], xy[42], xy[52], xy[62], xy[72], xy[82], xy[92], xy[102], xy[112], xy[122], xy[132], xy[142], xy[152]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[03], xy[13], xy[23], xy[33], xy[43], xy[53], xy[63], xy[73], xy[83], xy[93], xy[103], xy[113], xy[123], xy[133], xy[143], xy[153]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[04], xy[14], xy[24], xy[34], xy[44], xy[54], xy[64], xy[74], xy[84], xy[94], xy[104], xy[114], xy[124], xy[134], xy[144], xy[154]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[05], xy[15], xy[25], xy[35], xy[45], xy[55], xy[65], xy[75], xy[85], xy[95], xy[105], xy[115], xy[125], xy[135], xy[145], xy[155]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[06], xy[16], xy[26], xy[36], xy[46], xy[56], xy[66], xy[76], xy[86], xy[96], xy[106], xy[116], xy[126], xy[136], xy[146], xy[156]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[07], xy[17], xy[27], xy[37], xy[47], xy[57], xy[67], xy[77], xy[87], xy[97], xy[107], xy[117], xy[127], xy[137], xy[147], xy[157]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[8], xy[18], xy[28], xy[38], xy[48], xy[58], xy[68], xy[78], xy[88], xy[98], xy[108], xy[118], xy[128], xy[138], xy[148], xy[158]);
	printf("\tX %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d X\n", xy[9], xy[19], xy[29], xy[39], xy[49], xy[59], xy[69], xy[79], xy[89], xy[99], xy[109], xy[119], xy[129], xy[139], xy[149], xy[159]);
	printf("\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED"\tYou lose your points if you reach the limit of the map\n"ANSI_COLOR_RESET);
	//printf("\tPosition : %d\n", r);

	/* System of changing text color according to points */
	if (points < 50) {
		printf("\t\t\t%d points\n", points);
	}
	else {
		if (points >= 500) {
			printf(ANSI_COLOR_CYAN"\t\t\t%d points\n"ANSI_COLOR_RESET, points);
		}
		else {
			if (points >= 300) {
				printf(ANSI_COLOR_MAGENTA"\t\t\t%d points\n"ANSI_COLOR_RESET, points);
			}
			else {
				if (points >= 200) {
					printf(ANSI_COLOR_BLUE"\t\t\t%d points\n"ANSI_COLOR_RESET, points);
				}
				else {
					if (points >= 100) {
						printf(ANSI_COLOR_GREEN"\t\t\t%d points\n"ANSI_COLOR_RESET, points);
					}
					else {
						if (points >= 50) {
							printf(ANSI_COLOR_YELLOW"\t\t\t%d points\n"ANSI_COLOR_RESET, points);
						}
					}
				}
			}
		}
	}
	/* /System of changing text color according to points */

	printf(ANSI_COLOR_YELLOW"\t\t\t\t\n\n\n\n\n								If you want to reset press "ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED"R\n"ANSI_COLOR_RESET);

	if (currentposition == r) { // If player get the fruit
		eaten = 1; // Set eaten to 1 bcs player ate the fruit.
		xy[r] = 1;
		currentposition = currentposition + 10;
		xy[r] = 0; // Set the position that the fruit was in to 0
		points = points + nu; // Current Points + value of the fruit(line 43)
	}
	else {
		eaten = 0;// If player didn't get the fruit, set eaten to 0;
	}

	if (points >= 500) {
		won();
	}


	return;
}

int main()
{

	printf(ANSI_COLOR_BLUE"Press 'P' to play\n");

	char c;

	for (;;) {
		if (kbhit()) {
			c = getch();
			if (c == 'p' || c == 'P') { // Check if player pressed "P"

				printf("PLAY\n"ANSI_COLOR_RESET);
				system("cls"); // Clear console
				int currentposition = 1; // Set currentposition to a default value
				play(currentposition); // Call play function
			}
		}
	}

}

int play(int currentposition) {
	grid(currentposition);


	char c;


	for (;;) {
		if (kbhit()) {
			c = getch();
			//printf("%c\n", c); // Print which key player is pressing
			if (c == 's' || c == 'S' || c == 80) { // Check if player pressed "S"/"s" or Down arrow
				currentposition++; // Player move down
				if (currentposition != 0 && currentposition != 10
					&& currentposition != 20 && currentposition != 30
					&& currentposition != 40 && currentposition != 50
					&& currentposition != 60 && currentposition != 70
					&& currentposition != 80 && currentposition != 90
					&& currentposition != 100 && currentposition != 110
					&& currentposition != 120 && currentposition != 130
					&& currentposition != 140 && currentposition != 150
					&& currentposition != 160) // Check if player reached the limit of the map
				{
					system("cls");
					grid(currentposition);
				}
				else
				{
					currentposition = currentposition - 1; // Bring player back to a position that he can stay.
					printf("You reached the limit of the map\n");
					points = 0;
					system("cls");
					grid(currentposition);
				}
			}
			if (c == 'w' || c == 'W' || c == 72) // Check if player pressed "W"/"w" or UP Arrow
			{
				currentposition = currentposition - 1;
				if (currentposition != 0 && currentposition != 10
					&& currentposition != 20 && currentposition != 30
					&& currentposition != 40 && currentposition != 50
					&& currentposition != 60 && currentposition != 70
					&& currentposition != 80 && currentposition != 90
					&& currentposition != 100 && currentposition != 110
					&& currentposition != 120 && currentposition != 130
					&& currentposition != 140 && currentposition != 150
					&& currentposition != 160) // Check if player reached the limit of the map
				{
					system("cls");
					grid(currentposition);
					//printf("%d\n", currentposition);
				}
				else
				{
					currentposition = currentposition + 1; // Bring player back to a position that he can stay.
					printf("You reached the limit of the map\n");
					points = 0;
					system("cls");
					grid(currentposition);
				}
			}
			if (c == 'd' || c == 'D' || c == 77) // Check if player pressed "D"/"d" or right arrow
			{
				currentposition = currentposition + 10;
				if (currentposition <= 159) // Check if player reached the limit of the map
				{
					system("cls");
					//printf("%d\n", currentposition);
					grid(currentposition);
				}
				else
				{
					currentposition = currentposition - 10; // Bring player back to a position that he can stay.
					printf("You reached the limit of the map\n");
					points = 0;
					system("cls");
					grid(currentposition);
				}
			}
			if (c == 'a' || c == 'A' || c == 75) // Check if player pressed "A"/"a" or left arrow
			{
				currentposition = currentposition - 10;
				if (currentposition > 0) // Check if player reached the limit of the map
				{
					system("cls");
					grid(currentposition);
				}
				else
				{
					currentposition = currentposition + 10; // Bring player back to a position that he can stay.
					printf("You reached the limit of the map\n");
					points = 0;
					system("cls");
					grid(currentposition);
				}
			}
			if (c == 'r' || c == 'R') // A key to reset
			{
				points = 0;
				currentposition = 1;
				eaten = 0;
				r = rand() % 158; // Get a random position in the map
				nu = rand() % ((9 + 1) - 2) + 2; // Get a random number between 2 and 9
				system("cls");
				grid(currentposition);
			}
			/* JUST FOR TESTS
			if (c == 'g' || c == 'G')
			{
			points = points + 50;
			system("cls");
			grid(currentposition);
			}
			*/
		}
	}
}
