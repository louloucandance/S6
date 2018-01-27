package Bien;

public class Bien {
	public String adresse;
	public PointsCardinaux orientation;
	public int prix;
	public String dateDispo;
	public String dateVente;
	public int numInterne;
	public TypeBien type;
	
	public enum MoyenChauffage {
		ELECTRIQUE,	GAZ, BOIS, FIOUL, PLANCHER_CHAUFFANT;	
	}
	public enum TypeBien{
		Appartement, Maison, Terrain, Generique;
	}
	public enum PointsCardinaux{
		  SUD, NORD, EST, OUEST;	
		}
	//Factory maison
	public static Maison creerMaison(String adr, PointsCardinaux orient, int prix, String dispo, String vente, int num, int etage, int pieces, MoyenChauffage chauff) {
		return new Maison(adr, orient, prix, dispo, vente, num, etage, pieces, chauff);
	}
	
	//Factory appartement
	public Appartement creerAppartement(String adr, PointsCardinaux orient, int prix, String dispo, String vente, int num, int etage, int pieces, int charges){
		return new Appartement(adr, orient, prix, dispo, vente, num, etage, pieces, charges);
	}
	
	//Factory terrain
	public Terrain creerTerrain(String adr, PointsCardinaux orient, int prix, String dispo, String vente, int num, int surface, int longueur) {
		return new Terrain(adr, orient, prix, dispo,  vente, num, surface, longueur);
	}
	
	
	//GETTERS ET SETTERS

	public String getAdresse() {
		return adresse;
	}

	public void setAdresse(String adresse) {
		this.adresse = adresse;
	}

	public PointsCardinaux getOrientation() {
		return orientation;
	}

	public void setOrientation(PointsCardinaux orientation) {
		this.orientation = orientation;
	}

	public int getPrix() {
		return prix;
	}

	public void setPrix(int prix) {
		this.prix = prix;
	}

	public String getDateDispo() {
		return dateDispo;
	}

	public void setDateDispo(String dateDispo) {
		this.dateDispo = dateDispo;
	}

	public String getDateVente() {
		return dateVente;
	}

	public void setDateVente(String dateVente) {
		this.dateVente = dateVente;
	}

	public int getNumInterne() {
		return numInterne;
	}

	public void setNumInterne(int numInterne) {
		this.numInterne = numInterne;
	}
	@Override
	public String toString() {
		return("Bien numéro "+this.getNumInterne()+
				"\nprix : " + this.getPrix()+
				"\ndate de disponnibilité : "+this.getDateDispo());
	}


}
