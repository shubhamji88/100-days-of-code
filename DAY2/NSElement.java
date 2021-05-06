import java.util.*;
public class Solution {
    public int[] prevSmaller(int[] arr) {
       Stack<Integer> s=new Stack();
       int []res=new int[arr.length];
       for(int i=0;i<arr.length;i++){
           while(!s.isEmpty() && arr[i]<s.peek())
               s.pop();
           if(s.isEmpty()){
               res[i]=-1;
           }else{
               res[i]=s.peek();
           }
          s.push(arr[i]);
       }
        return res;
   }
}
