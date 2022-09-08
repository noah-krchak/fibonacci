#include <stdio.h>

int main()
{
	int n = 20, t1=0, t2=1, f=0;
	for(int i = 1; i <= n; i++)
	{
		if(i == 1)
		{
			printf("%d ", t1);
		}
		else
		{
			t1 = t2;
			t2 = f;
		
			f = t1+t2;
			printf("%d ", f);
		}
	}
	printf("\n");
	return 0;
}
