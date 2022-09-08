#include "includ.h"

int enemyY[3];
int enemyX[3];
int enemyFlag[3];

void genEnemy(int ind) {
	enemyX[ind] = 17 + rand() % (33);
}
void drawEnemy(int ind) {
	if (enemyFlag[ind] == true) {
		gotoxy(enemyX[ind], enemyY[ind]);   cout << "****";
		gotoxy(enemyX[ind], enemyY[ind] + 1); cout << " ** ";
		gotoxy(enemyX[ind], enemyY[ind] + 2); cout << "****";
		gotoxy(enemyX[ind], enemyY[ind] + 3); cout << " ** ";
	}
}
void eraseEnemy(int ind) {
	if (enemyFlag[ind] == true) {
		gotoxy(enemyX[ind], enemyY[ind]); cout << "    ";
		gotoxy(enemyX[ind], enemyY[ind] + 1); cout << "    ";
		gotoxy(enemyX[ind], enemyY[ind] + 2); cout << "    ";
		gotoxy(enemyX[ind], enemyY[ind] + 3); cout << "    ";
	}
}
void resetEnemy(int ind) {
	eraseEnemy(ind);
	enemyY[ind] = 1;
	genEnemy(ind);
}

int collision() {
	if (enemyY[0] + 4 >= 23) {
		if (enemyX[0] + 4 - carPos >= 0 && enemyX[0] + 4 - carPos < 9) {
			return 1;
		}
	}
	return 0;
}