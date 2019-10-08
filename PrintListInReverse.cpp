// ������6����β��ͷ��ӡ����
// ��Ŀ������һ�������ͷ��㣬��β��ͷ��������ӡ��ÿ������ֵ��


#include "..\Utilities\List.h"
#include <stack>

void PrintListReversingly_Iteratively(ListNode* pHead)
{
    std::stack<ListNode*> nodes;

    ListNode* pNode = pHead;
    while(pNode != nullptr)
    {
        nodes.push(pNode);
        pNode = pNode->m_pNext;
    }

    while(!nodes.empty())
    {
        pNode = nodes.top();
        printf("%d\t", pNode->m_nValue);
        nodes.pop();
    }
}