// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlAPI_HeaderFile
#define _VrmlAPI_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class TopoDS_Shape;
class VrmlAPI_Writer;


//! API for writing to VRML 1.0 <br>
class VrmlAPI  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Converts the shape aShape to VRML format and writes it <br>
//! to the file identified by aFileName using default parameters. <br>
  Standard_EXPORT   static  void Write(const TopoDS_Shape& aShape,const Standard_CString aFileName) ;





protected:





private:




friend class VrmlAPI_Writer;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif