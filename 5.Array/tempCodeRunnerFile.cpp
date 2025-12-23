int binsearch(int *arr,int n,int k){
    int st=0;
    int end=n-1;
    int mid = (st+end)/2;
    if(arr[mid]==k) {
        return mid;
    }
    else if(arr[mid]>k) end=mid-1;
    else st=mid+1;
}