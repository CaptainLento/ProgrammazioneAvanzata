import java.util.ArrayList;
import java.util.List;

public class Negozio {
	
	public static void main(String[] args) {
		
		
		Elenco<Ingrediente> ingredienti = new Elenco<Ingrediente>();
		ingredienti.insert(new Ingrediente("Prosciutto Cotto", 2.00));
		ingredienti.insert(new Ingrediente("Cotoletta", 2.50));
		ingredienti.insert(new Ingrediente("Pomodoro", 1.00));
		ingredienti.insert(new Ingrediente("Insalata", 0.30));
		ingredienti.insert(new Ingrediente("Formaggio", 1.50));
		ingredienti.insert(new Ingrediente("Salse", 0.15));
		
		System.out.println(ingredienti.toString() + "\n");
		ingredienti.sort();
		System.out.println(ingredienti.toString() + "\n");
		
		Panino cotto = new Panino(
				ingredienti.find(new Ingrediente("Prosciutto Cotto",0)),
				ingredienti.find(new Ingrediente("Pomodoro",0)),
				ingredienti.find(new Ingrediente("Cetriolo",0)),
				ingredienti.find(new Ingrediente("Insalata",0)));
		
		Panino cotoletta = new Panino(
				ingredienti.find(new Ingrediente("Cotoletta",0)),
				ingredienti.find(new Ingrediente("Salse",0)));
		
		Bibita birra = new Bibita();
				
		List<Prodotto> lista = new ArrayList<Prodotto>();
		lista.add(cotoletta);
		lista.add(cotto);
		lista.add(birra);
		
		/*
		 * VISITATORE
		 * */
		System.out.println("------------------------------------------------------------\n");
		
		vediMenu(lista);
		
	}
	
	public static void vediMenu( List<Prodotto> lista) {
		Carrello cart = Carrello.menucompleto();
		for(int k=0; k< lista.size(); k++) {
			System.out.print((lista.get(k)).accept(cart) + "\n");
		}	
	}

}