int LowerSearch(int a[],int size,int p)
{
    int L = 0;
    int R = size -1;
    int lastPos = -1;
    while (L<=R){
        int mid = L + (R -L)/2;
        
        if(p <= a[mid])
            R = mid - 1 ;
        else
        {
            lastPos = mid;
            R = mid + 1;
        }
        
    }
    return lastPos;
}

//���ֲ���
//����LowerBound,�ڰ���size��Ԫ�صġ���С���������int����a��
//���ұȸ�������pС�ģ��±�����Ԫ�أ��ҵ��򷵻����±꣬�鲻������-1