public class Ingrediente implements Comparable<Ingrediente>{
	public String nome;
	public double costo;
	
	public Ingrediente(String a, double b){
		this.nome = a;
		this.costo = b;
	}
	
	public String toString() {
		String s = nome + ":" + costo;
		return s;
	}
	
	public int compareTo(Ingrediente c) {
		return nome.compareTo(c.nome);
	}
}