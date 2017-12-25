#include <stdio.h>


void print(int number);

int main()
{
	int number = 13;
	
	/**
	  * baslangicta 13 olan sayiyi fonksiyona parametre olarak..
	  *.. gonderip fonksiyon icinde degiştirmeye calisiyoruz. 
	  * beklenen sey fonksiyon oncesi ve sonrasinda degerlerin ayni olmasi
	  * yani iceride yapilan degisikliklerin sadece iceriyi etkilemesi
	  */

	printf("Sayimizin degeri fonksiyona girmeden once %d\n", number);
	
	print(number);
	
	printf("Sayimizin degeri fonksiyondan ciktiktan sonra %d\n", number);

	

	return 0;
}


/* her hangi bir hesap yapip return etmeyecegimiz icin tipimiz void*/
void print(int number)
{
	number = 33;
	printf("Sayimizin degeri fonksiyonun icinde %d\n", number);

}