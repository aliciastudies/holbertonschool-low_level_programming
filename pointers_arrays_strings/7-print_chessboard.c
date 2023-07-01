#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Array being evaluated
 */

void print_chessboard(char (*a)[8]) /* expects 2-D array of 8x8 */
{
	int row;
	int col;

	row = 0;
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col = col + 1;
		}
		_putchar('\n');
		row = row + 1;
	}
}
