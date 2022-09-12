class Box {
    double width,height,depth;
    double volume(double width,double height,double depth) {
          return width*height*depth;
    }
    
    public static void main(String args[]) {
        Box obj1 = new Box();
        double vol = obj1.volume(2,8,9.2);
        System.out.println("The volume is "+vol);

    }
}