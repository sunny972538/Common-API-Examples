/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_CALCULATOR_HPP_
#define COMMONAPI_CALCULATOR_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {

class Calculator {
public:
    virtual ~Calculator() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* Calculator::getInterface() {
    return ("commonapi.Calculator");
}

CommonAPI::Version Calculator::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace commonapi
} // namespace v1_0

namespace CommonAPI {
}

#endif // COMMONAPI_CALCULATOR_HPP_
