#include <stdio.h>
typedef struct {
	char* light;
	char* fan;
	char* motor;
}smartHome_t;
int main() {
	smartHome_t A;
	A.light = "on";
	A.fan = "off";
	A.motor = "off";
	printf("light: ");
	printf("%s\n", A.light);
	printf("fan: ");
	printf("%s\n", A.fan);
	printf("motor: ");
	printf("%s\n", A.motor);
	return 0;
}