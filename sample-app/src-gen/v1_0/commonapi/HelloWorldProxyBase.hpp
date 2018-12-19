/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_Hello_World_PROXY_BASE_HPP_
#define COMMONAPI_Hello_World_PROXY_BASE_HPP_

#include <v1_0/commonapi/HelloWorld.hpp>



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

class HelloWorldProxyBase
    : virtual public CommonAPI::Proxy {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&)> SayHelloAsyncCallback;



    virtual void sayHello(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> sayHelloAsync(const std::string &_name, SayHelloAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_Hello_World_PROXY_BASE_HPP_
