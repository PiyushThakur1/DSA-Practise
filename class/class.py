class student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks
    def is_passed(self):
        if self.marks >= 40:
            return True
        else:
            return False

student1 = student("Raju", 56)
student2 = student("tom", 16)

print(student1.is_passed())
print(student2.is_passed())


