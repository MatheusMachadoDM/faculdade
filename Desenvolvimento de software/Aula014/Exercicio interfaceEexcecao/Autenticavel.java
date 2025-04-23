public interface Autenticavel {

    void autenticar(String usuario, String senha) throws TentativaExcedidasException;
}
