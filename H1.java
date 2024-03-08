public class H1 {
    public static void main(String[] argumentos) {
        if (argumentos.length < 1) {
           System.out.println("Error: No hay argumentos");
            
        }

        int i = argumentos.length - 1;
        for (; i >= 0; i--) {
            System.out.println(argumentos[i]);
        }
    }
}