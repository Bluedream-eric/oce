// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_DispPerDrawing_HeaderFile
#define _IGESSelect_DispPerDrawing_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_DispPerDrawing.hxx>

#include <Handle_IGESSelect_ViewSorter.hxx>
#include <IFSelect_Dispatch.hxx>
#include <Standard_Boolean.hxx>
class IGESSelect_ViewSorter;
class TCollection_AsciiString;
class Interface_Graph;
class IFGraph_SubPartsIterator;
class Interface_EntityIterator;


//! This type of dispatch defines sets of entities attached to
//! distinct drawings. This information is taken from attached
//! views which appear in the Directory Part. Also Drawing Frames
//! are considered when Drawings are part of input list.
//!
//! Remaining data concern entities not attached to a drawing.
class IGESSelect_DispPerDrawing : public IFSelect_Dispatch
{

public:

  
  //! Creates a DispPerDrawing
  Standard_EXPORT IGESSelect_DispPerDrawing();
  
  //! Returns as Label, "One File per Drawing"
  Standard_EXPORT   TCollection_AsciiString Label()  const;
  
  //! Computes the list of produced Packets. Packets are computed
  //! by a ViewSorter (SortDrawings with also frames).
  Standard_EXPORT   void Packets (const Interface_Graph& G, IFGraph_SubPartsIterator& packs)  const;
  
  //! Returns True, because of entities attached to no view.
  Standard_EXPORT virtual   Standard_Boolean CanHaveRemainder()  const;
  
  //! Returns Remainder which is a set of Entities.
  //! It is supposed to be called once Packets has been called.
  Standard_EXPORT virtual   Interface_EntityIterator Remainder (const Interface_Graph& G)  const;




  DEFINE_STANDARD_RTTI(IGESSelect_DispPerDrawing)

protected:




private: 


  Handle(IGESSelect_ViewSorter) thesorter;


};







#endif // _IGESSelect_DispPerDrawing_HeaderFile
