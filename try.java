public class Box<T> {
    private T value;
    
    public Box(T value) {
        this.value = value;
    }
    
    public T getValue() {
        return value;
    }

    public static void main(String[] args) {
        Box<Integer> box = new Box<>(5);
        System.out.println(box.getValue()); // Outputs 5
    }
}
