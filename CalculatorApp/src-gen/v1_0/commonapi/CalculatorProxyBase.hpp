/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_Calculator_PROXY_BASE_HPP_
#define COMMONAPI_Calculator_PROXY_BASE_HPP_

#include <v1_0/commonapi/Calculator.hpp>



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {

class CalculatorProxyBase
    : virtual public CommonAPI::Proxy {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const double&)> AddAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const double&)> SubtarctAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const double&)> MultiplyAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const double&, const int64_t&)> DivideAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const int64_t&)> ModAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const double&)> SqrtAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const double&)> CubertAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const double&)> ExponAsyncCallback;



    virtual void add(const double &_operand1, const double &_operand2, CommonAPI::CallStatus &_internalCallStatus, double &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> addAsync(const double &_operand1, const double &_operand2, AddAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void subtarct(const double &_operand1, const double &_operand2, CommonAPI::CallStatus &_internalCallStatus, double &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> subtarctAsync(const double &_operand1, const double &_operand2, SubtarctAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void multiply(const double &_operand1, const double &_operand2, CommonAPI::CallStatus &_internalCallStatus, double &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> multiplyAsync(const double &_operand1, const double &_operand2, MultiplyAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void divide(const double &_dividend, const double &_divisor, CommonAPI::CallStatus &_internalCallStatus, double &_qoutient, int64_t &_remainder, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> divideAsync(const double &_dividend, const double &_divisor, DivideAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void mod(const int64_t &_dividend, const int64_t &_divisor, CommonAPI::CallStatus &_internalCallStatus, int64_t &_remainder, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> modAsync(const int64_t &_dividend, const int64_t &_divisor, ModAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void sqrt(const double &_operand, CommonAPI::CallStatus &_internalCallStatus, double &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> sqrtAsync(const double &_operand, SqrtAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void cubert(const double &_operand, CommonAPI::CallStatus &_internalCallStatus, double &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> cubertAsync(const double &_operand, CubertAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void expon(const double &_base, const double &_exponent, CommonAPI::CallStatus &_internalCallStatus, double &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> exponAsync(const double &_base, const double &_exponent, ExponAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_Calculator_PROXY_BASE_HPP_
