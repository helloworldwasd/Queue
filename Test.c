#include"head.h"
int main() {
	queue q;
	//初始化
	iniqueue(&q);
	//入队
	Pushqueue(&q,5);
	Pushqueue(&q, 1);
	Pushqueue(&q, 2);
	Pushqueue(&q, 3);
	Pushqueue(&q, 4);
	//出队
	Outqueue(&q);
	//取队头/队尾 ,size
	printf("%d\n", Topqueue(&q));
	printf("%d\n", Tailqueue(&q));
	printf("size=%d \n", Size(&q));
	print(&q);
	return 0;
}