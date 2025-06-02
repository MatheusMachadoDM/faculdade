package Exception;

// Exceção que será utilizada caso o quarto escolhido para a reserva não esteja disponível
public class QuartoIndisponivelException extends Exception{
     public QuartoIndisponivelException() {super("Quarto Indisponível!");}
}