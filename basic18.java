import java.util.Scanner;
public class basic18{
    public static void main(String[] args){
        Scanner Scan=new Scanner(System.in);
            int registrationcollection=Scan.nextInt();
            int sponsorshipamount=Scan.nextInt();
            int stallrent=Scan.nextInt();
            int stagecost=Scan.nextInt();
            int celebritycost=Scan.nextInt();
            int marketingcost=Scan.nextInt();
            int a=registrationcollection+sponsorshipamount+stallrent-stagecost-celebritycost-marketingcost;
            System.out.println("Remaining fund = "+a);
        }
    }
