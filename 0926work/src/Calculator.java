public class Calculator {
    private int num1;
    private int num2;

    public int Add(int num1, int num2){
        this.num1 = num1;
        this.num2 = num2;
        return this.num1 + this.num2;
    }
    public int Sub(int num1,int num2){
        this.num1 = num1;
        this.num2 = num2;
        return this.num1 - this.num2;
    }
    public int Mol(int num1,int num2){
        this.num1 = num1;
        this.num2 = num2;
        return this.num1 * this.num2;
    }
    public int Div(int num1,int num2){
        this.num1 = num1;
        this.num2 = num2;
        return this.num1 / this.num2;
    }
}

