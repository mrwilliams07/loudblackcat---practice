def unique_elements(input_list):
    # Initialize an empty list to store unique elements
    unique_list = []
    # Initialize a set to keep track of elements that have been encountered
    seen = set()
  
    # Iterate through each element in the input list
    for num in input_list:
        # If the element has not been seen before
        if num not in seen:
          # Add it to the unique_list
          unique_list.append(num)
          # Update the set to mark the element as seen
          seen.add(num)
    # Return the list of unique elements
    return unique_list

result = unique_elements([1, 2, 3, 3, 4, 4, 5])
print(result)


