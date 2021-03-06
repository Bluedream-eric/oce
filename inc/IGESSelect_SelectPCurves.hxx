// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectPCurves_HeaderFile
#define _IGESSelect_SelectPCurves_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SelectPCurves.hxx>

#include <Standard_Boolean.hxx>
#include <IFSelect_SelectExplore.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;


//! This Selection returns the pcurves which lie on a face
//! In two modes : global (i.e. a CompositeCurve is not explored)
//! or basic (all the basic curves are listed)
class IGESSelect_SelectPCurves : public IFSelect_SelectExplore
{

public:

  
  //! Creates a SelectPCurves
  //! basic True  : lists all the components of pcurves
  //! basic False : lists the uppest level definitions
  //! (i.e. stops at CompositeCurve)
  Standard_EXPORT IGESSelect_SelectPCurves(const Standard_Boolean basic);
  
  //! Explores an entity, to take its contained PCurves
  //! An independant curve is IGNORED : only faces are explored
  Standard_EXPORT   Standard_Boolean Explore (const Standard_Integer level, const Handle(Standard_Transient)& ent, const Interface_Graph& G, Interface_EntityIterator& explored)  const;
  
  //! Returns a text defining the criterium : "Basic PCurves" or
  //! "Global PCurves"
  Standard_EXPORT   TCollection_AsciiString ExploreLabel()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectPCurves)

protected:




private: 


  Standard_Boolean thebasic;


};







#endif // _IGESSelect_SelectPCurves_HeaderFile
