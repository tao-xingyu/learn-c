public class People {
    String name;

    public  People(){
        System.out.println(1);
    }

    public  People(String name){
        System.out.println(2);
        this.name = name;
    }

    @Override
    public String toString() {
        return "People{" +
                "name='" + name + '\'' +
                '}';
    }
}
class Child extends People{
    People father;

    public Child(String name){
        System.out.println(3);
        this.name = name;
        father = new People(name + ":F");
    }
    public Child(){
        System.out.println(4);
    }
}
