// { Driver Code Starts
    import java.util.*;
    import java.lang.*;
    import java.io.*;
    
    class GFG {
        
        
        public static void main (String[] args) throws IOException {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int t = Integer.parseInt(br.readLine().trim());
            while(t-->0){
                long n = Long.parseLong(br.readLine().trim());
                String inputLine[] = br.readLine().trim().split(" ");
                long[] arr = new long[(int)n];
                for(int i=0; i<n; i++)arr[i]=Long.parseLong(inputLine[i]);
                System.out.println(new Solution().getMaxArea(arr, n));
            }
        }
    }
    
    
    
    // } Driver Code Ends
    
    
    
    
    
    class Solution
    {
        //Function to find largest rectangular area possible in a given histogram.
               public static long getMaxArea(long arr[], long n) 
            {
                // your code here
                long []r=new long[arr.length];
                long []l=new long[arr.length];
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
                long max=0;
                for(int i=0;i<n;i++){
                   long area=arr[i]*(r[i]+l[i]-1);
                    if(max<area)
                        max=area;
                }
                return max;
            }
            
    }
    
    
    
    