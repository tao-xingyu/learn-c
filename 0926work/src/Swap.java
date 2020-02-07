public class Swap {
       private int a;
       private int b;

    public Swap(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public void exchange() {
           int tmp = this.a;
           this.a = this.b;
           this.b = tmp;
           System.out.println("交换的值为:a = "+this.a+"b = "+this.b);
       }
}
