
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_transport_TransportFactory__
#define __gnu_classpath_jdwp_transport_TransportFactory__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace transport
        {
            class ITransport;
            class TransportFactory;
            class TransportFactory$TransportMethod;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::transport::TransportFactory : public ::java::lang::Object
{

public:
  TransportFactory();
  static ::gnu::classpath::jdwp::transport::ITransport * newInstance(::java::util::HashMap *);
private:
  static ::java::lang::String * _TRANSPORT_PROPERTY;
  static JArray< ::gnu::classpath::jdwp::transport::TransportFactory$TransportMethod * > * _transportMethods;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_transport_TransportFactory__