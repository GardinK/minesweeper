#pragma once

#include <vector>
#include "Cell.h"

class Board{
public:
	Board(int rows, int cols, int mines);
	void reveal(int row, int col);
	void toggleFlag(int row, int col);
	bool isWon();
	bool isLost();
	int getRows();
	int getCols();
	const Cell& getCell(int row, int col);

private:
	std::vector<std::vector<Cell>> grid;
	int rows, cols, mines;
	bool lost = false;
	void placeMines(int firstRow, int firstCol);
	void calculateNeighbors();
	void floodReveal(int row, int col);
	bool inBounds(int row, int col);
};

