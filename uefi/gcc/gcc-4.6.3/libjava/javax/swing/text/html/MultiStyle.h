
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_MultiStyle__
#define __javax_swing_text_html_MultiStyle__

#pragma interface

#include <javax/swing/text/html/MultiAttributeSet.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class ChangeListener;
      }
      namespace text
      {
          class AttributeSet;
          class SimpleAttributeSet;
        namespace html
        {
            class MultiStyle;
        }
      }
    }
  }
}

class javax::swing::text::html::MultiStyle : public ::javax::swing::text::html::MultiAttributeSet
{

public:
  MultiStyle(::java::lang::String *, JArray< ::javax::swing::text::AttributeSet * > *);
  virtual ::java::lang::String * getName();
  virtual void addChangeListener(::javax::swing::event::ChangeListener *);
  virtual void removeChangeListener(::javax::swing::event::ChangeListener *);
  virtual void addAttribute(::java::lang::Object *, ::java::lang::Object *);
  virtual void addAttributes(::javax::swing::text::AttributeSet *);
  virtual void removeAttribute(::java::lang::Object *);
  virtual void removeAttributes(::java::util::Enumeration *);
  virtual void removeAttributes(::javax::swing::text::AttributeSet *);
  virtual void setResolveParent(::javax::swing::text::AttributeSet *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::javax::swing::text::html::MultiAttributeSet)))) name;
  ::javax::swing::text::SimpleAttributeSet * attributes;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_MultiStyle__