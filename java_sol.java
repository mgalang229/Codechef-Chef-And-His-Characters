import java.io.*;
import java.util.*;

public class Main {
	static boolean check(String s1) {
		char[] a = s1.toCharArray();
		char[] b = {'c', 'e', 'f', 'h'};
		Arrays.sort(a);
		return Arrays.equals(a, b);
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int tt = in.nextInt();
		while (tt > 0) {
			String s = in.next();
			int cnt = 0;
			for (int i = 0; i < (int) s.length(); i++) {
				if (i + 3 <= (int) s.length() - 1) {
					if (check(s.substring(i, i + 4))) {
						cnt++;
					}
				}
			}
			if (cnt > 0) {
				System.out.println("lovely " + cnt);
			} else {
				System.out.println("normal");
			}
			tt--;
		}
	}
}
