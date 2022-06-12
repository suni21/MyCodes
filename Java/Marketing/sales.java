package Marketing;
import General.*;


public class sales extends employee{
    sales(int empID, String empName, double basic) {
        super(empID, empName, basic);
    }

    public double travel = 0.05 * super.earnings();
    public double total = travel + super.earnings();

    public void show() {
        System.out.println("The total earnings of sales employee is as follows :-");
        System.out.println("ID: " + empID);
        System.out.println("Total income: " + total);
    }


}