#include<stdio.h>
int maaaaain( void )
{
	int r = 50;
	int *p;
	int **k;
	int ***m;
	printf( "r(first state): %d\n", r );
	p = &r;
	k = &p;
	m = &k;
	***m = 100;
	printf( "r(second state): %d\n", r );

	return 0;
}
//buradaki yıldızlar ne kadar pointer incerption yapcaksan o kadar konur.
// Not: ANLAMAYAN MÜPTEZELLER İÇİN bir pointerda bir * pointer içinde pointer iki * böyle böyle gidiyor.