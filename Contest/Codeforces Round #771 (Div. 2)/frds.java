import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		PrintWriter out = new PrintWriter(System.out);
		int len = obj.nextInt();
		while (len-- != 0) {
            int n=obj.nextInt();
            int[] a=new int[n];
            int[] pre=new int[n];
            int[] suf=new int[n];
            int max=0;
            for(int i=0;i<n;i++) {
            	a[i]=obj.nextInt();
            	max=Math.max(max, a[i]);
            	pre[i]=max;
            }
            max=Integer.MAX_VALUE;
            for(int i=n-1;i>=0;i--)
            {
            	max=Math.min(max, a[i]);
            	suf[i]=max;
            }
            int ans=1;
            for(int i=0;i<n-1;i++) if(pre[i]<suf[i+1])ans+=1;	
            
            out.println(ans);
		}
		out.flush();
	}
}
