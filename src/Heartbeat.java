
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int secs = 0;
		while (secs < 1000) {
			try {
				Thread.sleep(1000);
				System.out.println(secs + " sec have passed");
				secs += 1;
			} catch(InterruptedException e){
				e.printStackTrace();
			}
		}

	}

}
