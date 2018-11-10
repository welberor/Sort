#include <stdio.h>
#define MAX 50

int main()
{
	int x[MAX],i,aux,R=1;
	
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&x[i]);
	}
	while(R == 1)
	{
		R=0;
		for(i=0;i<(MAX-1);i++)
		{
			if(x[i]>x[i+1])
			{
				aux=x[i];
				x[i]=x[i+1];
				x[i+1]=aux;
				R=1;
			}
		}
	}
	for(i=0;i<MAX;i++)
	{
		printf("Termo [%d] = %d\n",i,x[i]);
	}
	return 0;
}
