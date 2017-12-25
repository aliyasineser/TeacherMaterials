#include <stdio.h>

/**
  * input.txt'den 5 sayi oku ve bunların ortalamasını al
  * sonucu result.txt dosyasına yaz*/
int main()
{
	FILE *input, *output;
	int number = 0;
	int total = 0;
	double average = 0.0;
	int i = 0;

	/* okumak ve yazmak icin dosyalarimizi aciyoruz*/
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");

	/* kac sayi okuyacagimizi bildigimiz icin..
	 *..burada for loop kullanmak daha mantıklı
	 */
	for (i = 0; i < 5; ++i)
	{
		fscanf(input, "%d", &number);
		total += number;
	}

	average = total / 5;
	
	/* hem terminale hem de dosyaya sonucu yaziyoruz*/
	printf("5 sayinin ortalamasi %.2lf'dir\n", average);
	fprintf(output, "5 sayinin ortalamasi %.2lf'dir\n", average);

	


	return 0;
}