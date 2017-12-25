#include <stdio.h>

void read_menu(int *c1, double *p1, int *c2, double*p2, int *c3, double *p3);
void read_discounts(int *d1, int *d2, int *d3);
void get_menu_choice(int *choice);
int order_meal(double price_of_food, int c_of_food, int d_percentage, double *money, int *cal);

#define TRUE 1
#define FALSE 0

int main()
{
	int c1,c2,c3;
	double p1,p2,p3;
	int d1,d2,d3;
	int dType;
	int discount;
	int menuChoice;
	double para = 200.0;
	int cal = 0;
	int flag;

	//Get products
	read_menu(&c1, &p1, &c2, &p2, &c3, &p3);
	
	//Print Info's
	printf("First : %d : %lf\n", c1, p1);
	printf("Sec : %d : %lf\n", c2, p2);
	printf("Third : %d : %lf\n", c3, p3);
	
	//Get discounts
	read_discounts(&d1,&d2,&d3);
	menuChoice = 1;
	while(menuChoice != 0)
	{
		//Ask for discount
		printf("Discount Type : ");
		printf("1. %d\n2. %d\n3. %d\n", d1,d2,d3);
		printf("Enter Discount : ");
		scanf("%d", &dType);
		
		//Check discount type
		switch(dType)
		{
			case 1:	discount = d1; break;
			case 2: discount = d2; break;
			case 3: discount = d3; break;
			default : discount = 0; break;
		}
		
		//Get menu choice
		get_menu_choice(&menuChoice);
		
		//order meal
		if(menuChoice == 1)
		{
			order_meal(p1, c1, discount, &para, &cal);
		}
		else if(menuChoice == 2)
		{
			order_meal(p2, c2, discount, &para, &cal);
		}
		else if(menuChoice == 3)
		{
			order_meal(p3, c3, discount, &para, &cal);
		}
	
	}

	return 0;
}

int order_meal(double price_of_food, int c_of_food, int d_percentage, double *money, int *cal)
{
	if(price_of_food > *money)
		return FALSE;
	else
	{
		
		*money -= (price_of_food - (price_of_food * d_percentage) / 100.0);
		*cal += c_of_food;
		
		return TRUE;
	}	
}

void get_menu_choice(int *choice)
{
	printf("Enter Choice : ");
	scanf("%d", choice);
}

void read_discounts(int *d1, int *d2, int *d3)
{
	printf("A");
	*d1 = 20;
	printf("A");
	*d2 = 10;
	printf("A");
	*d3 = 2;
	printf("A");
}

void read_menu(int *c1, double *p1, int *c2, double*p2, int *c3, double *p3)
{
	//First product
	printf("Enter Calorie : ");
	scanf("%d", &(*c1));
	
	printf("Enter price : ");
	scanf("%lf", &(*p1));
	
	//SECOND product
	printf("Enter Calorie : ");
	scanf("%d", &(*c2));
	
	printf("Enter price : ");
	scanf("%lf", &(*p2));
	
	//third product
	printf("Enter Calorie : ");
	scanf("%d", &(*c3));
	
	printf("Enter price : ");
	scanf("%lf", &(*p3));	
}

