/*
 * Queen.cpp
 *
 *  Created on: Mar 8, 2017
 *      Author: reem
 */

#include "Queen.h"

Queen::Queen() {
	current_cell = 0;
	color = 0;
}

Queen::Queen(Cell *cell, Color c) {
	current_cell = cell;
	color = c;
}
bool Queen::isValidMove(Cell *cell) {


	return false;
}
