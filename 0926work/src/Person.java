public class Person {
    private  String name;
    private  String sex;
    private int age;

    public Person(String name, String sex, int age) {
        this.name = name;
        this.sex = sex;
        this.age = age;
    }
    public void eat(){
        System.out.println(this.name+"正在吃饭");
    }
    public void sleep(){
        System.out.println(this.name+"正在睡觉");
    }
    public void play(){
        System.out.println(this.name+"正在玩游戏");
    }
    public void show(){
        System.out.println("name:"+name+"sex:"+sex+"age:"+age);
    }
}
