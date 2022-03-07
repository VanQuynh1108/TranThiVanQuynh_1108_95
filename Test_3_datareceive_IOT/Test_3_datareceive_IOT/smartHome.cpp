#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;

int Light_Mode(char data[], char x[]) {
	int n = 0;
	const char* search = "\"light\": \"";
	char* find = strstr(data, search) + strlen(search);
	char length = 0;
	while (find[length++] != '"');
	char condition[4] = { 0 };
	memcpy(condition, find, length - 1);
	if (strcmp(condition, x) == 0)
		n = 1;
	else
		n = 0;
	return n;
}
int Fan_Mode(char data[], char x[]) {
	int n = 0;
	const char* search = "\"fan\": \"";
	char* find = strstr(data, search) + strlen(search);
	char length = 0;
	while (find[length++] != '"');
	char condition[4] = { 0 };
	memcpy(condition, find, length - 1);
	if (strcmp(condition, x) == 0)
		n = 1;
	else
		n = 0;
	return n;
}

int Motor_Mode(char data[], char x[]) {
	int n = 0;
	const char* search = "\"motor\": \"";
	char* find = strstr(data, search) + strlen(search);
	char length = 0;
	while (find[length++] != '"');
	char condition[4] = { 0 };
	memcpy(condition, find, length - 1);
	if (strcmp(condition, x) == 0)
		n = 1;
	else
		n = 0;
	return n;
}

int main()
{
	smartHome_t device = { 0 };
	char data[2048] = { 0 };
	char x[] = "on";
	printf("Enter data: ");
	fgets(data, sizeof(data), stdin);
	// DATA: HTTP1.1 200 OK {"light": "on","fan": "off","motor": "off"}
	device.light = Light_Mode(data, x);
	device.fan = Fan_Mode(data, x);
	device.motor = Motor_Mode(data, x);
	printf("Light: %d\nFan: %d\nMotor: %d", device.light, device.fan, device.motor);
	return 0;
}