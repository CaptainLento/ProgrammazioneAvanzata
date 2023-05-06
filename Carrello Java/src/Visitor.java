
public interface Visitor<T> {
	
	public T visit(Prodotto prod);
	
	public T visit(Panino prod);
}
