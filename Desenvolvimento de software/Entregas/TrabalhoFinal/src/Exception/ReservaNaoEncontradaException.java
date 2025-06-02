package Exception;

// Exceção para caso uma reserva informada não seja encontrada
public class ReservaNaoEncontradaException  extends Exception {
    public ReservaNaoEncontradaException() {super("Reserva não Encontrada!");}
}