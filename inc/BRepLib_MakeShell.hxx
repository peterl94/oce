// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepLib_MakeShell_HeaderFile
#define _BRepLib_MakeShell_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepLib_ShellError_HeaderFile
#include <BRepLib_ShellError.hxx>
#endif
#ifndef _BRepLib_MakeShape_HeaderFile
#include <BRepLib_MakeShape.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class StdFail_NotDone;
class Geom_Surface;
class TopoDS_Shell;


//! Provides methos to build shells. <br>
//! <br>
//!          Build a shell from a set of faces. <br>
//!          Build untied shell from a non C2 surface <br>
//!          splitting it into C2-continuous parts. <br>
class BRepLib_MakeShell  : public BRepLib_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Not done. <br>
  Standard_EXPORT   BRepLib_MakeShell();
  
  Standard_EXPORT   BRepLib_MakeShell(const Handle(Geom_Surface)& S,const Standard_Boolean Segment = Standard_False);
  
  Standard_EXPORT   BRepLib_MakeShell(const Handle(Geom_Surface)& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Boolean Segment = Standard_False);
  //! Creates the shell from the surface  and the min-max <br>
//!          values. <br>
  Standard_EXPORT     void Init(const Handle(Geom_Surface)& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Boolean Segment = Standard_False) ;
  
  Standard_EXPORT     BRepLib_ShellError Error() const;
  //! Returns the new Shell. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Shell& Shell() const;
Standard_EXPORT operator TopoDS_Shell() const;





protected:





private:



BRepLib_ShellError myError;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
