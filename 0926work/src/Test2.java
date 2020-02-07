public class Test2 {
    public static void main(String[] args){
        Person person = new Person("小北","女",18);
        person.show();
        Person person2 = new Person("小花","女",12);
        person2.show();
        Person person3 = new Person("小祖","男",10);
        person3.show();
        person.eat();
        person2.sleep();
        person3.play();
    }
}
