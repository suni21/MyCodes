package Lab9;

class q1Illustration {
	public static void main(String args[]) {
		try {
			int arr[] = new int[5];
			arr[10] = 10;
		} catch (Exception e) {
			System.out.println("Exception Caught ArrayIndexOutOfBoundsException");
		} finally {
			System.out.println("Finally Block Executing");
		}
	}
}
