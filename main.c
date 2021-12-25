#define COLS 3
#define ROWS 2
#include <stdio.h>
int main () {
	int m[ROWS] [COLS] = {{11,12}, {21,22}, {31,32}};
	int col = 0;
	int row = 0;
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS;col++){
			printf ("%4d", m[row] [col]);
		}
		printf ("\n");
	}
	return 0;
}
