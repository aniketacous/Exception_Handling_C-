#include<iostream>
#include<exceptions.h>

using namespace std;

const string Exception::toString(void) {
 
 	string 
   		msg;
   
   	if(source().length() > 0)
    	msg = source() + ": ";
   	else 
    	msg = "";
    	msg += "generic exception";
    
    return msg;
}
const string ContainerEmptyException::toString(void) {
	string
		msg;
		
		if (source().length() > 0)
		msg = source() + ": ";
		else 
		msg = "";
	    msg += "container empty";
	    
	    return msg;
}
const string ContainerFullException::toString(void) {
       string 
       	msg;
       	 if(source().length() > 0)
       	 msg = source() + ": ";
       	 else
       	 msg = "";
       	 msg += "container full exception";
       	 
       	 return msg;
} 	
const string KeyNotFoundException::toString(void) {
	string 
       	msg;
       	 if(source().length() > 0)
       	 msg = source() + ": ";
       	 else
       	 msg = "";
       	 msg += "Key Not Found " + privateKey;
       	 
       	 return msg;
}
const string InvalidIndexException::toString(void) {
	string 
       	msg;
       	 if(source().length() > 0)
       	 msg = source() + ": ";
       	 else
       	 msg = "";
       	 msg += "Invalid Index Exception " + std::to_string(privateIndex);
       	 
       	 return msg;
}


