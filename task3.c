#include <stdio.h>

int add(int a, int b);
float add_float(float c, float d);
float area_circle(float radius);
int area_rectangle(int width, int length);
int factorial(int num);

void main() {
	int a;
	int b;
	float radius;

	printf("insert a for addition\n"); scanf("%d", &a);
	printf("insert b for addition\n"); scanf("%d", &b);
	printf("integer addition of %d and %d is %d\n", a,b,add(a,b));

	float c;
	float d;

	printf("insert c for addition\n"); scanf("%f", &c);
	printf("insert d for addition\n"); scanf("%f", &d);
	printf("float addition of %f and %f is %f\n", c,d,add_float(c,d));

	/* area of circle */
	printf("insert radius for area calculation\n"); scanf("%f", &radius);
	printf("area of circle of the circle is %f\n", area_circle(radius));


	/* area of rectangle */

	printf("insert side a\n"); scanf("%d", &a);
	printf("insert side b\n"); scanf("%d", &b);
	printf("area is %d\n", area_rectangle(a,b));

	/* calculation of factorial */

	printf("insert the number for factorial\n"); scanf("%d", &a);
	printf("factorial is %d\n", factorial(a));

}

int add(int a, int b){
	return a+b;
}
float add_float(float c, float d){
	return c+d;
}
float area_circle(float radius){
	return 3.14*radius*radius;
}
int area_rectangle(int width, int length){
	return length * width;
}
int factorial(int num){
	if (num == 1){
		return 1;
	}
	else {
	return num*factorial(num-1);
	}
}


