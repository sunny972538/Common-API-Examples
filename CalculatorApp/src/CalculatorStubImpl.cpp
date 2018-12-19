#include <math.h>
#include "CalculatorStubImpl.hpp"
CalculatorStubImpl::CalculatorStubImpl() { }
CalculatorStubImpl::~CalculatorStubImpl() { }
  


void CalculatorStubImpl::add(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand1, double _operand2, addReply_t _reply) {
    
    double result = _operand1 + _operand2;
    _reply(result);
}

void CalculatorStubImpl::subtarct(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand1, double _operand2, subtarctReply_t _reply) {
    
    double result = _operand1 - _operand2;
    _reply(result);
}

void CalculatorStubImpl::multiply(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand1, double _operand2, multiplyReply_t _reply) {
    
    double result = _operand1 * _operand2;
    _reply(result);
}

void CalculatorStubImpl::divide(const std::shared_ptr<CommonAPI::ClientId> _client, double _dividend, double _divisor, divideReply_t _reply) {
    
    double qoutient = _dividend / _divisor;
    int64_t remainder = (int)_dividend % (int)_divisor;
    _reply(qoutient, remainder);
}

void CalculatorStubImpl::mod(const std::shared_ptr<CommonAPI::ClientId> _client, int64_t _dividend, int64_t _divisor, modReply_t _reply) {
    
    int64_t remainder = (int)_dividend % (int)_divisor;
    _reply(remainder);
}

void CalculatorStubImpl::sqrt(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand, sqrtReply_t _reply) {
    
    double result = pow(_operand,1/2.0);
    _reply(result);
}

void CalculatorStubImpl::cubert(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand, cubertReply_t _reply) {
    
    double result = pow(_operand,1/3.0);
    _reply(result);
}

void CalculatorStubImpl::expon(const std::shared_ptr<CommonAPI::ClientId> _client, double _base, double _exponent, exponReply_t _reply) {
    
    double result = pow(_base,_exponent);
    _reply(result);
}