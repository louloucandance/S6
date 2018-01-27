package Vente;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map.Entry;

import Bien.Bien;
import Bien.Maison;
import Client.Client;
import Client.Voeux;
import Client.VoeuxAppart;
import Client.VoeuxMaison;
import Client.VoeuxTerrain;
import java.lang.Iterable;


public class Agence {
	HashMap<Integer, Bien> catalogue=new HashMap<>();
	HashMap<Integer, Client> repertoire=new HashMap<>();
	private String nom;
	
	public Agence(String nom) {
		this.nom=nom;
	}
	
	public void choisirBien(Voeux souhait) {
		if(souhait instanceof VoeuxMaison) {
			for(Entry<Integer, Bien> b : this.catalogue.entrySet()) {
				if(b instanceof Maison) {
					Maison maison = (Maison) b.getValue();
					if (maison.nbPieces == souhait.nbPieces && maison.prix==souhait.prix && maison.localisation==souhait.localisation && maison.surface == souhait.surface) {
						System.out.println("La maison "+ maison.numInterne+" correspond à votre recherche");
					}
			    }
			}
		}
		if(souhait instanceof VoeuxAppart) {
			for(Entry<Integer, Bien> b : this.catalogue.entrySet()) {
				if(b instanceof Appartement) {
					Appartement appart = (Appartement) b.getValue();
					if (appart.type == Bien.TypeBien.Appartement &&  appart.nbPieces == souhait.nbPieces &&  appart.localisation==souhait.localisation &&  appart.prix==souhait.prix) {
						System.out.println("L'appartement "+b.numInterne+" correspond à votre recherche");
					}
				}
			}
		}
		if(souhait instanceof VoeuxTerrain) {
			for(Entry<Integer, Bien> b : this.catalogue.entrySet()) {
				Terrain terrain = (Terrain) b.getValue();
				if ( terrain.type ==  Bien.TypeBien.Terrain &&  terrain.surface == souhait.surface  &&  b.getValue().localisation==souhait.localisation &&  terrain.prix==souhait.prix) {
					System.out.println("La terrain "+b.numInterne+" correspond à votre recherche");
				}
			}
		}		
	}
}
