/* your name | votre nom  */

#include <stdio.h>
#include <stdlib.h>
#include "pacman.h"

void initialize_game(char game_board[][N_COLS], int pacman_location[]) {

	for (int row = 0; row < N_ROWS; row++) {
		for (int col = 0; col < N_COLS; col++) {
			game_board[row][col] = EMPTY;
		}
	}

	for (int col = 2; col < 5; col++) {
		game_board[1][col] = DOTS;
	}

	for (int row = 2; row < 5; row++) {
		game_board[row][2] = WALL;
	}

	game_board[0][1] = GHOST;
	pacman_location[0] = INITIAL_ROW_LOC;
	pacman_location[1] = INITIAL_COL_LOC;
	game_board[INITIAL_ROW_LOC][INITIAL_COL_LOC] = PACMAN;
	display_gameplay("Ready to play", game_board);
}

void play(char game_board[][N_COLS], int move, int *loc, int turn_index) {

	//	char label_buffer[20];
	//
	//	sprintf(label_buffer, "\nTurn %d", turn_index);
	//	display_gameplay(label_buffer, game_board);

	// yours | a vous
}

void display_gameplay(char* label, char game_board[][N_COLS]) {
	// yours | a vous
}

bool game_is_over(char game_board[][N_COLS]) {
	// yours | a vous
	return false;
}
