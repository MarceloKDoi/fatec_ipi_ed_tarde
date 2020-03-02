#include <stdio.h>

int main()
{
	int i,N,soma=0;
	int v[N];
	float media;
	scanf("%d",&N);
	for(i=0; i<N; i++)
	{
		scanf("%d", &v[i]);
		soma = soma + v[i];	
	}
	media = soma / N;
	printf("Media:\n",media);
	return 0;
}