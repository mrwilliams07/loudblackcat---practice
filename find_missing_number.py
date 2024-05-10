"""
Calculate the sum of all numbers from 1 to n using the formula: ((n * (n + 1)) / 2)
Calculate the sum of the given list of numbers.
Subtract the sum of the given list from the total sum calculated in step 1.
The result will be the missing number.
"""

def find_missing_number(input_list):
    n = len(input_list) + 1 # Get the expeted length of the list (including the missing number)
    total_sum = n * (n + 1) // 2 # Calculate the sum of the given list of numbers

    list_sum = sum(input_list) # Calculate the sum of the given list of numbers

    missing_number = total_sum - list_sum # calculate the missing number

    return missing_number




result = find_missing_number([1, 2, 3, 5])
print(result)
