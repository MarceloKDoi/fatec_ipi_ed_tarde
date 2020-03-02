#include <stdio.h>

//Ordenação bolha

void bolha(int n, int *v)
{
	int i,j;
	for (i = n-1;i>0;i--){
		int troca = 0;
		for(j = 0;j<i; j++){
			if(v[j]>v[j+1]){
				int atual = v[j];
				v[j] = v[j+1];
				v[j+1] = atual;
				troca = 1;
			}
		}
		if(troca == 0)
		return;
	}	
} 
int main(void)
{
	int i,N;
	scanf("%d",&N);
	int v[N];
	for(i=0; i<N; i++)
	{
		scanf("%d", &v[i]);	
	}
	bolha(N,v);
	printf("\nordenado:\n");
	for(i=0;i<N;i++){
		printf("%d\n",v[i]);
		
	}
	return 0;
}