#ifndef MRDO_H
#define MRDO_H

void gotoxy (int x, int y);

void ShowConsoleCursor(int showFlag);

void SetColor(int ForgC);

char menuInicial();

int contaFrutas(char url[]);

void carregarFase(char url[], int *xFrutas, int *yFrutas, char **mapa);

typedef struct{
	
	int x, y;
	int ultima;
	char status;
	
}mrDo;

typedef struct{
	
	int x, y, status;
		
	
}Tiro;

char movimentoMrDo (mrDo Do, int contFrutas, int *xFrutas, int *yFrutas, char **mapa);

//free(xFrutas);
//free(yFrutas);

#endif
