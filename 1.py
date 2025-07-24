# name = " Ayush"
# age = int(input("Enter your age:-"))
# print(age)

# name = str(input("Enter your name:-"))
# age = int(input("Enter your age:-"))

# currYear = 2025
# turn_100 = 2025 + (100 - age)

# print("The year you will turn 100 is", turn_100)

# <----------------------Conditionals and Loops---------------------->


# age = int(input("Enter your age:-"))

# if age >=18:
#     print("ok")
# elif age ==17:
#     print("wait 1 yr")
# else:
#     print("not ok")

# n=2
# i=1
# while(i<=10):
#     print(n*i)
#     i+=1


# for i in range(6):
#     print(i)   

# for char in ("Piyush"):
#     print(char)      

# for i in range(6):
#     if i == 4:
#         # break
#         continue
#     print(i)

# for i in range(2, 11, 2):
#     print(i)

# num = int(input("Enter your num:-"))

# for i in range(1, num+1):
#     if i % 2 == 0:
#         print(f"{i} is even")
#     else:
#         print(f"{i} is odd")

# <----------------------Functions in Python------------------------>

# def greet(name):
#     print(f"hello, {name}")

# greet("piyush")

# def add(a,b):
#     return a+b
# print(add(2,4))

# def greet(name = "Guest"):
#     print("Hello", name)
# greet()
# greet("Piyush")

# def sum_all(*numbers):
#     return sum(numbers)
# print(sum_all(1,2,3,4))

# def print_details(**info):
#     for key, value in info.items():
#         print(key, ":", value)
        
# print_details(name="piyush", age = 20)

# x = 10  # global

# def change_x():
#     x = 5  # local
#     print("Inside function:", x)

# change_x()
# print("Outside function:", x)

def is_primme(num):
    if(num == 1):
        return False
    if(num == 2):
        return True
    if(num % 2 == 0):
        return False

    for i in range(3,num):
        if(num % i == 0):
            return False
    return True

print(is_primme(2))
print(is_primme(232))
print(is_primme(17))