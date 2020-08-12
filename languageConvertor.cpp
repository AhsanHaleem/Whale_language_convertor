// Program to converted text to the whale language, the result is sung slowly, as is custom in the ocean.
// Write a whale.cpp program that accomplishes this translation using loops and vectors.
// It takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".

#include <iostream>
#include <vector>
#include <string>

int main() {
  std::cout << "\nWhale, whale, whale\n";
  std::cout << "What have we got here?\n";

  std::string input = "hi, human";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result; 

  // Nested for loops to go through the input and vowels vector
  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
        result.push_back(input[i]);
        if (input[i] == 'e' || input[i] == 'u') {
          result.push_back(input[i]);
        }
      }
    }
  }

  // Check the result
  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i];
  }
  std::cout << "\n\n";
   
  return 0;
}