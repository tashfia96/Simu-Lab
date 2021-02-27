#include <stdio.h>

int main()
{
	int n,i,interarrival[20],arrival[20];
	interarrival[0] = 0;
	arrival[0] = 0;

	for( i = 0 ; i < 19 ; i++ )
	{
		n = rand();
		interarrival[i+1] = n;
	}

	for(i = 0; i < 19; i++)
	{
		arrival[i+1] = arrival[i] + interarrival[i+1];
	}

	printf("Customer No\t\Interarrival Time\t\Arrival Time\n");
for(i = 0; i < 20; i++)
	{
		printf("%d\t\t %d\t\t\t %d\n",i+1,interarrival[i],arrival[i]);
	}

}
