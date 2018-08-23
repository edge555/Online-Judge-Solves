
import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        BigInteger a;
        int first = 1;
        while (in.hasNext()) {
            if (first == 1) {
                first = 0;
            } else {
                System.out.println();
            }
            a = in.nextBigInteger();
            int f = 0, l = 0;
            if ((a.mod(BigInteger.valueOf(4)).compareTo(BigInteger.ZERO) == 0
                    && a.mod(BigInteger.valueOf(100)).compareTo(BigInteger.ZERO) != 0)
                    || a.mod(BigInteger.valueOf(400)).compareTo(BigInteger.ZERO) == 0) {
                System.out.println("This is leap year.");
                f = 1;
                l = 1;
            }

            if (a.mod(BigInteger.valueOf(15)).compareTo(BigInteger.ZERO) == 0) {
                System.out.println("This is huluculu festival year.");
                f = 1;
            }
            if (a.mod(BigInteger.valueOf(55)).compareTo(BigInteger.ZERO) == 0 && l == 1) {
                System.out.println("This is bulukulu festival year.");
                f = 1;
            }
            if (f == 0) {
                System.out.println("This is an ordinary year.");
            }
        }
    }
}
