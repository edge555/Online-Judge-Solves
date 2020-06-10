import java.util.*;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i,n;
		n = sc.nextInt();
		int ara[]=new int[n+1];
		for(i=0;i<n;i++) {
			ara[i]=sc.nextInt();
		}
		int ans=1,cnt=1,last=ara[0];
		for(i=1;i<n;i++) {
			if(ara[i]>last) {
				cnt++;
			}
			else {
				ans=Math.max(ans,cnt);
				cnt=1;
			}
			last=ara[i];
		}
		ans=Math.max(ans, cnt);
		System.out.println(ans);
	}
}