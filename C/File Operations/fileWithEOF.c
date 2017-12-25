#include <stdio.h>

/**
  * input.txt'nin sonuna kadar sayilari oku ve bunların ortalamasını al
  * sonucu result.txt dosyasına yaz
  */
int main()
{
	FILE *input, *output;
	int status;
	int number = 0;
	int counter = 0;
	double total = 0;
	double average = 0.0;

	/* okumak ve yazmak icin dosyalarimizi aciyoruz*/
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");

	/* dosya sonu isaretini gorene kadar okuma yapiyoruz
	 * EOF özel bir isaret, eger dosya sonuna gelinirse..
	 *.. fscanf fonksiyonu EOF return ediyor
	 * her fscanf çağrısında kontrol ediyoruz 
	 *
	 *counter ile de o ana kadar kac sayi oldugunu hesapliyoruz
	 */
	while (EOF != fscanf(input, "%d", &number))
	{
		counter++;
		total += number;
	}

	average = total / counter;

	/* hem terminale hem de dosyaya sonucu yaziyoruz*/
	printf("%d sayinin ortalamasi %.2lf'dir\n", counter, average);
	fprintf(output, "%d sayinin ortalamasi %.2lf'dir\n", counter, average);

	return 0;
}