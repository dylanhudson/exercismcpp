#include <iostream>
#include <string>
#include "bob.h"

std::string bob::hey(std::string input)
{
//check for empty string
if (input.length() > 0 ) {

  //if the letters in the input string are all caps
  bool shout = bob::detectShouting(input);
  if (shout) {return "Whoa, chill out!";}


  //if input string ends with a question mark
  int index = input.length() - 1;
  //ignore trailing whitespace
  while (input[index] == 32) { index--; }
  if (input[index] == 63) {return "Sure.";}

  bool silence = bob::detectSilence(input);
  if (silence) {return "Fine. Be that way!";}
  return "Whatever.";

}
else {return "Fine. Be that way!";}
}



bool bob::detectShouting(std::string input)
{
  std::string::iterator iter;
  int index = 0;
  bool has_letters = false;

  for (iter = input.begin(); iter < input.end(); iter++, index++) {
    if ( (input[index] < 122) && (input[index] > 64) ){
      has_letters = true;
      if ( (input[index] < 122) && (input[index] > 97) ){
        return false;
      }
    }
  }
  if (has_letters == true) {return true;}
  else {return false;}
}


bool bob::detectSilence(std::string input)
{
  std::string::iterator iter;
  int index = 0;

  for (iter = input.begin(); iter < input.end(); iter++, index++){
    if (input[index] != 32) {return false;}
  }
  return true;
}
