#include"head.h"
void iniqueue(queue* op) {  //��ʼ������
	op->head = NULL;
	op->tail = NULL;
}
void Pushqueue(queue* q,int n) {  //���
	list* newnode=(list*)malloc(sizeof(list));
	if (newnode == NULL) {
		printf("malloc error\n");
		exit(-1);
	}
	newnode->data = n;
	newnode->next = NULL;
	if (q->head == NULL && q->tail == NULL) {  //��û�нڵ�
		q->head = q->tail = newnode;
	}
	else {
		q->tail->next = newnode;
		q->tail = newnode;  //��β�ڵ��Ϊ�½ڵ�
	}
}
void Outqueue(queue* op) {  //����
	assert(op);
	if (op->head->next == NULL) {  //��ֻ��һ���ڵ�
		free(op->head);
		op->head = NULL;
		op->tail = NULL;
	}
	else {
		list* phead = op->head->next;
		free(op->head);
		op->head = phead;
	}
}
int Topqueue(queue* op) {  //ȡ��ͷ
	assert(op);
	return op->head->data;
}
int Tailqueue(queue* op) {  //ȡ��β
	assert(op);
	return op->tail->data;
} 
int Size(queue* op) {   //���ضӵĳ���
	assert(op);
	int sz = 0;
	list* tail = op->head;
	while (tail != NULL) {
		sz++;
		tail = tail->next;
	}
	return sz;
}
void freequeue(queue* op) { //���ٶ�
	list* phead = op->head;
	list* node = NULL;
	while (phead != NULL) {
		node = phead->next;
		free(phead);
		phead = node;
	}
}
int judge(queue* op) {  //�п�
	if (op->head == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}
void print(queue* op) {
	assert(op);
	list* phead = op->head;
	while (phead) {
		printf("%d ", phead->data);
		phead = phead->next;
	}
}