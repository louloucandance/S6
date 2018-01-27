def diviseur_propre(nombre):
    premiers_de_nombre=[]
    a=int(nombre/2)
    for i in range(1,a+1):
        if(nombre%i==0):
            premiers_de_nombre.append(i)
    return premiers_de_nombre
def premier(nombre):
    li=diviseur_propre(nombre)
    return(len(li)==1)
def parfait(nombre):
    li=diviseur_propre(nombre)
    return(sum(li)==nombre)
def chanceux(nombre):
    for i in range(0, nombre-2):
        n=nombre+i**2+i
        if(premier(n)==False):
            return False
    return True
def amis(limite):
  for a in range(2, limite):
    b=sum(diviseur_propre(a))
    if(a==sum(diviseur_propre(b)) and a<b):
      print(str(a) +" est ami de "+str(b))
def tous(predicat, limite):
    selection=[]
    for i in range(0, limite):
        if(predicat(i)==True):
            selection.append(i)
    return selection

def premiers(limite):
    nb_premiers=[]
    for i in range(0,limite):
        if(premier(i)):
            nb_premiers.append(i)
    return nb_premiers

def parfaits(limite):
    nb_parfaits=[]
    for i in range(0,limite):
        if(parfait(i)):
            nb_parfaits.append(i)
    return nb_parfaits

def tous_chanceux(limite):
    nb_chanceux=[]
    for i in range(0,limite):
        if(chanceux(i)):
            nb_chanceux.append(i)
    return nb_chanceux

def erathostene(limite):
    liste_premier=[j for j in range(2, limite)]
    for i in liste_premier:
        for n in liste_premier:
            if (n%i == 0 and i != n):
                liste_premier.remove(n)
    return liste_premier


print(erathostene(25))
