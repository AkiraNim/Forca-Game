#include<stdio.h>
#include<stdlib.h>

int ticTacToeSwitchCase(char ticTacToe[3][3], int xTurn, int pair) {
  	int lineChoose;
  		ticTacToePrint(ticTacToe);
  		printf("\n\nDigite qual lugar vai jogar: ");
  		scanf("%d", & lineChoose);
  		fflush(stdin);
  		switch (lineChoose) {
  			case 1:
    			if (ticTacToe[0][0] == '1' && ticTacToe[0][0] != '\n') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[0][0] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[0][0] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
				    break;
    			}
  			case 2:
    			if (ticTacToe[0][1] == '2') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[0][1] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[0][1] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 3:
    			if (ticTacToe[0][2] == '3') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[0][2] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[0][2] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 4:
    			if (ticTacToe[1][0] == '4') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[1][0] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        			ticTacToe[1][0] = '0';
        			xTurn = 1;
        			break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 5:
    			if (ticTacToe[1][1] == '5') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        			ticTacToe[1][1] = 'X';
        			xTurn = 0;
        			break;
      				}
      				if (xTurn == 0) {
        			ticTacToe[1][1] = '0';
        			xTurn = 1;
        			break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 6:
    			if (ticTacToe[1][2] == '6') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[1][2] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[1][2] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 7:
    			if (ticTacToe[2][0] == '7') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[2][0] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[2][0] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 8:
    			if (ticTacToe[2][1] == '8') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[2][1] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[2][1] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 9:
    			if (ticTacToe[2][2] == '9') {
      				fflush(stdin);
      				players[pair].plays++;
      				if (xTurn == 1) {
        				ticTacToe[2][2] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[2][2] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  		}
  		system("cls");
  		return xTurn;
}
