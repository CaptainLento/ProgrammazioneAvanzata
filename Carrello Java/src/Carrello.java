public class Carrello implements Visitor<String>{
	
	public String nomeBar;
	
	private Carrello() {
		nomeBar = "Ale";
	}
	
	public static Carrello menucompleto = null;
	
	public static Carrello menucompleto() {
		if (menucompleto == null) menucompleto = new Carrello();
		return menucompleto;
	}

	public String visit(Prodotto prod) {
		return prod.toString();
	}

	public String visit(Panino prod) {
		String nome = "{ ";
		for(int k=0; k<prod.ingredienti.size(); k++) {
			nome = nome +"[ "+ prod.ingredienti.get(k).toString() + " ]";
		}
		nome = nome +"}";
		return prod.toString() + " " + nome;
	}

}
