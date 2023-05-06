public class Bibita extends Prodotto {
	
	public Bibita() {
		this.tipologia = type.BEVANDA;
		this.costo = getCosto();
	}

	@Override
	public double getCosto() {
		return 4.00;
	}
	
	@Override
	public String toString() {
		return "{ Bibita --> " + costo + " $ }";
	}

}