#include <stdio.h>

int main(int argc, char *argv[]) {
	/* 打印游戏标题 */
	printf("################################################################################\n");
	printf("####        ####    ######   ########    ########   #######    ##             ##\n");
	printf("###          ###    ######   ########    ########   ######    ###             ##\n");
	printf("##    ####    ##     #####   ########     #######   #####    ####   ############\n");
	printf("##   ######   ##      ####   #######      #######   ####    #####   ############\n");
	printf("##   ######   ##      ####   #######      #######   ###    ######   ############\n");
	printf("##     #########   #   ###   ######   ##   ######   ##    #######   ############\n");
	printf("###        #####   #    ##   ######   ##   ######   #    ########   ############\n");
	printf("####         ###   ##   ##   ######   ##   ######        ########            ###\n");
	printf("#######       ##   ###   #   #####          #####         #######            ###\n");
	printf("###########   ##   ###   #   #####          #####    ##   #######   ############\n");
	printf("##   #######  ##   ####      #####           ####   ###    ######   ############\n");
	printf("##   #######  ##   ####      ####   ######   ####   ####    #####   ############\n");
	printf("##   ######   ##   #####     ####   ######   ####   #####    ####   ############\n");
	printf("###           ##   ######    ###   ########   ###   #####    ####   ############\n");
	printf("####         ###   ######    ###   ########   ###   ######    ###             ##\n");
	printf("######    ######   #######   ##   ##########   ##   #######    ##             ##\n");
	printf("################################################################################\n");
	printf("\n");
	
	/* 打印游戏选项 */
	printf("选择游戏难度：\n");
	printf("1. 简单\n");
	printf("2. 普通\n");
	printf("3. 困难\n");
	printf("\n");
	
	/* 等待用户输入游戏难度和游戏者名称 */
	int select; // 声明用户选择变量
	select = 1; // 默认选择游戏难度为简单
	printf("您的选择是：");
	getchar();
	printf("\n默认的选择是%d，指定游戏难度为简单！\n", select);
	printf("您的尊姓大名是：游戏大佬（默认值，后面实现）!\n");

	return 0;
}



