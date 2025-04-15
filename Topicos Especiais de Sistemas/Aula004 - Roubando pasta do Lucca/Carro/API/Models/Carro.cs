namespace API.Models;

public class Carro{
    public int Id {get; set;}
    public string Name {get; set;}
    public DateTime CriadoEm {get; set;} //= DateTime.Now; pode ser assim ao invés do construtor

    public Carro(){
        this.CriadoEm = DateTime.Now;
    }
}