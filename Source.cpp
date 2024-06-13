#include <stdio.h>
int main ()
{
	int i;
	i = 2038 ;
	printf ("i=%d...(10)\n",i);
	int j;
	j=i;
	printf ("j=%o...(8)\n",i);
	int k;
	k=i;
	printf ("k=%x...(16)\n",i);
	printf("\n");
	printf ("i=%d...(10)\n",i);
	printf ("j=%o...(8)\n",i);
	printf ("k=%x...(16)\n",i);
	printf("\n");
	printf ("i=%d...(10)\n",i);
	printf ("j=%o...(8)\n",i);
	printf ("k=%x...(16)\n",i);
	return (0);
}