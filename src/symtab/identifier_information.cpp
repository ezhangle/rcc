#include "identifier_information.h"

IdentifierInformation::IdentifierInformation(string id){
   _type = NULL;
   _id = id;
   _scopeLevel = 0;
}

string IdentifierInformation::identifier(){
   return _id;
}

void IdentifierInformation::identifier(string id){
   _id = id;
}


unsigned int IdentifierInformation::scopeLevel() const {
   return _scopeLevel;
}

void IdentifierInformation::scopeLevel(const unsigned int level) {
   _scopeLevel = level;
}

void IdentifierInformation::type(DataType *t){
   _type = t;
}
   
DataType *IdentifierInformation::type(){
   return _type;
}
   

