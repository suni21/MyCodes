package Lab6;

class Box 
{
    double length;
    double height;
    double width;

    Box(double l, double h, double w)
     {
      length=l;
      height = h;
      width = w;
    }

    double volume() 
    {
        double volume=length * height * width;
        return volume;
    } 
}
  class BoxDemo 
  {
    public static void main(String args[]) 
    {
        double vol;
      Box mybox1 = new Box(10, 20, 15);
      Box mybox2 = new Box(3, 6, 9);
     
      vol = mybox1.volume();
      System.out.println("Volume = " + vol);

      vol = mybox2.volume();
      System.out.println("Volume = " + vol);
    }
  }


