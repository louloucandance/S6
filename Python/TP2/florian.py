class ListePriorite:

    def __init__(self):
        self.__liste = []
        self.__prio_min = None
        self.__prio_max = None

    @property
    def empty(self):
        return True if len(self.__liste) == 0 else False

    @property
    def prio_min(self):
        return self.__prio_min


    @property
    def prio_min(self):
        self.__prio_min = self.__liste[0][0]


    def set_prio_max(self):
        self.__prio_max = self.__liste[-1][0]


    def set_prio_max(self):
        return self.__prio_max

    def add(self, prio, obj):
        self.__liste.append((prio,obj))
        self.__liste.sort()
        self.set_prio_min()
        self.set_prio_max()

    def contains(self,obj):
        return True if obj in [x[1] for x in self.__liste] else False

    def priorities_of(self,obj):
        return [x[0] for x in self.__liste if x[1] == obj]

    def pop(self):
        self.__liste.pop()
        self.set_prio_min()
        self.set_prio_max()

    def __str__(self):
        return str(self.__liste)

    def items(self):
        return [x for x in self.__liste]

    def vals(self):
        return [x[1] for x in self.__liste]
