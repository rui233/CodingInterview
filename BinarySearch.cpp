int BinarySearch(int a[],int size,int p)
{
    int L = 0;
    int R = size -1;
    while (L<=R){
        int mid = L + (R -L)/2;
        if( p == a[mid] )
            return mid;
        else if(p > a[mid])
            L = mid + 1;
        else
        {
            R = mid -1;
        }
        
    }
    return -1;

}
//���ֲ���
//����BinarySearch,�ڰ���size��Ԫ�صġ���С���������Int����a
//�����Ԫ��p,����ҵ����򷵻�Ԫ���±꣬����Ҳ������򷵻�-1��
//Ҫ���Ӷ�O��log(n))
