
public abstract class Prodotto implements Visitable {
	
	public type tipologia;
	public double costo;

	
	public String getTipo() {
		return tipologia.toString();
	}
	
	public double getCosto() {
		return costo;
	};
	
	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}

	public abstract String toString();


}