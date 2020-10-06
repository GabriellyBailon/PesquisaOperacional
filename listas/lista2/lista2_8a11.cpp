#include <iostream>
#include <locale.h>
#include <cstdlib>					//Para a Quest�o 10
#include <ctime>					//Para a Quest�o 10
#include <math.h>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	char resposta;
	
	unsigned seed = time(0);			//A "semente"/in�cio come�a em 0
	srand(seed);
	
	
	cout<< ("Bem vindo(a) � resolu��o da lista 2 de exerc�cios de PO!") << endl;
	
	while (true){	
		while(true)
		{
			cout << ("\nDigite o n�mero do exerc�cio que deseja ver resolvido [8 a 11]: ");
			cin >> opcao;
			cout << "\n";
			
			if (opcao >= 8 and opcao <= 11){
				break;
			}
			else
			{
				cout << ("N�mero inv�lido! Tente novamente") << endl; 
			}
		}
		if (opcao == 8)
		{
			cout << ("Quest�o 8") << endl;

			int soma = 0;
			int i;
			int npos;
			
			cout << ("Quantas posi��es quer que o vetor tenha? ");
			cin >> npos;
			int vetor[npos];
			
			for (i = 0; i < npos; i++)
			{
				vetor[i] = i + 1;
				cout << ("Digite um valor para a posi��o ") << i << (": ") << endl;
				cin >> vetor[i];
			}
			
			for (i = 0; i < npos; i++)
			{
				soma += vetor[i];
			}
			cout << endl;
			cout << ("A soma das posi��es do vetor � igual � ") <<soma;
		}
			
        else if(opcao == 9)
			{
				cout << ("Quest�o 9") << endl;
				
				int n;
				int soma = 0;
			 	
			 	while (true)
				 {
				 	cout << ("Digite um n�mero maior que o 0 para o n do somat�rio: ") << endl;
				 	cin >> n;
				 	if (n > 0)
					 {
					 	break;
					 }
				 }
				 
				 for(int i = 1; i <= n; i++)
				 {
				 	soma += i * (i + 1);
				 }
				 
				 cout << ("O somat�rio com n = ") << n << (" resultou na soma de ") << soma << endl;
				 
				
			}
		else if(opcao == 10)
			{
			
				cout << ("Quest�o 10") << endl;
				
				int tam = 10;
				int matrizA[10][10];
				int matrizB[10][10];
				int soma = 0;
			 
				 for (int linha = 0; linha < tam; linha++)		//For que preenche
				 {
					for(int coluna = 0; coluna < tam; coluna++)
					{
						matrizA[linha][coluna] = 1+ (rand()%10);	//Randomiza um n�mero de 0 a 10
		  	  	    }	 
				 }
				 for (int linha = 0; linha < tam; linha++)		//For que preenche
				 {
					for(int coluna = 0; coluna < tam; coluna++)
					{
						matrizB[linha][coluna] = 1+ (rand()%10);	//Randomiza um n�mero de 0 a 10	 

					}
				 }
				 for (int linha = 0; linha < tam; linha++)		//For que multiplica
				 {
					for(int coluna = 0; coluna < tam; coluna++)
					{
						soma += matrizA[linha][coluna] * matrizB[linha][coluna];

					}
				}
				
				cout << ("\nSendo a matriz A: ") << endl;
				 for (int linha = 0; linha < tam; linha++)		//For que imprime a matriz A
				 {
				 	for (int coluna = 0; coluna < tam; coluna++)
					 {
					 	cout << matrizA[linha][coluna] << " ";
					 }
					 cout << "\n";
				 }
				 
				 cout << ("\nE a matriz B: ") << endl;
				 for (int linha = 0; linha < tam; linha++)		//For que imprime a matriz B
				 {
				 	for (int coluna = 0; coluna < tam; coluna++)
					 {
					 	cout << matrizB[linha][coluna] << " ";
					 }
					 cout << "\n";
				 }
				
				cout << ("\nA soma das multiplica��es de Aij x Bij � igual � ") << soma << endl;
			}
			
			else if (opcao == 11)
			{
				cout << ("Quest�o 11") << endl;
				int n;
				float soma = 0;
				
				cout << ("Qual ser� o valor de n para seu somat�rio? ");
				cin >> n;
				
				for (int i = 1; i <= n; i++)
				{
					soma += ((2 * i) -1)/(pow(-2, (i+1)));
				}
				cout << "\n" << soma;
				
			}
         
		
		cout << ("\nDeseja continuar? [S/N]") << endl;
		cin >> resposta;
		if (resposta == 'N' or resposta == 'n'){
			break;
		}
		
	}
	return 0;
}