import java.util.*;
 
public final class A_Watermelon implements Runnable {
// Generated automatically, only solve method is written
 
//  ------- SCANNER ------------------

    private Scanner in;

    
// ------- SETTING I/O ---------------------
    @Override
    public void run() {
        in = new Scanner(System.in);
        solve();
    }
// ------ SOLUTION -------------------

    private void solve() {
        int w = in.nextInt();
        if(w!= 2 && w %2 == 0){
            System.out.println("YES");            
            return;
        }
        System.out.println("NO");
    }
    
// -------- RUN  ---------------------
    public static void main(String args[] ) {
        new A_Watermelon().run();
   }
}