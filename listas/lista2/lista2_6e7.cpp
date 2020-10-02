#include <iostream>
#include <iomanip>			//Biblioteca necess�ria para a leitura
#include <fstream>			//Biblioteca necess�ria para a leitura
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << ("Quest�o 6 ") << endl;	  
	int **matriz;
				
	ifstream learquivo;
		  

	int l;
	int c;
	
	int vetoradj[6];
	
	for (int i = 0; i< 6; i++)
	{
		vetoradj[i] = 0;
	}


	learquivo.open("arqmatriz6_7.txt");
	

	learquivo >> l >> c; 				
	matriz = (int**)malloc( l * sizeof(int*));		
												
												
	for(int numerodelinhas = 0; numerodelinhas< l; numerodelinhas++)
	{
		matriz[numerodelinhas] = (int *) malloc(c * sizeof(int));		
	}	
					

	
	
	for (int i= 0; i < l; i++)		//For que l� a matriz do arquivo .txt
	{
		for(int j = 0; j < c; j++)
		{
		//L� os arquivos do txt e passa para a matriz
		learquivo >> matriz[i][j];
		}
	}
	
	//Matriz de adjacencia inicializada com zeros
	int matrizadj[l][c];
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j< c; j++)
		{
			matrizadj[i][j] = 0;
		}
	}


// Fazer com que varra a matriz e que se encontrado um num != 0 coloque 1 na matriz de adj
	for (int i = 0; i< l; i++)
	{
		for(int j = 0; j < c; j++)
		{
			if (matriz[i][j] != 0)
			{
				matrizadj[i][j] = 1;
			}
		}
	}

	cout << ("A matriz de adjac�ncia �: ") << endl;
	
	for (int i = 0; i< l; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cout << matrizadj[i][j] << " ";
		}
		cout << ("\n");
	}
	cout << ("\n");
	
	//Calcula o grau de adjac�ncia
	for (int i = 0; i < l; i++)
	{
		for(int j = 0; j < c; j++)
		{
			if (matrizadj[i][j] == 1)
			{
				vetoradj[i] += 1;
			}
		}
	}
	
	for (int i = 0; i< 6; i++)
	{
		cout << ("O n� ") << i << (" tem grau de adjac�ncia ")<< vetoradj[i] << endl;
	}
	
	cout << ("\nQuest�o 7") << endl;
	int opcao;
	cout << ("De qual v�rtice voc� deseja ver os adjcentes? ");
	cin >> opcao;
	
	//Percorrer a matrizadj e mostrar os vertices adj
		cout << ("O n� ") << opcao << (" tem como adjacentes os v�rtices ") << " ";
		for (int j = 0; j < c; j++)
		{
			if (matrizadj[opcao][j] == 1)
			{
				cout << j << " ";
			}
				
		}
		cout << ("\n");
	
	
	
		
	return 0;
}