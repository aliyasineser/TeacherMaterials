/*18/04/2016 Gtu bilgisayar toplulugu Catolye */
#include <stdio.h>
#define N 4

typedef struct student{
    char name[20];
    int eng;
    int math;
    int phys;
	double mean;
}STUDENT;


int main(void)
{
    int i;

    /* Pointer variable p refers to the address of data*/
	STUDENT *p;

	STUDENT data[]={
		{"Jack", 82, 72, 58, 0.0},
		{"Young", 77, 82, 79, 0.0}, 
		{"Steeve", 52, 62, 39, 0.0}, 
		{"Mark", 61, 82, 88, 0.0}
	}; 
    p = data;

	for(i=0; i<N; i++)
		data[i].mean = (data[i].eng + data[i].math + data[i].phys)/3.0;

    for(i=0; i<N; i++){
        printf("%10s: English = %3d  Math = %3d   Physics = %3d   Mean = %3.2f\n", 
        p->name, p->eng, p->math, p->phys, p->mean);

      /* Shifting of address*/
      p++;
    }

    return (0);

}
