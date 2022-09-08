#include "includ.h"


char car[4][4] = { ' ','�','�',' ',
					'�','�','�','�',
					' ','�','�',' ',
					'�','�','�','�' };

int carPos = WIN_WIDTH / 2;

void drawCar() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			gotoxy(j + carPos, i + 22); cout << car[i][j];
		}
	}
}
void eraseCar() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			gotoxy(j + carPos, i + 22); cout << " ";
		}
	}
}