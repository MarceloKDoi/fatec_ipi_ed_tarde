#include <stdio.h>
#include<stdlib.h>
//atualizacao

int contem (int v[], int n,  int e){
	int i;
	for ( i = 0; i < n ; i++){
		if(v[i] == e)
		return 1;
	}
	return 0;
}

int calcula_vetor_c(int A[],int nA ,int B[], int nB, int C[],int nC){
	int qtdeC = 0;
	int i;
	for(i = 0; i < nA; i++){
		if(!contem(A, nA, C[i])){
		
			C[qtdeC++] = A[i];//operador de pos incremento!
  }
}
	for(i = 0; i < nB; i++){
		if(!contem(B, nB, C[i])){
		
			C[qtdeC++] = B[i];//operador de pos incremento!
		}
		return qtdeC;
	}
	
}
int main()
{
	int v1 [] = {1,2,4,3,1};
	int v2 [] = {1,1,1,1,2};
	int C[10];
	calcula_vetor_c(v1,5,v2,5,C,10);
	 int i;
	 for(i = 0 ; i<10 ; i++)
	 		printf("%d ", C[i]);
	 	
	return 0;
}