#include"head.h"
int main() {
	queue q;
	//��ʼ��
	iniqueue(&q);
	//���
	Pushqueue(&q,5);
	Pushqueue(&q, 1);
	Pushqueue(&q, 2);
	Pushqueue(&q, 3);
	Pushqueue(&q, 4);
	//����
	Outqueue(&q);
	//ȡ��ͷ/��β ,size
	printf("%d\n", Topqueue(&q));
	printf("%d\n", Tailqueue(&q));
	printf("size=%d \n", Size(&q));
	print(&q);
	return 0;
}