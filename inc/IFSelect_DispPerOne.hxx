// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_DispPerOne_HeaderFile
#define _IFSelect_DispPerOne_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_DispPerOne_HeaderFile
#include <Handle_IFSelect_DispPerOne.hxx>
#endif

#ifndef _IFSelect_Dispatch_HeaderFile
#include <IFSelect_Dispatch.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TCollection_AsciiString;
class Interface_Graph;
class IFGraph_SubPartsIterator;


//! A DispPerOne gathers all the input Entities into as many <br>
//!           Packets as there Root Entities from the Final Selection, <br>
//!           that is, one Packet per Entity <br>
class IFSelect_DispPerOne : public IFSelect_Dispatch {

public:

  //! Creates a DispPerOne <br>
  Standard_EXPORT   IFSelect_DispPerOne();
  //! Returns as Label, "One File per Input Entity" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;
  //! Returns True, maximum limit is given as <nbent> <br>
  Standard_EXPORT   virtual  Standard_Boolean LimitedMax(const Standard_Integer nbent,Standard_Integer& max) const;
  //! Returns True (count is easy to know) and count is the length <br>
//!           of the input list (RootResult from FinalSelection) <br>
  Standard_EXPORT   virtual  Standard_Boolean PacketsCount(const Interface_Graph& G,Standard_Integer& count) const;
  //! Returns the list of produced Packets. It defines one Packet <br>
//!           per Entity given by RootResult from the Final Selection. <br>
  Standard_EXPORT     void Packets(const Interface_Graph& G,IFGraph_SubPartsIterator& packs) const;




  DEFINE_STANDARD_RTTI(IFSelect_DispPerOne)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif