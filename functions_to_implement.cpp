#include <iostream>
using namespace std;


int printhello(){
    std::cout<< "hello" << std::endl;
    return 0;
}

int printfive(){
    std::cout << "5" << std::endl;
    return 5;
}


int Sign(int num){

	if(num<0){
		return -1;
	}
	else{
		return 1;
	}

