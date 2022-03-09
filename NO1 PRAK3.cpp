#include <string.h>
#include <stdio.h>

int main ()
{
	char kalimat [100];
	int jumlah;
	printf (" tuliskan kata : ");
	fgets (kalimat, sizeof (kalimat), stdin);
	jumlah = strlen(kalimat)-1;
	printf ("jumlah karakter : %d\n", jumlah);
	return 0;
}
