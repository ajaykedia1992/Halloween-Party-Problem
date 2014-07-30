#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	int testc;
	long long int n;
	scanf("%d", &testc);
	while(testc--)
	{
		scanf("%lld", &n);
		printf("%lld\n", ((long long int)n/2)*(n-(long long int)(n/2)));
	}
	return 0;
}