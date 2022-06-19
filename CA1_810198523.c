#include <stdio.h>
#include <stdlib.h>

int main()
{


	int numberOfSquare;/*for choosing the squares within the chart*/
	int amount1 = 0, amount2 = 0, amount3 = 0, amount4 = 0, amount5 = 0, amount6 = 0, amount7 = 0, amount8 = 0, amount9 = 0;/*for initializing the variables in the squares for identifying them in case of winning or loosing or even a draw*/
	int square1 = '1', square2 = '2', square3 = '3', square4 = '4', square5 = '5', square6 = '6', square7 = '7', square8 = '8', square9 = '9';/*for illustrating X , O or the number of the squares*/
	int loop;/*for repeating the loop*/
	int TryAgain;/*deciding to restart the game or end it*/
	char choosingthecharacter;/*optional part of my code,we were not supposed to ask player one to choose a symbol but i did..*/
	printf("\nPlayer one choose between x and o?\n");
	scanf("%c", &choosingthecharacter);


	while (choosingthecharacter != 'x'&& choosingthecharacter != 'X'&& choosingthecharacter != 'o'&& choosingthecharacter != 'O')
	{/*in case the user may be either dumb or funny and enters integers or characters that are not X,x,o,O*/
		printf("\nYou can only choose between X and O!please try again:\n");
		scanf("%c", &choosingthecharacter);
		/*the game won't end :)) as long as the user opens his or her eyes and think properly*/
		if (choosingthecharacter == 'x'&& choosingthecharacter == 'X'&& choosingthecharacter == 'o'&& choosingthecharacter == 'O') {
			continue;
		}
	}







	/*a loop which is not endless in case player one has chosen X and automatically player two would be O*/
	if (choosingthecharacter == 'x' || choosingthecharacter == 'X') {
		for (loop = 1; loop <= 9; loop++) {

			if (loop % 2 == 1) {
				printf("player one's turn:\nplease choose a number between 1 to 9\n");
			}
			else {
				printf("player two's turn:\nplease choose a number between 1 to 9\n");
			}
			while (scanf("%d", &numberOfSquare) == 0)

			{
				/*for not becoming an endless loop when a character is choosingthecharacter's input because it's defined as an integer and a character cannot be saved in it*/

				printf("\nInvalid input.Only numbers between 1 to 9.\n");

				while ((getchar()) != '\n')
					break;
				/*no jokes when it comes to putting a character instead of an integer!it gets outta the game*/



			}
			if (numberOfSquare != 1 && numberOfSquare != 2 && numberOfSquare != 3 && numberOfSquare != 4 && numberOfSquare != 5 && numberOfSquare != 6 && numberOfSquare != 7 && numberOfSquare != 8 && numberOfSquare != 9)
			{
				printf("\nPlease choose between the squares from 1 to 9\n");
				loop = loop - 1;/*so the turns would be taken correctly*/
				continue;
			}
			switch (numberOfSquare)
			{

			case 1:
				if (amount1 != 0) {/*in case the user has noy chosen an empty square which is not correct*/
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				if (amount1 == 0) {
					amount1 = 2 * (loop % 2) - 1;
					if (amount1 == -1)
						square1 = 'o';

					else if (amount1 == 1)
						square1 = 'x';
					break;
				}


			case 2:
				if (amount2 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				if (amount2 == 0) {
					amount2 = 2 * (loop % 2) - 1;
					if (amount2 == -1)
						square2 = 'o';
					else if (amount2 == 1)
						square2 = 'x';
					break;
				}


			case 3:
				if (amount3 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				if (amount3 == 0) {
					amount3 = 2 * (loop % 2) - 1;
					if (amount3 == -1)
						square3 = 'o';
					else if (amount3 == 1)
						square3 = 'x';
					break;
				}

			case 4:
				if (amount4 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount4 = 2 * (loop % 2) - 1;
				if (amount4 == -1)
					square4 = 'o';
				else if (amount4 == 1)
					square4 = 'x';
				break;
			case 5:
				if (amount5 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount5 = 2 * (loop % 2) - 1;
				if (amount5 == -1)
					square5 = 'o';
				else if (amount5 == 1)
					square5 = 'x';
				break;

			case 6:
				if (amount6 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount6 = 2 * (loop % 2) - 1;
				if (amount6 == -1)
					square6 = 'o';
				else if (amount6 == 1)
					square6 = 'x';
				break;
			case 7:
				if (amount7 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount7 = 2 * (loop % 2) - 1;
				if (amount7 == -1)
					square7 = 'o';
				else if (amount7 == 1)
					square7 = 'x';
				break;

			case 8:
				if (amount8 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount8 = 2 * (loop % 2) - 1;
				if (amount8 == -1)
					square8 = 'o';
				else if (amount8 == 1)
					square8 = 'x';
				break;

			case 9:
				if (amount9 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount9 = 2 * (loop % 2) - 1;
				if (amount9 == -1)
					square9 = 'o';
				else if (square9 == 1)
					square9 = 'x';
				break;
			}

			printf("      |      |      \n");
			printf("  %c   |  %c   |  %c   \n", square1, square2, square3);
			printf("______|______|______\n");
			printf("      |      |      \n");
			printf("  %c   |  %c   |  %c   \n", square4, square5, square6);
			printf("______|______|______\n");
			printf("      |      |      \n");
			printf("  %c   |  %c   |  %c   \n", square7, square8, square9);
			printf("      |      |      \n");

			if (amount1 + amount2 + amount3 == 3 || amount4 + amount5 + amount6 == 3 || amount7 + amount8 + amount9 == 3 || amount1 + amount4 + amount7 == 3 || amount2 + amount5 + amount8 == 3 || amount3 + amount6 + amount9 == 3 || amount1 + amount5 + amount9 == 3 || amount3 + amount5 + amount7 == 3)
			{
				printf("\nCongratulations!\nPlayer one has won the game.\n");/*winning conditions for player one*/
				printf("Press 1 if you want to start a new game.\nOtherwise press 2.\n");/*decide to play again or end the game*/
				scanf("%d", &TryAgain);
				if (TryAgain == 1) {/*in case of playing again these variables should be reset,in order to restart the "for" loop and work properly*/
					loop = 0;
					amount1 = 0;
					amount2 = 0;
					amount3 = 0;
					amount4 = 0;
					amount5 = 0;
					amount6 = 0;
					amount7 = 0;
					amount8 = 0;
					amount9 = 0;
					square1 = '1';
					square2 = '2';
					square3 = '3';
					square4 = '4';
					square5 = '5';
					square6 = '6';
					square7 = '7';
					square8 = '8';
					square9 = '9';
					TryAgain = 0;
					continue;

				}
				else if (TryAgain == 2) {
					break;
				}/*end the game*/

			}
			if (amount1 + amount2 + amount3 == -3 || amount4 + amount5 + amount6 == -3 || amount7 + amount8 + amount9 == -3 || amount1 + amount4 + amount7 == -3 || amount2 + amount5 + amount8 == -3 || amount3 + amount6 + amount9 == -3 || amount1 + amount5 + amount9 == -3 || amount3 + amount5 + amount7 == -3)
			{
				printf("\nCongratulations!\nPlayer two has won the game.\n");
				printf("Press 1 if you want to start a new game.\nOtherwise press 2.\n");
				scanf("%d", &TryAgain);
				if (TryAgain == 1) {
					loop = 0;
					amount1 = 0;
					amount2 = 0;
					amount3 = 0;
					amount4 = 0;
					amount5 = 0;
					amount6 = 0;
					amount7 = 0;
					amount8 = 0;
					amount9 = 0;
					square1 = '1';
					square2 = '2';
					square3 = '3';
					square4 = '4';
					square5 = '5';
					square6 = '6';
					square7 = '7';
					square8 = '8';
					square9 = '9';
					TryAgain = 0;
					continue;

				}
				else if (TryAgain == 2) {
					break;
				}


			}
			if (amount1 != 0 && amount2 != 0 && amount3 != 0 && amount4 != 0 && amount5 != 0 && amount6 != 0 && amount7 != 0 && amount8 != 0 && amount9 != 0) {
				printf("The game is over!\nNo one has won the game.");
				printf("Press 1 if you want to start a new game.\nOtherwise press 2.\n");
				scanf("%d", &TryAgain);
				if (TryAgain == 1) {
					loop = 0;
					amount1 = 0;
					amount2 = 0;
					amount3 = 0;
					amount4 = 0;
					amount5 = 0;
					amount6 = 0;
					amount7 = 0;
					amount8 = 0;
					amount9 = 0;
					square1 = '1';
					square2 = '2';
					square3 = '3';
					square4 = '4';
					square5 = '5';
					square6 = '6';
					square7 = '7';
					square8 = '8';
					square9 = '9';
					TryAgain = 0;
					continue;
				}
				else if (TryAgain == 2) {
					break;
				}

			}

		}
	}










	/*in case player one has chosen o or O,automatically player two's symbol would be x*/
	if (choosingthecharacter == 'o' || choosingthecharacter == 'O') {
		for (loop = 1; loop <= 9; loop++) {

			if (loop % 2 == 1) {
				printf("player one's turn:\nplease choose a number between 1 to 9\n");
			}
			else {
				printf("player two's turn:\nplease choose a number between 1 to 9\n");
			}
			while (scanf("%d", &numberOfSquare) == 0)

			{
				/*for not becoming an endless loop when a character is choosingthecharacter's input because it's defined as an integer and a character cannot be saved in it*/

				printf("\nInvalid input.Only numbers between 1 to 9.\n");

				while ((getchar()) != '\n')
					break;
				/*no jokes when it comes to putting a character instead of an integer!it gets outta the game*/



			}
			if (numberOfSquare != 1 && numberOfSquare != 2 && numberOfSquare != 3 && numberOfSquare != 4 && numberOfSquare != 5 && numberOfSquare != 6 && numberOfSquare != 7 && numberOfSquare != 8 && numberOfSquare != 9)
			{
				printf("\nPlease choose between the squares from 1 to 9\n");
				loop = loop - 1;/*so the turns would be taken correctly*/
				continue;
			}
			switch (numberOfSquare)
			{

			case 1:
				if (amount1 != 0) {/*in case the user has noy chosen an empty square which is not correct*/
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				if (amount1 == 0) {
					amount1 = 2 * (loop % 2) - 1;
					if (amount1 == -1)
						square1 = 'x';

					else if (amount1 == 1)
						square1 = 'o';
					break;
				}


			case 2:
				if (amount2 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				if (amount2 == 0) {
					amount2 = 2 * (loop % 2) - 1;
					if (amount2 == -1)
						square2 = 'x';
					else if (amount2 == 1)
						square2 = 'o';
					break;
				}


			case 3:
				if (amount3 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				if (amount3 == 0) {
					amount3 = 2 * (loop % 2) - 1;
					if (amount3 == -1)
						square3 = 'x';
					else if (amount3 == 1)
						square3 = 'o';
					break;
				}

			case 4:
				if (amount4 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount4 = 2 * (loop % 2) - 1;
				if (amount4 == -1)
					square4 = 'x';
				else if (amount4 == 1)
					square4 = 'o';
				break;
			case 5:
				if (amount5 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount5 = 2 * (loop % 2) - 1;
				if (amount5 == -1)
					square5 = 'x';
				else if (amount5 == 1)
					square5 = 'o';
				break;

			case 6:
				if (amount6 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount6 = 2 * (loop % 2) - 1;
				if (amount6 == -1)
					square6 = 'x';
				else if (amount6 == 1)
					square6 = 'o';
				break;
			case 7:
				if (amount7 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount7 = 2 * (loop % 2) - 1;
				if (amount7 == -1)
					square7 = 'x';
				else if (amount7 == 1)
					square7 = 'o';
				break;

			case 8:
				if (amount8 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount8 = 2 * (loop % 2) - 1;
				if (amount8 == -1)
					square8 = 'x';
				else if (amount8 == 1)
					square8 = 'o';
				break;

			case 9:
				if (amount9 != 0) {
					printf("\nThis square was used before. please try again:\n");
					loop = loop - 1;
					break;
				}
				amount9 = 2 * (loop % 2) - 1;
				if (amount9 == -1)
					square9 = 'x';
				else if (square9 == 1)
					square9 = 'o';
				break;
			}

			printf("      |      |      \n");
			printf("  %c   |  %c   |  %c   \n", square1, square2, square3);
			printf("______|______|______\n");
			printf("      |      |      \n");
			printf("  %c   |  %c   |  %c   \n", square4, square5, square6);
			printf("______|______|______\n");
			printf("      |      |      \n");
			printf("  %c   |  %c   |  %c   \n", square7, square8, square9);
			printf("      |      |      \n");

			if (amount1 + amount2 + amount3 == 3 || amount4 + amount5 + amount6 == 3 || amount7 + amount8 + amount9 == 3 || amount1 + amount4 + amount7 == 3 || amount2 + amount5 + amount8 == 3 || amount3 + amount6 + amount9 == 3 || amount1 + amount5 + amount9 == 3 || amount3 + amount5 + amount7 == 3)
			{
				printf("\nCongratulations!\nPlayer one has won the game.\n");/*winning conditions for player one*/
				printf("Press 1 if you want to start a new game.\nOtherwise press 2.\n");/*decide to play again or end the game*/
				scanf("%d", &TryAgain);
				if (TryAgain == 1) {/*in case of playing again these variables should be reset,in order to restart the "for" loop and work properly*/
					loop = 0;
					amount1 = 0;
					amount2 = 0;
					amount3 = 0;
					amount4 = 0;
					amount5 = 0;
					amount6 = 0;
					amount7 = 0;
					amount8 = 0;
					amount9 = 0;
					square1 = '1';
					square2 = '2';
					square3 = '3';
					square4 = '4';
					square5 = '5';
					square6 = '6';
					square7 = '7';
					square8 = '8';
					square9 = '9';
					TryAgain = 0;
					continue;

				}
				else if (TryAgain == 2) {
					break;
				}/*end the game*/

			}
			if (amount1 + amount2 + amount3 == -3 || amount4 + amount5 + amount6 == -3 || amount7 + amount8 + amount9 == -3 || amount1 + amount4 + amount7 == -3 || amount2 + amount5 + amount8 == -3 || amount3 + amount6 + amount9 == -3 || amount1 + amount5 + amount9 == -3 || amount3 + amount5 + amount7 == -3)
			{
				printf("\nCongratulations!\nPlayer two has won the game.\n");
				printf("Press 1 if you want to start a new game.\nOtherwise press 2.\n");
				scanf("%d", &TryAgain);
				if (TryAgain == 1) {
					loop = 0;
					amount1 = 0;
					amount2 = 0;
					amount3 = 0;
					amount4 = 0;
					amount5 = 0;
					amount6 = 0;
					amount7 = 0;
					amount8 = 0;
					amount9 = 0;
					square1 = '1';
					square2 = '2';
					square3 = '3';
					square4 = '4';
					square5 = '5';
					square6 = '6';
					square7 = '7';
					square8 = '8';
					square9 = '9';
					TryAgain = 0;
					continue;

				}
				else if (TryAgain == 2) {
					break;
				}


			}
			if (amount1 != 0 && amount2 != 0 && amount3 != 0 && amount4 != 0 && amount5 != 0 && amount6 != 0 && amount7 != 0 && amount8 != 0 && amount9 != 0) {
				printf("The game is over!\nNo one has won the game.");
				printf("Press 1 if you want to start a new game.\nOtherwise press 2.\n");
				scanf("%d", &TryAgain);
				if (TryAgain == 1) {
					loop = 0;
					amount1 = 0;
					amount2 = 0;
					amount3 = 0;
					amount4 = 0;
					amount5 = 0;
					amount6 = 0;
					amount7 = 0;
					amount8 = 0;
					amount9 = 0;
					square1 = '1';
					square2 = '2';
					square3 = '3';
					square4 = '4';
					square5 = '5';
					square6 = '6';
					square7 = '7';
					square8 = '8';
					square9 = '9';
					TryAgain = 0;
					continue;
				}
				else if (TryAgain == 2) {
					break;
				}

			}

		}
	}

}

