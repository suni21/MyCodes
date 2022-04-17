package Lab5;

public class q4ObCreated 
{
        static int count=0;
        q4ObCreated()
        {
            count++;
        }
        public static void main(String[] args) 
        {
            q4ObCreated obj1 = new q4ObCreated();
            q4ObCreated obj2 = new q4ObCreated();
          
            System.out.println("Number of objects created:"+count);
        
        }
}
    
