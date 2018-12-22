#include<stdio.h>
#include<conio.h>

int main()
{
	long detik,hd,jd,md ;
	printf("program konversi detik ke hari, jam, menit\n");
	printf("masukkan hari :"); scanf("%i",&hd);
	detik=hd*24*60*60;
	printf("hasilnya adalah = %i\n",detik);
	printf("masukkan jam : "); scanf("%i",&jd);
	detik=jd*60*60;
	printf("hasilnya adalah = %i\n",detik);
	printf("masukkan menit : "); scanf("%i",&md);
	detik=md*60;
	printf("satu hari adalah = %i\n",detik);
	getch();
	
}
