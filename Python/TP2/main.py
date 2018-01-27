import copy

class listePriorite:
  def __init__ (self):
    self.__liste=[]

  @property
  def empty(self):
    return(len(self.__liste)==0)

  @property
  def prio_min(self):
    if(self.empty==False):
      return self.__liste[0][0]
    return None

  @property
  def prio_max(self):
    if(self.empty==False):
      return self.__liste[-1][0]
    return None

  def add(self, priorite, nom):
    compteur=-1
    if self.empty:
      self.__liste.append((priorite, nom))
    else:
      if priorite > self.prio_max:
        self.__liste.append((priorite, nom))
      else:
        for i in self.__liste:
          compteur+=1
          if (priorite<i[0]):
            self.__liste.insert(compteur,(priorite, nom))
            break

  def contains(self, nom):
    return nom in [element[1] for element in self.__liste]
    
  def priorities_of(self, nom):
    return [x[0] for x in self.__liste if x[1] == nom]

  def __str__(self):
    return str(self.__liste)
    
  def pop(self):
    return self.__liste.pop()
    
    
  def items(self):
    return [x for x in self.__liste]
  
  def vals(self):
    value=None
    if(self.empty==False):
      value=[]
      compteur=0
      for i in self.__liste:
        value.append(i[1])
    return value
  
  @property
  def length(self):
    return len(self.__liste)

  def at(self, numeroTuple):
    return self.__liste[numeroTuple]
    
  def delete(self, numeroTuple):
    del self.__liste[numeroTuple]

daltons = listePriorite()
print(daltons.empty)  # True
print(f"priorité min = {daltons.prio_min}, priorité max={daltons.prio_max}")  # None, None

daltons.add(5, "Joe")
daltons.add(1, "Jack")
daltons.add(3, "Averell")
daltons.add(4, "William")
daltons.add(1, "Ma")
daltons.add(10, "Jack")

print(daltons)

print(daltons.contains("Lucky Luke"))  # False
print(daltons.contains("Averell"))  # True

print(daltons.priorities_of("Jack"))  # [1, 10]
daltons.pop()  # Supprime le dernier élément (10, "Jack")

print(daltons)  # [(1, 'Jack'), (1, 'Ma'), (3, 'Averell'),
#  (4, 'William'), (5, 'Joe')]

print(f"priorité min= {daltons.prio_min}, priorité max= {daltons.prio_max}")  # 1, 5

print("item : ")
for elt in daltons.items():
    print(elt, end=", ")  # ((1, 'Jack'), (1, 'Ma'), (3, 'Averell'),
    #  (4, 'William'), (5, 'Joe'),
print()

print("valeur :")
for val in daltons.vals():
    print(val, end=", ")  # Jack, Ma, Averell, William, Joe,
print()

print(daltons.length)  # 5

print(daltons.at(0))  # (1, "Jack")

val = daltons.pop()
print(daltons)  # [(1, 'Jack'), (1, 'Ma'), (3, 'Averell'), (4, 'William')]
print(val)  # (5, 'Joe')

print(f"priorité min = {daltons.prio_min}, priorité max = {daltons.prio_max}")  # 1, 4

outlaws = copy.deepcopy(daltons)
daltons.delete(0)
print(daltons)    # [(1, 'Ma'), (3, 'Averell'), (4, 'William')]
print(outlaws)    # [(1, 'Jack'), (1, 'Ma'), (3, 'Averell'), (4, 'William')]













