#ifndef CalculatorSTUBIMPL_H_
#define CalculatorSTUBIMPL_H_
  
#include <CommonAPI/CommonAPI.hpp>
#include <v1_0/commonapi/CalculatorStubDefault.hpp>
  
class CalculatorStubImpl: public v1_0::commonapi::CalculatorStubDefault {
public:
    CalculatorStubImpl();
    virtual ~CalculatorStubImpl();
     virtual void add(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand1, double _operand2, addReply_t _reply);
    virtual void subtarct(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand1, double _operand2, subtarctReply_t _reply);
    virtual void multiply(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand1, double _operand2, multiplyReply_t _reply);
    virtual void divide(const std::shared_ptr<CommonAPI::ClientId> _client, double _dividend, double _divisor, divideReply_t _reply);
    virtual void mod(const std::shared_ptr<CommonAPI::ClientId> _client, int64_t _dividend, int64_t _divisor, modReply_t _reply);
    virtual void sqrt(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand, sqrtReply_t _reply);
    virtual void cubert(const std::shared_ptr<CommonAPI::ClientId> _client, double _operand, cubertReply_t _reply);
    virtual void expon(const std::shared_ptr<CommonAPI::ClientId> _client, double _base, double _exponent, exponReply_t _reply);

};
 
#endif /* CalculatorSTUBIMPL_H_ */