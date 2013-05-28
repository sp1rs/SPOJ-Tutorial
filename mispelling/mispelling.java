import java.io.*;
import java.util.ArrayList;
public class mispelling{
	public static void main(String[] args) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int i=1;i<=t;i++){
			String s=br.readLine();
			String s1[]=new String[1];
			s1=s.split(" ");
			int x=Integer.parseInt(s1[0]);
			StringBuffer sb=new StringBuffer(s1[1]);
			sb=sb.deleteCharAt(x-1);
			System.out.println(i+" "+sb);
			
		}
	}
}
