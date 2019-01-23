#include <assert.h>
#include <stdio.h>
#include <stdint.h>

// copypasted and reworked from \url{https://en.wikipedia.org/wiki/Extended_Euclidean_algorithm}
void EGCD (int a, int b)
{
	int s=0; int old_s=1;
	int t=1; int old_t=0;
	int r=b; int old_r=a;
	int tmp;

	while (r!=0)
	{
		int quotient=old_r/r;
		tmp=r; r=old_r - quotient*r; old_r=tmp;
		tmp=s; s=old_s - quotient*s; old_s=tmp;
		tmp=t; t=old_t - quotient*t; old_t=tmp;
	};
	printf ("GCD: %d\n", old_r);
	if (old_r!=1)
	{
		printf("%d and %d are not coprimes!\n", a, b);
		return;
	};
	printf ("Bézout coefficients: %d %d\n", old_s, old_t);
	printf ("quotients by the GCD (s,t): %d %d\n", s, t);

	// see also: \url{https://math.stackexchange.com/q/1310415}
	if (old_s>=0 && old_t<=0)
		printf ("corrected coefficients: %d(0x%x) %d(0x%x)\n", old_s, old_s, -old_t, -old_t);
	else if (old_s<=0 && old_t >=0)
		printf ("corrected coefficients: %d(0x%x) %d(0x%x)\n", old_s+b, old_s+b, -old_t+a, -old_t+a);
	else
		assert(0);
};

void main()
{
	EGCD(3, 0x10000);
};

