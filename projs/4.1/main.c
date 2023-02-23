#include <stdio.h>

// 宏方式定义方向
#define DD_UP 		10
#define DD_DOWN 	11
#define DD_LEFT 	12
#define DD_RIGHT 	13

// 枚举方式定义方向
enum EDirctType {
	ED_UP = 20,
	ED_DOWN,
	ED_LEFT,
	ED_RIGHT,
};

// 常量方式定义方向
const int CD_UP = 		30;
const int CD_DOWN = 	31;
const int CD_LEFT = 	32;
const int CD_RIGHT = 	33;

// 通用元素
struct common {
	unsigned char type;	// 元素类型
	char show;			// 显示符号
};

// 蛇头部
struct head {
	unsigned char type;	// 元素类型
	char show;			// 头部显示符号
	int ddirection;		// 宏定义头部方向
	enum EDirctType edirection;	// 枚举头部方向
	int cdirection;		// 常量头部方向
};

// 蛇身体
struct body {
	unsigned char type;	// 元素类型
	char show;			// 身体显示符号
};

// 食物
struct food {
	unsigned char type;	// 元素类型
	char show;			// 食物显示符号
	int score;			// 食物的分值
};

// 墙体
struct wall {
	unsigned char type;	// 元素类型
	char show;			// 墙壁显示符号
};

// 游戏元素
union item {
	struct common c;
	struct head h;
	struct body b;
	struct food f;
	struct wall w;
};

// 玩家信息
struct user {
	const char name[32];	// 玩家姓名
	long long score;		// 玩家得分
};

// 玩家历史排行榜
struct user userRank[3] = {
	{"1010", 		6781},
	{"Player1",		5253},
	{"Welth",		2397},
};

int main(int argc, char *argv[]) {
	{
		int direction1 = 10;
		int direction2 = DD_UP;
		printf("direction1=%d\n", direction1);
		printf("direction2=%d\n", direction2);
	}

	{
		int direction1 = 20;
		int direction2 = ED_UP;
		enum EDirctType direction3 = 20;
		enum EDirctType direction4 = ED_UP;
		printf("direction1=%d\n", direction1);
		printf("direction2=%d\n", direction2);
		printf("direction3=%d\n", direction3);
		printf("direction4=%d\n", direction4);
	}

	{
		struct common c1;
		struct common c2 = {5, '3'};
		printf("init c1={%d,%c}\n", c1.type, c1.show);

		c1.type = 5;
		c1.show = '3';
		printf("c1={%d,%c}\n", c1.type, c1.show);
		printf("c2={%d,%c}\n", c2.type, c2.show);
	}

	{
		struct item1 {
			struct common c;
			struct head h;
		};

		union item2 {
			struct common c;
			struct head h;
		};

		struct item1 v1;
		union item2 v2;
		v1.c.type = 1;
		v1.c.show = 's';
		v2.c.type = 2;
		v2.c.show = 'u';
		printf("v1.h={%d,%c}\n", v1.h.type, v1.h.show);
		printf("v2.h={%d,%c}\n", v2.h.type, v2.h.show);
		printf("sizeof(v1)=%llu\n", sizeof(v1));
		printf("sizeof(v2)=%llu\n", sizeof(v2));
	}

	{
		int array[3] = {5, 9, 8};
		printf("array=[%d %d %d]\n", array[0], array[1], array[2]);
		array[2] = 3;
		printf("array=[%d %d %d]\n", array[0], array[1], array[2]);

		char name1[32] = "John";
		printf("My name1 is %s\n", name1);
		printf("My name1 array=[%c %c %c %c] value=[%d %d %d %d]\n",
		       name1[0], name1[1], name1[2], name1[3],
		       name1[0], name1[1], name1[2], name1[3]);
		char name2[32] = {'J', 'o', 'h', 'n'};
		printf("My name2 is %s\n", name2);

		printf("Name\tscore\n");
		printf("%s\t%lld\n", userRank[0].name, userRank[0].score);
		printf("%s\t%lld\n", userRank[1].name, userRank[1].score);
		printf("%s\t%lld\n", userRank[2].name, userRank[2].score);
	}

	return 0;
}
