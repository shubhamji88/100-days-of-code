class Solution {
    public char nextGreatestLetter(char[] arr, char x) {
        int start=0;
        int end=arr.length-1;
        int res=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(Character.compare(arr[mid], x)>0){
                res=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return arr[res];
    }
}