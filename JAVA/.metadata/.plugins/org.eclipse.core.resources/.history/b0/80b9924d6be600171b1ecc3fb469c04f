package Vente;

import java.util.HashMap;

import Bien.Bien;
import Client.Client;
import Client.Voeux;
import Client.VoeuxAppart;
import Client.VoeuxMaison;
import Client.VoeuxTerrain;
import java.lang.Iterable;


public class Agence implements Iterable{
	HashMap<Integer, Bien> catalogue=new HashMap<>();
	HashMap<Integer, Client> repertoire=new HashMap<>();
	private String nom;
	
	public Agence(String nom) {
		this.nom=nom;
	}
	
	public void choisirBien(Voeux souhait) {
		if(souhait instanceof VoeuxMaison) {
			for(Bien b : this.catalogue) {
				if (b.type == Maison && b.surface == souhait.surface && b.nbPieces == souhait.surface && b.localisation==souhait.localisation && b.prix==voeux.prix) {
					System.out.println("La maison "+b.numInterne+" correspond à votre recherche");
				}
			}
		}
		
		if(souhait instanceof VoeuxAppart) {
			for(Bien b : this.catalogue) {
				if (b.type == Appartement && b.nbPieces == souhait.surface && b.localisation==souhait.localisation && b.prix==voeux.prix) {
					System.out.println("L'appartement "+b.numInterne+" correspond à votre recherche");
				}
			}
		}
		
		if(souhait instanceof VoeuxTerrain) {
			for(Bien b : catalogue) {
				if (b.type == Terrain && b.surface == souhait.surface  && b.localisation==souhait.localisation && b.prix==voeux.prix) {
					System.out.println("La terrain "+b.numInterne+" correspond à votre recherche");
				}
			}
		}		
	}
	
	
	

}
