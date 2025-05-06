#include <string>
#include <iostream>
#include <string>
int main()
{
std::string password;
std::cout << "Enter your password = ";
std::getline(std::cin, password);
    bool has_upper = false;
    bool has_lower = false;
    bool has_symbol = false;
    bool has_digit = false;
      for (size_t i = 0; i < password.length(); ++i) {
        char c = password[i]; 
        if (c >= 'A' && c <= 'Z') {
            has_upper = true; 
        }
        else if (c >= 'a' && c <= 'z') {
            has_lower = true; 
        }
        else if (c >= '0' && c <= '9') {
            has_digit = true; 
        }
        else if ( !( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == ' ' || c == '\t') ) {
            has_symbol = true;
        }
    }
bool valid = true;
if(password.length() !=8 ){
    std::cout << "The password must be 8 characters long" << std::endl;
    valid = false;
}
if(!has_upper){
    std::cout << "Password must have at least 1 upper case letter" << std::endl;
valid = false;
}
if(!has_lower){
std::cout << "Password must have at least 1 lower case ;etter " << std::endl;
valid = false;
}
if(!has_symbol){
    std::cout << "Password must have at least 1 symbol" << std::endl;
    valid=false;
}
if(!has_digit){
std::cout << "Password must contain at least 1 digit" << std::endl;
valid= false;
}
if(valid){
    std::cout << "The password is valid" << std::endl;
}
return 0;
}
