#include <iostream>
#include <string>
#include <regex>

int hasDigit(std::string to_check){
    if(to_check.find_first_of("0123456789") != std::string::npos)
        return 1;
    else
        return 0;
}

int hasUpper(std::string to_check){
    if(count_if(to_check.begin(), to_check.end(), &::isupper)){
        return 1;
    }
    else return 0;
}

int hasLower(std::string to_check){
    if(count_if(to_check.begin(), to_check.end(), &::islower)){
        return 1;
    }
    else return 0;
}

int hasRepeatedChar(std::string to_check){
    int repetition;
    int pair;
    repetition = 2;
    pair = 0;

    for(int i = 0; i<to_check.length()-2; i++){
        if(to_check[i] == to_check[i+1] and to_check[i] == to_check[i+2]){
            repetition++;
        }
        else{
            pair += repetition/3;
            repetition = 2;
        }
    }
    pair += repetition/3;
    return pair;
}


int pwStrengthChecker(std::string s){
    int missing_req;
    int result;
    missing_req = 0;
    result = 0;

    if(!hasDigit(s)){
        missing_req++;
    }
    if(!hasUpper(s)){
        missing_req++;
    }
    if(!hasLower(s)){
        missing_req++;
    }
    result = hasRepeatedChar(s);
    if(result > missing_req){
        return result;
    }
    else{
        return missing_req;
    }

}

void readConsole(std::string &to_read){
    int len;

    try{
        std::cout << "Enter password: ";
        std::getline(std::cin, to_read);
        std::cout << std::endl;
        if(to_read.length() > 20 || to_read.length() < 6){
            len = to_read.length();
            throw len;
        }
    }
    catch (int len){
        std::cout << "ERROR: Invalid PW length! " << len << std::endl;
        std::cout << "Length must be in between 6 ans 20 characters. " << std::endl;
        std::cout << "Try another password! \n" << std::endl;

        readConsole(to_read);
    }
}

void writeConsole(int r){
    if(r)
       std::cout<<"Unsafe password!\nRequired changes: " << r << std::endl;
    else std::cout<<"Safe password!\n";
}
