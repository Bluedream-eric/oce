// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ShapeListOfShape_HeaderFile
#define _TopOpeBRepBuild_ShapeListOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopTools_ListOfShape.hxx>
#include <TopoDS_Shape.hxx>
class TopoDS_Shape;
class TopTools_ListOfShape;


//! represent shape + a list of shape
class TopOpeBRepBuild_ShapeListOfShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_ShapeListOfShape();
  
  Standard_EXPORT TopOpeBRepBuild_ShapeListOfShape(const TopoDS_Shape& S);
  
  Standard_EXPORT TopOpeBRepBuild_ShapeListOfShape(const TopoDS_Shape& S, const TopTools_ListOfShape& L);
  
  Standard_EXPORT  const  TopTools_ListOfShape& List()  const;
  
  Standard_EXPORT   TopTools_ListOfShape& ChangeList() ;
  
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
  
  Standard_EXPORT   TopoDS_Shape& ChangeShape() ;




protected:





private:



  TopTools_ListOfShape myList;
  TopoDS_Shape myShape;


};







#endif // _TopOpeBRepBuild_ShapeListOfShape_HeaderFile
