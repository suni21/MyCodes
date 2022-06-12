package General;

public class employee {
    protected int empID;
    private String empName;
    public double basic;
    
    public employee(int empID, String empName, double basic) {
        this.empID = empID;
        this.empName = empName;
        this.basic = basic;
    }
    
    public double earnings() {
        double total = 0;
        double DA = 0.8 * basic;
        double HRA = 0.15 * basic; 
        total = HRA + DA + basic;
        
        return total;
    }

    public void name() {
        System.out.println("employee's name: " + empName);
    }

}