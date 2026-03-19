#pragma once

struct Cell{
	bool isMine	= false;
	bool isRevealed = false;
	bool isFlagged  = false;
	int neighborCount = 0;
};
