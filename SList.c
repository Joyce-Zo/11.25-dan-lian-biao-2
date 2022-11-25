#include"SList.h"

//	创建节点
SLT* CreatListNode(SLTDataType x)
{
	SLT* newnode = (SLT*)malloc(sizeof(SLTDataType));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//  打印
void SLtPrint(SLT* phead)
{
	SLT* cur = phead;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//	尾插
void SLtPushBack(SLT** pphead, SLTDataType x)
{
	//	找尾节点
	/*SLT* newnode = (SLT*)malloc(sizeof(SLTDataType));
	newnode->data = x;
	newnode->next = NULL; */	// 直接封装成一个函数

	SLT* newnode = CreatListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;	// 解引用
	}
	else
	{
		SLT* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//	头插
void SLtPushFront(SLT** pphead, SLTDataType x)
{
	SLT* newnode = CreatListNode(x); // 创建新节点，值x已经传入newnode
	newnode->next = *pphead; // 将原来头的地址放入新节点的next
	*pphead = newnode;		//	将新节点作为新的头
}