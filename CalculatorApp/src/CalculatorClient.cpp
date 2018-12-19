#include <iostream>
#include <string>
#include <unistd.h>
#include <CommonAPI/CommonAPI.hpp>
#include <v1_0/commonapi/CalculatorProxy.hpp>
  
using namespace v1_0::commonapi;
  
int main() {

    CommonAPI::Runtime::setProperty("LogContext", "CalculatorClient");
    CommonAPI::Runtime::setProperty("LibraryBase", "Calculator");
    std::shared_ptr < CommonAPI::Runtime > runtime = CommonAPI::Runtime::get();
    std::shared_ptr<CalculatorProxy<>> myProxy = runtime->buildProxy<CalculatorProxy>("local", "test");
  
    std::cout << "Checking availability!" << std::endl;
    while (!myProxy->isAvailable())
        usleep(10);
    std::cout << "Available..." << std::endl;
  
    CommonAPI::CallStatus callStatus;
    double result,dividend,divisor,quotient,op1,op2;
    int option;
    int64_t  remainder;
    bool flag=true;
    char tr;
    while(flag){
	    std::cout <<"Choose Operation"<<std::endl;
	    std::cout <<"1: Add\n2: Subtract\n3: Multiply\n4: Divide\n5: Modulus\n6: Square Root\n7: Cube Root\n8: Exponentiation "<<std::endl;
	    std::cin >>option;
	    switch(option){
		case 1:
			std::cout << "You Choose Add\n";
			std::cout << "Enter Operand 1\n";
    			std::cin >>op1;
    			std::cout << "Enter Operand 2\n";
    			std::cin >>op2;
			myProxy->add(op1,op2, callStatus, result);
			break;
		case 2:
			std::cout << "You Choose Subtract\n";
			std::cout << "Enter Operand 1\n";
    			std::cin >>op1;
    			std::cout << "Enter Operand 2\n";
    			std::cin >>op2;
			myProxy->subtarct(op1,op2, callStatus, result);
			break;
		case 3:
			std::cout << "You Choose Multiply\n";
			std::cout << "Enter Operand 1\n";
    			std::cin >>op1;
    			std::cout << "Enter Operand 2\n";
    			std::cin >>op2;
			myProxy->multiply(op1,op2, callStatus, result);
			break;
		case 4:
			std::cout << "You Choose Divide\n";
			std::cout << "Enter Dividend \n";
    			std::cin >>dividend;
    			std::cout << "Enter Divisor \n";
    			std::cin >>divisor;
			myProxy->divide(dividend,divisor, callStatus, quotient,remainder);
			break;
		case 5:
			std::cout << "You Choose Modulus\n";
			std::cout << "Enter Dividend \n";
    			std::cin >>dividend;
    			std::cout << "Enter Divisor \n";
    			std::cin >>divisor;
			myProxy->mod((int)dividend,(int)divisor, callStatus, remainder);
			break;
		case 6:
			std::cout << "You Choose Squared root\n";
			std::cout << "Enter Operand \n";
    			std::cin >>op1;
			myProxy->sqrt(op1, callStatus, result);
			break;
		case 7:
			std::cout << "You Choose Cube Root\n";
			std::cout << "Enter Operand \n";
    			std::cin >>op1;
			myProxy->cubert(op1, callStatus, result);
			break;
		case 8:
			std::cout << "You Choose Exponentiation\n";
			std::cout << "Enter Base \n";
    			std::cin >>op1;
    			std::cout << "Enter Exponent \n";
    			std::cin >>op2;
			myProxy->expon(op1,op2, callStatus, result);
			break;
		default:
			std::cout << "Invalid Option\n"<<std::endl;
			break;

		}
	    
            if(option==4){
		std::cout<<"Quotient: '"<<quotient<<"Remainder: '"<<remainder<<std::endl;

	    }   
	    if(option==5){
		std::cout<<"Remainder: '"<<remainder<<std::endl;

	    }   
	    std::cout << "Got result: '" << result << "'\n";
	    std::cout <<"Want to try somemore Y/N\n"<<std::endl;
	    std::cin >>tr;
	    if(tr=='N' || tr=='n'){
		flag=false;
		}
    }
     
    return 0;
}