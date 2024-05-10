# Word Frequency

def word_frequency(input_string):
  # Split the input string into individual words
  words = input_string.split()

  # Initiliaze an empty dictionary to store word frequencies
  frequency = {}
 
  # Iterate through each word in the list of words
  for word in words:
    # Check if word is already in the dictionary
     if word in frequency:
        # IF the word is already in the dictionary, increment its frequency count
        frequency[word] += 1
     else:
        # If the word is not in the dictionary, add it with a frequency count of 1
        frequency[word] = 1
 
  return frequency




result = word_frequency("yes yes no no this this that that he haw he haw dick shit piss balls fuck fuck fuck")
print(result)
