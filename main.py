class Percentage:
    def __init__(self, sub1, sub2, sub3, sub4, sub5):
        self.sub1 = sub1
        self.sub2 = sub2
        self.sub3 = sub3
        self.sub4 = sub4
        self.sub5 = sub5

    def total(self):
        return self.sub1 + self.sub2 + self.sub3 + self.sub4 + self.sub5

    def percentage(self):
        total = self.total()
        return (total / 500) * 100
    
    
    def display(self):
        print(f"Total Marks: {self.total()}")
        print(f"Percentage: {self.percentage()}%")

instance1 = Percentage (90, 78, 60,40, 98)
instance1.display()