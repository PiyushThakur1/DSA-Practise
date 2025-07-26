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

# def is_primme(num):
#     if(num == 1):
#         return False
#     if(num == 2):
#         return True
#     if(num % 2 == 0):
#         return False

#     for i in range(3,num):
#         if(num % i == 0):
#             return False
#     return True

# print(is_primme(2))
# print(is_primme(232))
# print(is_primme(17))

# <----------------------Basic Data Structures in Python------------------------>

# Lists- is a mutable,ordered collection.

# fruits = ["apple", "banana", "cherry"]
# print(fruits[0])
# fruits.append("mango")
# fruits.remove("banana")
# print(len(fruits))

# # List Methods

# fruits.insert(1,"orange") #insert at index 1
# fruits.pop() # removes last element
# fruits.sort() #sort the list
# fruits.reverse()

# #  list slicing
# nums = [0,1,2,3,4,5,6]
# print(nums[2:4]) # [1,2,3]
# print(nums[:3]) #[ 0,1,2]
# print(nums[::-1]) # reversed

# # Tuples --- immutable (cant change values after creation).

# coordinates = (10,20)
# print(coordinates[0])

#  Sets --- unordered and contains only unique elements

# nums = {1,2,3,4,5,1,2}
# print(nums)

# nums.add(20)
# nums.add(6)
# nums.remove(3)
# print(3 in nums)

#  Set operations

# a = {1, 2, 3}
# b = {3, 4, 5}
# print(a | b)   # Union: {1, 2, 3, 4, 5}
# print(a & b)   # Intersection: {3}
# print(a - b)   # Difference: {1, 2}

# Dictionaries ----> holds key value pairs

# person = {"name": "Piyush", "age": 20}
# print(person["name"]) # Piyush

# person["city"] = "Kishtwar" # Add new Key
# del person["age"] # delete key

# # Dictionary Method

# print(person.get("name"))        # Piyush
# print(person.keys())             # dict_keys(['name', 'city'])
# print(person.values())           # dict_values(['Piyush', 'Delhi'])
# print(person.items())            # dict_items([('name', 'Piyush'), ('city', 'Delhi')])

# Task 4

# nums_list = list(map(int, input("Enter Numbers: ").split()))
# print(nums_list)
# nums_set = set(nums_list)
# print(nums_set)

# nums_dictionary = {num : num ** 2 for num in nums_set}
# print(nums_dictionary)

# <----------------------String Operations in Python------------------------>

# str = str(input("Enter String: "))
# print(str[::-1])
# str_list = list(str)
# print(str_list)
# str_dictionary = {str: str_list.count(str) for str in str_list}
# print(str_dictionary)
