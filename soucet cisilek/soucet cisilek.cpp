#include <stdio.h>

int main() {
	int hodnota;
	int sude = 0;
	printf("Napis hodnotu cisla: ");
	scanf_s("%d", &hodnota);

	for (int i = 1; i <= hodnota; i++) {
		if (i % 2 == 0) {
			sude = sude + i;
		}
	}
	printf("\nPocet sudych cisel: %d:", sude);

}

