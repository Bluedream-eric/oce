// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WNT_Window_HeaderFile
#define _WNT_Window_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_WNT_Window.hxx>

#include <Standard_Integer.hxx>
#include <Handle_WNT_WClass.hxx>
#include <Aspect_Handle.hxx>
#include <Standard_Boolean.hxx>
#include <Aspect_Window.hxx>
#include <Standard_CString.hxx>
#include <WNT_Dword.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Standard_Address.hxx>
#include <Aspect_TypeOfResize.hxx>
#include <Quantity_Ratio.hxx>
#include <Aspect_Drawable.hxx>
class WNT_WClass;
class Aspect_WindowDefinitionError;
class Aspect_WindowError;


//! This class defines Windows NT window
class WNT_Window : public Aspect_Window
{

public:

  
  //! Creates a Window defined by his position and size
  //! in pixles from the Parent Window.
  //! Trigger: Raises WindowDefinitionError if the Position out of the
  //! Screen Space or the window creation failed.
  Standard_EXPORT WNT_Window(const Standard_CString theTitle, const Handle(WNT_WClass)& theClass, const WNT_Dword& theStyle, const Standard_Integer thePxLeft, const Standard_Integer thePxTop, const Standard_Integer thePxWidth, const Standard_Integer thePxHeight, const Quantity_NameOfColor theBackColor = Quantity_NOC_MATRAGRAY, const Aspect_Handle theParent = 0, const Aspect_Handle theMenu = 0, const Standard_Address theClientStruct = 0);
  
  //! Creates a Window based on the existing window handle.
  //! This handle equals ( aPart1 << 16 ) + aPart2.
  Standard_EXPORT WNT_Window(const Aspect_Handle aHandle, const Quantity_NameOfColor aBackColor = Quantity_NOC_MATRAGRAY);
  
  //! Destroies the Window and all resourses attached to it.
  Standard_EXPORT virtual   void Destroy() ;
~WNT_Window()
{
  Destroy();
}
  
  //! Sets cursor <aCursor> for ENTIRE WINDOW CLASS to which
  //! the Window belongs.
  Standard_EXPORT   void SetCursor (const Aspect_Handle aCursor)  const;
  
  //! Opens the window <me>.
  Standard_EXPORT virtual   void Map()  const;
  
  //! Opens a window <me> according to <aMapMode>.
  //! This method is specific to Windows NT.
  //! <aMapMode> can be one of SW_xxx constants defined
  //! in <windows.h>. See documentation.
  Standard_EXPORT   void Map (const Standard_Integer aMapMode)  const;
  
  //! Closes the window <me>.
  Standard_EXPORT virtual   void Unmap()  const;
  
  //! Applies the resizing to the window <me>.
  Standard_EXPORT virtual   Aspect_TypeOfResize DoResize()  const;
  
  //! Apply the mapping change to the window <me>
  //! and returns TRUE if the window is mapped at screen.
    virtual   Standard_Boolean DoMapping()  const;
  
  //! Changes variables due to window position.
  Standard_EXPORT   void SetPos (const Standard_Integer X, const Standard_Integer Y, const Standard_Integer X1, const Standard_Integer Y1) ;
  
  //! Returns True if the window <me> is opened
  //! and False if the window is closed.
  Standard_EXPORT virtual   Standard_Boolean IsMapped()  const;
  
  //! Returns The Window RATIO equal to the physical
  //! WIDTH/HEIGHT dimensions.
  Standard_EXPORT virtual   Quantity_Ratio Ratio()  const;
  
  //! Returns The Window POSITION in PIXEL
  Standard_EXPORT virtual   void Position (Standard_Integer& X1, Standard_Integer& Y1, Standard_Integer& X2, Standard_Integer& Y2)  const;
  
  //! Returns The Window SIZE in PIXEL
  Standard_EXPORT virtual   void Size (Standard_Integer& Width, Standard_Integer& Height)  const;
  
  //! Returns the Windows NT handle of the created window <me>.
      Aspect_Handle HWindow()  const;
  
  //! Returns the Windows NT handle parent of the created window <me>.
      Aspect_Handle HParentWindow()  const;
  
  //! Returns native Window handle (HWND)
    virtual   Aspect_Drawable NativeHandle()  const;
  
  //! Returns parent of native Window handle (HWND on Windows, Window with Xlib, and so on)
    virtual   Aspect_Drawable NativeParentHandle()  const;



  DEFINE_STANDARD_RTTI(WNT_Window)

protected:


  Standard_Integer aXLeft;
  Standard_Integer aYTop;
  Standard_Integer aXRight;
  Standard_Integer aYBottom;
  Handle(WNT_WClass) myWClass;
  Aspect_Handle myHWindow;
  Aspect_Handle myHParentWindow;
  Standard_Boolean myIsForeign;


private: 




};


#include <WNT_Window.lxx>





#endif // _WNT_Window_HeaderFile
