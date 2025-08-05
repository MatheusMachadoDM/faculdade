public class ExemploFor {
    public static void main(String[] args) {
        for(int i = 0; i < 10; i++){
            System.out.println("Número: " + (i + 1));
        }
        
        int[] numeros = {1, 2 , 3 , 4, 5};
        
        //for-each
        for(int num : numeros){
            System.out.print(num + " ");
        }
    }
}
