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
//二分查找
//函数BinarySearch,在包含size个元素的、从小到大排序的Int数组a
//里查找元素p,如果找到，则返回元素下标，如果找不到，则返回-1。
//要求复杂度O（log(n))
