class Solution {
    public int findPeakElement(int[] arr) {
        if(arr.length==1)
            return 0;
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid>0 && mid<arr.length-1){
            if(arr[mid]>arr[mid-1]){
                if(arr[mid]>arr[mid+1])
                    return mid;
            }else{
                end=mid-1;
                continue;
            }
            if(arr[mid]<arr[mid+1])
                start=mid+1;
            }else if(mid==0){
                if(arr[0]>arr[1])
                    return 0;
                else
                    return 1;
            }else if(mid==arr.length -1){
                if(arr[arr.length-1]>arr[arr.length-2])
                    return arr.length-1;
            }
        }
        return 0;
    }
}