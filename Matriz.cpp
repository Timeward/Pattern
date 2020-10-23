#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int matrix[3][3];
int x, y, i, j;
int value;

int main(){
	
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){ //navega a matriz
			scanf("\n%i", &matrix[x][y]); //permite os usuários selecionarem os valores da matriz
			fflush(stdin);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			value = matrix[i][j] * 5; //múltiplica valor da matriz por 5
			printf("\n%i", value);
		}
	}

}

