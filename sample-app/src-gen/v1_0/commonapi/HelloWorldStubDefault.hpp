/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_Hello_World_STUB_DEFAULT_HPP_
#define COMMONAPI_Hello_World_STUB_DEFAULT_HPP_


#include <v1_0/commonapi/HelloWorldStub.hpp>
#include <sstream>

namespace v1_0 {
namespace commonapi {

/**
 * Provides a default implementation for HelloWorldStubRemoteEvent and
 * HelloWorldStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class HelloWorldStubDefault
    : public virtual HelloWorldStub {
public:
    HelloWorldStubDefault();

    HelloWorldStubRemoteEvent* initStubAdapter(const std::shared_ptr<HelloWorldStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);


    virtual void sayHello(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, sayHelloReply_t _reply);



protected:
    class RemoteEventHandler: public virtual HelloWorldStubRemoteEvent {
    public:
        RemoteEventHandler(HelloWorldStubDefault *_defaultStub);


    private:
        HelloWorldStubDefault *defaultStub_;
    };
private:
    HelloWorldStubDefault::RemoteEventHandler remoteEventHandler_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_Hello_World_STUB_DEFAULT