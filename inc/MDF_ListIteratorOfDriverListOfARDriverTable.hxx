// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_ListIteratorOfDriverListOfARDriverTable_HeaderFile
#define _MDF_ListIteratorOfDriverListOfARDriverTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_MDF_ARDriver.hxx>
#include <Handle_MDF_ListNodeOfDriverListOfARDriverTable.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class MDF_DriverListOfARDriverTable;
class MDF_ARDriver;
class MDF_ListNodeOfDriverListOfARDriverTable;



class MDF_ListIteratorOfDriverListOfARDriverTable 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MDF_ListIteratorOfDriverListOfARDriverTable();
  
  Standard_EXPORT MDF_ListIteratorOfDriverListOfARDriverTable(const MDF_DriverListOfARDriverTable& L);
  
  Standard_EXPORT   void Initialize (const MDF_DriverListOfARDriverTable& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(MDF_ARDriver)& Value()  const;


friend class MDF_DriverListOfARDriverTable;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(MDF_ARDriver)
#define Item_hxx <MDF_ARDriver.hxx>
#define TCollection_ListNode MDF_ListNodeOfDriverListOfARDriverTable
#define TCollection_ListNode_hxx <MDF_ListNodeOfDriverListOfARDriverTable.hxx>
#define TCollection_ListIterator MDF_ListIteratorOfDriverListOfARDriverTable
#define TCollection_ListIterator_hxx <MDF_ListIteratorOfDriverListOfARDriverTable.hxx>
#define Handle_TCollection_ListNode Handle_MDF_ListNodeOfDriverListOfARDriverTable
#define TCollection_ListNode_Type_() MDF_ListNodeOfDriverListOfARDriverTable_Type_()
#define TCollection_List MDF_DriverListOfARDriverTable
#define TCollection_List_hxx <MDF_DriverListOfARDriverTable.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _MDF_ListIteratorOfDriverListOfARDriverTable_HeaderFile
