/*
 * @author: Sevval MEHDER
 */

#include <stdio.h>
#include <math.h>  // Dont forget -lm while compiling...

double sinus_function(int x);
double exp_function(int x);

// We can keep different types in struct
// This is a point on coordinate system
// According this point struct the orijin is (0,0.0)
struct Point{

	int x;
	double y;

};

// We can keep even function
// This is a point on the given function
// For example ExpPoint
struct ExpPoint{

	int x;
	double y;
	// This is a function pointer
	// I'll explain why we use this pointer..
	double (*test_function)(int);
};

/* 
 * Goal: According to given function and given x coordinate find y coordinate
 */
int main(){

	// Create 
	struct Point onTheSin, onTheExp;

	// What is the sinus function value for x = 170?
	onTheSin.x = 170;
	onTheSin.y = sinus_function(onTheSin.x);
	printf("The point: (%d, %.1f) is on the sinus graph.\n", onTheSin.x, onTheSin.y);

	// What is the exponantial function value for x = 2?
	onTheExp.x = 2;
	onTheExp.y = exp_function(onTheExp.x);
	printf("The point: (%d, %.1f) is on the e^x graph.\n", onTheExp.x, onTheExp.y);

	// We know onTheSin point is on the sinus graph
	// and onTheExp point is on the e^x graph
	// So the structure of Point can belong to any function!
	// We can specify this situation with function pointer

	struct ExpPoint point1;
	point1.test_function = &exp_function;
	point1.x = 2;
	point1.y = point1.test_function(point1.x);
	printf("The point: (%d, %.1f) is absolutely on the e^x graph.\n", point1.x, point1.y);

	// Now we can sure that all of the ExpPoints are on the e^x graph.
	// And we can generate points that are on the same graph even we dont know the which graph.
	// Thats cool!


}


double sinus_function(int x){

	double y;

	y = sin(x);

	return y;

}

double exp_function(int x){

	double y;

	y = exp(x);

	return y;
}

