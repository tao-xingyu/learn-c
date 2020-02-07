import java.util.Arrays;

public class SeqList {
    private int []data;
    private int size;
    private final int CAPACITY = 10;

    public SeqList(){
        this.data = new int [CAPACITY];
        this.size = 0;
    }
 // 打印顺序表
    public void display() {
        for (int i = 0; i < this.size; i++) {
            System.out.println(this.data[i]+" ");
        }
        System.out.println();
     }
     private boolean isFull(){
        return this.size == this.data.length;
     }
//     // 在 pos 位置新增元素
    public void add(int pos, int elem) {
        if(pos < 0 || pos > this.size){
            return;
        }
        if(isFull()){
            this.data = Arrays.copyOf(this.data,this.data.length*2);
        }
        if(pos == size){
            this.data[pos] = elem;
            return;
        }
        for(int i = this.size - 1;i >= pos;i--){
            this.data[i+1] = this.data[i];
        }
        this.data[pos] = elem;
        this.size++;
        return;
    }
//     // 判定是否包含某个元素
    public boolean contains(int toFind) {
        for (int i = 0; i < this.size; i++) {
            if(this.data[i] == toFind){
                return true;
            }
        }
        return false;
    }
//     // 查找某个元素对应的位置
    public int search(int toFind) {
        for(int i = 0;i < this.size;i++){
            if(this.data[i] == toFind){
                return i;
            }
        }
        return -1;
    }
//     // 获取 pos 位置的元素
    public int getPos(int pos) {
        if(pos < 0||pos > this.size){
            return -1;
        }
        return this.data[pos];
    }
//     // 给 pos 位置的元素设为 value
     public void setPos(int pos, int value) {
        if(pos < 0 || pos > this.size){
            return;
        }
        for(int i = this.size-1;i >= pos;i--){
            value = this.data[pos];
        }
    }
//     //删除第一次出现的关键字key
    public void remove(int toRemove) {
        int pos = search(toRemove);
        if(pos == -1){
            return;
        }
        if(pos == this.size-1){
            this.size--;
            return;
        }
        for (int i = pos;i < this.size-1;i++){
            this.data[i] = this.data[i + 1];
        }
        this.size--;
        return;
    }
//     // 获取顺序表长度
public int size() { return this.size; }
//     // 清空顺序表
 public void clear() { this.size =0; }
}
