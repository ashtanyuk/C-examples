/* c-examples by A.Shtanyuk */
/* factorial.c - the factorial function */

#include <stdio.h>


long factor(int N)
{
	if(N==1)
		return 1;
	else
		return N*factor(N-1);
}

int main()
{
	printf("%d! - %ld\n",15,factor(15));
	return 0;
}