#include "Arduino_JSON.h"

JSON::JSON(char input[256], int strSize) {
  for(int i=0; i<strSize; i++)
    string[i] = input[i];
  stringSize = strSize;
}

int JSON::parseInt(char* checkObj) {
  int iterPos = 0;
  char* valName;
  int valPos = 0;
  int itemValue = 0;
  while(iterPos<stringSize) {
    if(string[iterPos] == '\"'){
      while(string[++iterPos] != '\"'){
        valName[valPos++] = string[iterPos];
      }
      if(valName = checkObj){
        iterPos++;
        while(string[iterPos] == ' '){
          iterPos++;
        }
        if(string[iterPos] == ':'){
          iterPos++;
          while(string[iterPos] == ' '){
            iterPos++;
          }
          while(string[iterPos] != ',' && string[iterPos] != '}' && string[iterPos] != ' '){
            itemValue = itemValue*10+(string[iterPos++]-'0');
          }
        }
      }
    }
    iterPos++;
  }
  return itemValue;
}