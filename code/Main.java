class Capgemini{
    private int a;
    public Capgemini(){
        a=10; 
   }
}

public class Main extends Capgemini
{
	public static void main(String[] args) {
		Main obj = new Main();
		System.out.println(obj.a);
	}
}
