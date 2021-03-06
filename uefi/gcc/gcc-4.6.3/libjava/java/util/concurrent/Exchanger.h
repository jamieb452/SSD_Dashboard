
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_Exchanger__
#define __java_util_concurrent_Exchanger__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::util::concurrent::Exchanger : public ::java::lang::Object
{

  ::java::lang::Object * doExchange(::java::lang::Object *, jboolean, jlong);
  jint hashIndex();
  void createSlot(jint);
  static jboolean tryCancel(::java::util::concurrent::Exchanger$Node *, ::java::util::concurrent::Exchanger$Slot *);
  static ::java::lang::Object * spinWait(::java::util::concurrent::Exchanger$Node *, ::java::util::concurrent::Exchanger$Slot *);
  static ::java::lang::Object * await(::java::util::concurrent::Exchanger$Node *, ::java::util::concurrent::Exchanger$Slot *);
  ::java::lang::Object * awaitNanos(::java::util::concurrent::Exchanger$Node *, ::java::util::concurrent::Exchanger$Slot *, jlong);
  ::java::lang::Object * scanOnTimeout(::java::util::concurrent::Exchanger$Node *);
public:
  Exchanger();
  virtual ::java::lang::Object * exchange(::java::lang::Object *);
  virtual ::java::lang::Object * exchange(::java::lang::Object *, jlong, ::java::util::concurrent::TimeUnit *);
private:
  static jint NCPU;
  static const jint CAPACITY = 32;
  static jint FULL;
  static jint SPINS;
  static jint TIMED_SPINS;
  static ::java::lang::Object * CANCEL;
  static ::java::lang::Object * NULL_ITEM;
  JArray< ::java::util::concurrent::Exchanger$Slot * > * volatile __attribute__((aligned(__alignof__( ::java::lang::Object)))) arena;
  ::java::util::concurrent::atomic::AtomicInteger * max;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_Exchanger__
