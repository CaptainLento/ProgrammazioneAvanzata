
import java.util.ArrayList;
import java.util.List;

public class Panino extends Prodotto{
	
	public final String id;
	private static long idCounter = 0;
	public List<Ingrediente> ingredienti = new ArrayList<Ingrediente>();

	public Panino(Ingrediente... ings) {
		id = createID();
		this.tipologia = type.CIBO;
		ingredienti.add(new Ingrediente("Pane", 0.5));
		for(Ingrediente ing : ings) {
			if(ing != null) ingredienti.add(ing);
		}
		costo = getCosto();
	}
	
	public static synchronized String createID()
	{
	    return String.valueOf(idCounter++);
	} 
	
	
	boolean equals(Panino p){
		return p.ingredienti.equals(p.ingredienti);
	}

	@Override
	public double getCosto() {
		double sum = 0;
		for(Ingrediente ing : ingredienti) {
			sum = sum + (double) ing.costo;
		}
		return sum;
	}
	
	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}

	@Override
	public String toString() {
		return "{ n."+id +" --> " + costo + " $ }";
	}



}