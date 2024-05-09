# Write a Python function called sum_even_numbers that takes a list of integers as input and returns the sum of all the even numbers in the list.


sum_of_even_numbers = ([1, 2, 3, 4, 5, 6]) # Step 1 - define list
sum_even = 0 # Step 4 - define a variable that will be used to store teh value of the sum of the even numbers and set it to 0

for num in sum_of_even_numbers: # Step 2 - create a for loop that defines temp variable to identify individual numbers within the list
  if num % 2 == 0: # Step 3 - Since we are only looking for even numbers, we make sure the remainder of the number divided by 2 = 0
      sum_even += num # Step 5 - we take the variable and we += to show that we are adding the numbers together
print(sum_even) # Step 6 - print the new variable to show the sum of the even numbers
