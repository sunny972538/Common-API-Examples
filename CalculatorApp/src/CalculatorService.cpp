#include <iostream>
#include <thread>
#include <CommonAPI/CommonAPI.hpp>
#include "CalculatorStubImpl.hpp"
  
using namespace std;
  
int main() {

    CommonAPI::Runtime::setProperty("LogContext", "CalculatorService");
    CommonAPI::Runtime::setProperty("LibraryBase", "Calculator");
    std::shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();
    //std::shared_ptr<CommonAPI::Logger>  logger= CommmonAPI::Logger::get();
    std::shared_ptr<CalculatorStubImpl> myService = std::make_shared<CalculatorStubImpl>();
    runtime->registerService("local", "test", myService);
    std::cout << "Successfully Registered Service!" << std::endl;
 
    while (true) {
        std::cout << "Waiting for calls... (Abort with CTRL+C)" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(40));
    }
  
    return 0;
 } 