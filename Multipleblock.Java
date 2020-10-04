import java.util.*; 
public class MyClass { 
	public static void main(String[] args) 
	{ 
		int a, b, div; 
		Scanner s = new Scanner(System.in); 

		try 
		{ 
			System.out.println("Enter 1st number: "); 
			a = s.nextInt(); 

		System.out.println("Enter 2nd number: "); 
			b = s.nextInt(); 

			div = a / b; 

			System.out.println("The answer is: " + div); 
		} 

		catch(ArithmeticException e) 
		{ 
			System.out.println("Arithmetic Exception! You're dividing by zero."); 
		} 

		catch(NumberFormatException e) 
		{ 
			System.out.println("You entered a non-numerical value."); 
		} 

		catch(Exception e) 

		{ 
			System.out.println(e); 
		} 
	} 
} 
