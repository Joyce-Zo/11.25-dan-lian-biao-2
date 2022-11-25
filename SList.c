#include"SList.h"

//	�����ڵ�
SLT* CreatListNode(SLTDataType x)
{
	SLT* newnode = (SLT*)malloc(sizeof(SLTDataType));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//  ��ӡ
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

//	β��
void SLtPushBack(SLT** pphead, SLTDataType x)
{
	//	��β�ڵ�
	/*SLT* newnode = (SLT*)malloc(sizeof(SLTDataType));
	newnode->data = x;
	newnode->next = NULL; */	// ֱ�ӷ�װ��һ������

	SLT* newnode = CreatListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;	// ������
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

//	ͷ��
void SLtPushFront(SLT** pphead, SLTDataType x)
{
	SLT* newnode = CreatListNode(x); // �����½ڵ㣬ֵx�Ѿ�����newnode
	newnode->next = *pphead; // ��ԭ��ͷ�ĵ�ַ�����½ڵ��next
	*pphead = newnode;		//	���½ڵ���Ϊ�µ�ͷ
}