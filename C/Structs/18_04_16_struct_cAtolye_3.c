/*18/04/2016 Gtu bilgisayar toplulugu Catolye */
#include <stdio.h>

struct single{
	char	*name;
	int		price;
	struct single	*p;
};

struct set{
	char	*set_name;
	int		set_price;
	struct single	*p;
};

int main(void)
{
	int i, sum_price=0;

	struct set s[]={{"set A", 0, NULL},
		{"set B", 0, NULL},
		{"set C", 0, NULL},
		{"set D", 0, NULL}};

	struct single burger[] = {{"Burger", 130, NULL},
		{"Cheese burger", 150, NULL},
		{"Chicken burger", 200, NULL}};

	struct single drink = {"Drink", 130, NULL};
	struct single potato = {"Potato", 120, NULL};
	struct single ice = {"Ice cream", 160, NULL};

	struct single *pt;


	/* Set B: Cheese burger, Drink, Potato*/
	s[1].p = &burger[1];
	burger[1].p = &drink;
	drink.p = &potato;


	printf("********** %s ***********\n", s[1].set_name);


	/* Calculate set price by 10 % discount of sum of all items*/
	for(pt = s[1].p; pt != NULL; pt = pt->p){
		sum_price += pt->price;
		printf("%17s: %5d TL\n", pt->name, pt->price);
	}
	printf("----------------------------\n");
	printf("Sum of all items : %5d TL\n", sum_price);

	s[1].set_price = (int)(sum_price*0.9)/10*10;
 	printf("       Set price : %5d TL\n", s[1].set_price);

	return (0);
	
}

