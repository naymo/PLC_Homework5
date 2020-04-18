
public class MainClass {
	
	public static void main(String[] args) {
		
		POJO1 pojo1 = new POJO1("name1");
		POJO1 pojo2 = new POJO1("name2");
		
		POJO2 pojo3 = new POJO2("name3");
		POJO2 pojo4 = new POJO2("name4");
		
		
		System.out.println("pojo1 name = " + pojo1.name);
		System.out.println("pojo2 name = " + pojo2.name);
		System.out.println("pojo3 name = " + pojo3.name);
		System.out.println("pojo4 name = " + pojo4.name);

		
		//set pojo1 = to pojo2
		System.out.println("pojo1 name = " + pojo1.name);
		System.out.println("pojo2 name = " + pojo2.name);
		System.out.println("Here we set pojo1 equal to pojo2, which is the same object");
		pojo1 = pojo2;
		
		//set pojo3 = to pojo4
		System.out.println("pojo1 name = " + pojo1.name);
		System.out.println("pojo2 name = " + pojo2.name);
		System.out.println("Here we set pojo1 equal to pojo2, which is the same object");
		pojo1 = pojo2;
		
		//set pojo1 = to pojo3
		System.out.println("Set pojo1 = pojo3");
		//you can see error below
		try {
			pojo1 = pojo3;
		} catch(Exception e) {
			System.out.println(e);
		}
		
	}

}
