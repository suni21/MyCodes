package Lab9;
   
class NegativeNumberException extends Exception {
	public NegativeNumberException(String str) 
    {
		System.out.println(str);
	}
}
class q4ProcessInput 
{
	public static void main(String args[]) {

		int a = -3;
		try {
			if (a < 0 ) 
            {
				throw new NegativeNumberException(a + " Negative number");
			} else {
				System.out.println("Doubled Number= " + (2 * a));
			}


		} catch (Exception e) {
			System.out.println("\nCaught Exception Negative Number");
		}
	}
}

