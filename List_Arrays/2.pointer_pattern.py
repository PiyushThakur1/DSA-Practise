#  resersing an array

# def reverse_array(arr):
#     left,right = 0, len(arr) - 1
#     while left < right:
#         arr[left], arr[right] = arr[right], arr[left]
#         left+=1
#         right-=1

# a = [1,2,3,4,5]
# reverse_array(a)
# print(a)

#  palindrome check

# def palindrome(word):
#     word = word.lower()
#     left, right = 0, len(word) - 1
#     while left < right:
#         if word[left] != word[right]:
#            return False
#         left += 1
#         right -= 1
#     return True

# print(palindrome("Straight"))
# print(palindrome("MAdam"))

#  Given a sorted list of numbers, find if any two numbers add up to a target.

# def has_pair_with_sum(arr, target):
#     left, right = 0, len(arr) - 1
#     while left < right:
#         cur_sum = arr[left] + arr[right]
#         if cur_sum == target:
#             return True
#         elif cur_sum < target:
#             left+=1
#         else:
#             right-=1
#     return False

# print(has_pair_with_sum([1,2,3,4,5,6,7,8,9],11))

# removing duplicates 
def removing_duplicates(arr):
    left, right = 0, 1
    while right < len(arr):
        if arr[left] == arr[right]:
            right += 1
        else:
            left+=1
            arr[left] = arr[right]
            right+=1
    
    return arr[:left+1]        
     
print(removing_duplicates([1,2,2,3,4,4,5]))
            
