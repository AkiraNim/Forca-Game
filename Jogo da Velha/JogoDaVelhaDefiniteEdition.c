#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct{
	int winnerX, winner0, counter;
}player;

int plays;

void ticTacToeLoop(char ticTacToe[3][3]);
void ticTacToePrint(char ticTacToe[3][3]);
int ticTacToeCheckWins(char ticTacToe[3][3], char winner);
int ticTacToeSwitchCase(char ticTacToe[3][3], int xOption);

int main(){
	setlocale(LC_ALL,"portuguese");
	player players[10];
	int lineChoose, xOption, winnerX=0, winner0=0, plays=0, counter, pair=1, i,continue_=1;
    char ticTacToe[3][3];
    char winner;
   		for(i=1; i<10; i++){
   			players[i].winner0=0;
   			players[i].winnerX=0;
		   }
    
		while(continue_==1 ||continue_==2 && pair<10){
			ticTacToeLoop(ticTacToe);
			winner='n';
			xOption=1;
			plays=0;
			while(winner=='n'){
				printf("\n\n\tDupla %d\n", pair);
				xOption=ticTacToeSwitchCase(ticTacToe,xOption);
				
				winner=ticTacToeCheckWins(ticTacToe, winner);
				
				if(plays==9 && winner=='n') break;	
			}
			system("cls");
			printf("\n\n    Dupla %d Resultados\n", pair);
			ticTacToePrint(ticTacToe);
			
			if(winner=='X'){
				players[pair].winnerX++;
				players[pair].counter=1;
				}
			if(winner=='0'){
					players[pair].winner0++;
					players[pair].counter=1;
				}
			if(winner!='n'){
				printf("O Ganhador foi o jogador: ' %c '\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n", winner);
				fflush(stdin);
				scanf("%d", &continue_);
				if(continue_==2){
					pair+=1;
				}
				system("cls");
			}
			else{
				printf("Nao houve vencedor.\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n");
				fflush(stdin);
				if(continue_==2){
					pair+=1;
				}
				system("cls");
			}
		}
		printf("\n\tObrigado por jogar :)\n\n\n\t############\n\t###PLACAR###\n\t############\n\n");
		for( i=1; i < 10; i++){
			if(players[i].counter==0){
				break;
			}
			printf("\n\t#################\n\t# DUPLA %d\n\t#\n\t# PONTOS DO X: %d\n\t# PONTOS DO 0: %d\n\t#################\n\n",i, players[i].winnerX, players[i].winner0);	
			pair++;
		}		
}
void ticTacToeLoop(char ticTacToe[3][3]){
	ticTacToe[0][0]='1';
	ticTacToe[0][1]='2';
	ticTacToe[0][2]='3';
	ticTacToe[1][0]='4';
	ticTacToe[1][1]='5';
	ticTacToe[1][2]='6';
	ticTacToe[2][0]='7';
	ticTacToe[2][1]='8';
	ticTacToe[2][2]='9';
}
void ticTacToePrint(char ticTacToe[3][3]){
	int line, column;
		printf("\n\n   ####################\n   ###JOGO DA VELHA####\n   ####################\n\n");
		for(line = 0; line <3; line++){
			for(column = 0; column <3; column++){
				printf("    %c  ", ticTacToe[line][column]);         
				if(column < 2){
					printf("|");
				}
				if(column == 0){
					printf("");
				}
			}
			if(line < 2){
				printf("\n  ---------------------\n");
			}
		}
		printf("\n\n\n");
}
int ticTacToeCheckWins(char ticTacToe[3][3], char winner){

	if(ticTacToe[0][0]==ticTacToe[0][1] && ticTacToe[0][1]==ticTacToe[0][2]) winner=ticTacToe[0][0];
	if (ticTacToe[1][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[1][2]) winner=ticTacToe[1][0];
	if (ticTacToe[2][0]==ticTacToe[2][1] && ticTacToe[2][1]==ticTacToe[2][2]) winner=ticTacToe[2][0];
				
	if(ticTacToe[0][0]==ticTacToe[1][0] && ticTacToe[1][0]==ticTacToe[2][0]) winner=ticTacToe[0][0];
	if(ticTacToe[0][1]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][1]) winner=ticTacToe[0][1];
	if(ticTacToe[0][2]==ticTacToe[1][2] && ticTacToe[1][2]==ticTacToe[2][2]) winner=ticTacToe[0][2];
				
	if(ticTacToe[0][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][2]) winner=ticTacToe[0][0];
	if(ticTacToe[0][2]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][0]) winner=ticTacToe[0][2];
				
	return winner;
}
int ticTacToeSwitchCase(char ticTacToe[3][3], int xOption){
	int lineChoose;
		
		ticTacToePrint(ticTacToe);
		printf("\n\nDigite qual lugar vai jogar: ");
    	scanf("%d", &lineChoose);
		fflush(stdin);
    	switch(lineChoose){	    	
	    	case 1:
	    		if(ticTacToe[0][0]=='1' && ticTacToe[0][0]!='\n'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[0][0]='X';
	    				xOption=0;
	    				plays++;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[0][0]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}		
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
				}
	    	case 2:
	    		if(ticTacToe[0][1]=='2'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[0][1]='X';
	    				xOption=0;
	    				plays++;
	    				break;
					}
					if(xOption==0){
						ticTacToe[0][1]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}			
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
				}
	    	case 3:
	    		if(ticTacToe[0][2]=='3'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[0][2]='X';
	    				xOption=0;
	    				plays++;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[0][2]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
				}
	    	case 4:
	    		if(ticTacToe[1][0]=='4'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[1][0]='X';
	    				xOption=0;
	    				plays++;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[1][0]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 5:
	    		if(ticTacToe[1][1]=='5'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[1][1]='X';
	   					xOption=0;
	   					plays++;
	  					break;
					}
					if(xOption==0){
						ticTacToe[1][1]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 6:
	    		if(ticTacToe[1][2]=='6'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[1][2]='X';
	    				xOption=0;
	    				plays++;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[1][2]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 7:
	    		if(ticTacToe[2][0]=='7'){						
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[2][0]='X';
	    				xOption=0;
	    				plays++;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[2][0]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 8:
	    		if(ticTacToe[2][1]=='8'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[2][1]='X';
	    				xOption=0;
	    				plays++;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[2][1]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 9:
	    		if(ticTacToe[2][2]=='9'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[2][2]='X';
	    				xOption=0;
	    				plays++;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[2][2]='0';
	    				xOption=1;
	    				plays++;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
		}
		system("cls");
		return xOption;
}
