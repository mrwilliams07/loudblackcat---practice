def reverse_string(input_string):
    empty_string = "" # Step 1: Initialize an empty string

# Step 2: Iterate through the characters of the input string in reverse order
    for letter in input_string[::-1]: # [::-1] is a Python slicing notation used to reverse a sequence (string, list, tuple, etc.). Let's break it down:
            # Step 3: Append each character to the reversed string
            empty_string += letter
    
    # Step 4: Return the reversed string
    return empty_string

result = reverse_string("hello") 
print(result) # this will print out "olleh"
