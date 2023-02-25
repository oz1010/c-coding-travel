#include <stdio.h>

// 定义游戏主界面尺寸；
// 默认窗口大小有差异，根据实际情况调整即可；
#define BOARD_ROW 30
#define BOARD_COL 80
#define WALL '#'
#define SNAKE_HEAD '>'
#define SNAKE_BODY '@'

// 游戏主界面
// 固定为BOARD_ROW*BOARD_COL
char board[BOARD_ROW][BOARD_COL];

int main(int argc, char *argv[]) {
	// 初始化游戏主界面墙体边界
	for (int i = 0; i < BOARD_COL; i++) {
		board[0][i] = WALL; // 显示为墙体
	}
	for (int i = 0; i < BOARD_COL; i++) {
		board[BOARD_ROW - 1][i] = WALL; // 显示为墙体
	}
	for (int i = 0; i < BOARD_ROW; i++) {
		board[i][0] = WALL; // 显示为墙体
	}
	for (int i = 0; i < BOARD_ROW; i++) {
		board[i][BOARD_COL - 1] = WALL; // 显示为墙体
	}

	// 初始化蛇
	board[BOARD_ROW / 2][BOARD_COL / 2] = SNAKE_HEAD;
	board[BOARD_ROW / 2][BOARD_COL / 2 - 1] = SNAKE_BODY;
	board[BOARD_ROW / 2][BOARD_COL / 2 - 2] = SNAKE_BODY;
	board[BOARD_ROW / 2][BOARD_COL / 2 - 3] = SNAKE_BODY;

	// 显示游戏主界面
	for (int i = 0; i < BOARD_ROW; i++) {
		for (int j = 0; j < BOARD_COL; j++) {
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
	return 0;
}


