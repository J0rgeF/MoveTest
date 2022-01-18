#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int grid(int currentposition) 
{
	int xy[1000] = { 0 };
	//printf("%d\n", currentposition);

	xy[currentposition] = 1;


	printf("Move Test in C\n");
	printf("Developed by Jorge\n");
	printf("XXXXXXXXXX\n");
	printf("X%d%d%d%d%d%d%d%dX\n", xy[01], xy[11], xy[21], xy[31], xy[41], xy[51], xy[61], xy[71]);
	printf("X%d%d%d%d%d%d%d%dX\n", xy[02], xy[12], xy[22], xy[32], xy[42], xy[52], xy[62], xy[72]);
	printf("X%d%d%d%d%d%d%d%dX\n", xy[03], xy[13], xy[23], xy[33], xy[43], xy[53], xy[63], xy[73]);
	printf("X%d%d%d%d%d%d%d%dX\n", xy[04], xy[14], xy[24], xy[34], xy[44], xy[54], xy[64], xy[74]);
	printf("X%d%d%d%d%d%d%d%dX\n", xy[05], xy[15], xy[25], xy[35], xy[45], xy[55], xy[65], xy[75]);
	printf("X%d%d%d%d%d%d%d%dX\n", xy[06], xy[16], xy[26], xy[36], xy[46], xy[56], xy[66], xy[76]);
	printf("X%d%d%d%d%d%d%d%dX\n", xy[07], xy[17], xy[27], xy[37], xy[47], xy[57], xy[67], xy[77]);
	printf("X%d%d%d%d%d%d%d%dX\n", xy[8], xy[18], xy[28], xy[38], xy[48], xy[58], xy[68], xy[78]);
	printf("XXXXXXXXXX\n");

	return;
}

int main() 
{

	printf("Press 'P' to play\n");

	char c;

	for (;;) {
		if (kbhit()) {
			c = getch();
			if (c == 'p'|| c == 'P') {
				
				printf("PLAY\n");
				int currentposition = 1;
				play(currentposition);
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
			printf("%c\n", c);
			if (c == 's' || c == 'S') {
				currentposition++;
				if (currentposition != 9 && currentposition != 19 
					&& currentposition != 29 && currentposition != 39 
					&& currentposition != 49 && currentposition != 49 
					&& currentposition != 59 && currentposition != 69 
					&& currentposition != 79)
				{
					system("cls");
					grid(currentposition);
				}
					else 
					{
					currentposition = currentposition - 1;
					printf("Ja' chegaste ao limite do mapa\n");
					}
			}
			if (c == 'w' || c == 'w') 
			{
				currentposition = currentposition - 1;
				if (currentposition != 0 && currentposition != 10
					&& currentposition != 20 && currentposition != 30
					&& currentposition != 40 && currentposition != 50
					&& currentposition != 60 && currentposition != 70
					&& currentposition != 80)
				{
					system("cls");
					grid(currentposition);
					//printf("%d\n", currentposition);
				}
				else
				{
					currentposition = currentposition + 1;
					printf("Ja' chegaste ao limite do mapa\n");
				}
			}
			if (c == 'd' || c == 'D') 
			{
				currentposition = currentposition + 10;
				if (currentposition < 80)
				{
					system("cls");
					//printf("%d\n", currentposition);
					grid(currentposition);
				}
				else
				{
					currentposition = currentposition - 10;
					printf("Ja' chegaste ao limite do mapa\n");
				}
			}
			if (c == 'a' || c == 'A') 
			{
				currentposition = currentposition - 10;
				if (currentposition > 0)
				{
					system("cls");
					grid(currentposition);
				}
				else
				{
					currentposition = currentposition + 10;
					printf("Ja' chegaste ao limite do mapa\n");
				}
			}
		}
	}
}
