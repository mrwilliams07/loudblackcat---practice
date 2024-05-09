# Find max number without using max()


# creates a list to be used
find_max = [17, 42, 5, 31, 8, 19] 

# sort the list from lowest to highest
find_max.sort()

# create a new variable to store the value of the max number, then target the last number in the sorted list using [-1] 
max_number = find_max[-1]

print(find_max)
print(max_number)
