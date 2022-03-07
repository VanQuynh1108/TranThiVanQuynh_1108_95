

#include <stdint.h>
#include <stdio.h>
void main()
{
	uint16_t ig16_bit = 0;
	printf("Enter a number : \r\n");
	scanf_s("%d", &ig16_bit);
	uint8_t *pi = &ig16_bit;
	uint8_t low = *pi;
	uint8_t high = *(pi + 1);
	printf("Low bit : %d (0x%x)\r\n", low, low);
	printf("High bit : %d (0x%x)\r\n", high, high);
}