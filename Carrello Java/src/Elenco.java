import java.util.ArrayList;
import java.util.List;

public class Elenco<T extends Comparable<T>>{
	List<T> array = new ArrayList<T>();
	
	void insert(T obj){
		for(int k=0; k< array.size(); k++) {
			if((array.get(k)).compareTo(obj) == 0) {
				return;
			}
		}
		array.add(obj);
	}
	
	public void sort() {
		array.sort(null);
	}
	
	public T find(T t) {
		for(int k=0; k< array.size(); k++) {
			if((array.get(k)).compareTo(t) == 0) {
				return array.get(k);
			}
		}
		return null;
	}
	
	public String toString() {
		String s = "";
		for(int k=0; k< array.size(); k++) {
			s = s  +  array.get(k).toString() + " ; ";
		}
		return s;
	}
	
}