#include <stdio.h>
#define MAX 20

int main()
{
	int x[MAX],i,aux=0,aus,R=MAX-1,U=1,auz;
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&x[i]);
	}
	while(U == 1)
	{
		U=0;
		for(i=R;i>=0;i--)
		{
			if(x[i]>aux)
			{
				aux=x[i];
				aus=i;
				U=1;
			}
		}
		if(R>0){
			auz=x[R];
			x[R]=x[aus];
			x[aus]=auz;
		}
		R--;
		aux=0;
	}
	for(i=0;i<MAX;i++)
	{
		printf("Termo x[%d] = %d\n",i,x[i]);
	}
	return 0;
}
