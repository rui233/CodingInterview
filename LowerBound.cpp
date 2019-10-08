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

//二分查找
//函数LowerBound,在包含size个元素的、从小到大排序的int数组a里
//查找比给定整数p小的，下标最大的元素，找到则返回其下标，查不到返回-1