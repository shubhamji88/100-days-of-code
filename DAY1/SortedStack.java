// { Driver Code Starts
import java.util.Scanner;
import java.util.Stack;
class SortedStack{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			Stack<Integer> s=new Stack<>();
			int n=sc.nextInt();
			while(n-->0)
			s.push(sc.nextInt());
			GfG g=new GfG();
			Stack<Integer> a=g.sort(s);
			while(!a.empty()){
				System.out.print(a.peek()+" ");
				a.pop();
			}
			System.out.println();
		}
	}
}// } Driver Code Ends


/*Complete the function below*/
class GfG{
    Stack<Integer> insertAtCorrectPos(Stack<Integer> s,int a){
        if(s.isEmpty() || a>s.peek()){
            s.push(a);
        }else{
            int temp=s.peek();
            s.pop();
            insertAtCorrectPos(s, a);
            s.push(temp);
        }
        return s;
    }
    Stack<Integer> reverse(Stack<Integer> s){
        if(!s.isEmpty()){
            int i=s.peek();
            s.pop();
            reverse(s);
            return insertAtCorrectPos(s,i);
        }
		return s;
    }
	public Stack<Integer> sort(Stack<Integer> s)
	{
		//add code here.
		return reverse(s);
	}
}