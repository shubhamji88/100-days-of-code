public class Solution {
    public static int getMaxArea(int arr[], int n) 
        {
            // your code here
            int []r=new int[arr.length];
            int []l=new int[arr.length];
            Stack<Integer> st=new Stack<Integer>();
            for(int i=0;i<n;i++){
                while(!st.isEmpty() && arr[st.peek()]>=arr[i])
                    st.pop();
                r[i]=st.isEmpty()?i+1:i-st.peek();
                st.push(i);
            }
            st=new Stack<Integer>();
            for(int i=arr.length-1;i>=0;i--){
                while(!st.isEmpty() && arr[st.peek()]>=arr[i])
                    st.pop();
                l[i]=st.isEmpty()?arr.length-i:st.peek()-i;
                st.push(i);
            }
            int max=0;
            for(int i=0;i<n;i++){
               int area=arr[i]*(r[i]+l[i]-1);
                if(max<area)
                    max=area;
            }
            return max;
        }
public int maximalRectangle(int[][] arr) {
    for(int i=1;i<arr.length;i++){
        for(int j=0;j<arr[i].length;j++){
            if(arr[i][j]==1){
                arr[i][j]+=arr[i-1][j];
            }
        }
    }
    int res=0;
    for(int i=0;i<arr.length;i++){
        int n=getMaxArea(arr[i],arr[i].length);
      if(n>res){
          res=n;
      }
    }
    return res;
}
}
