// { Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();

            Solution ob = new Solution();
            System.out.println(ob.findMaxLen(S));
        }
    }
}

// } Driver Code Ends


//User function Template for Java
class Solution {
    static int findMaxLen(String S) {
        // code here
        Stack<Character> s=new Stack<Character>();
        int res=0;
        for(char c :S.toCharArray()){
            if(Character.compare(c, '('))
                s.push(c);
            else if(Character.compare(c, ')')){
                if(Character.compare(s.peek(),'(')){
                    s.pop();
                    res++;
                }
                else
                    return res;
            }
        }
        return res;
    }
};