// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_TFunctionOfVinertGK_HeaderFile
#define _BRepGProp_TFunctionOfVinertGK_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepGProp_Face_HeaderFile
#include <BRepGProp_Face.hxx>
#endif
#ifndef _BRepGProp_UFunctionOfVinertGK_HeaderFile
#include <BRepGProp_UFunctionOfVinertGK.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GProp_ValueType_HeaderFile
#include <GProp_ValueType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_Function_HeaderFile
#include <math_Function.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class TopoDS_Edge;
class BRepGProp_Face;
class BRepGProp_Domain;
class BRepGProp_VinertGK;
class BRepGProp_UFunctionOfVinertGK;
class gp_Pnt;



class BRepGProp_TFunctionOfVinertGK  : public math_Function {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepGProp_TFunctionOfVinertGK(const BRepGProp_Face& theSurface,const gp_Pnt& theVertex,const Standard_Boolean IsByPoint,const Standard_Address theCoeffs,const Standard_Real theUMin,const Standard_Real theTolerance);
  
  Standard_EXPORT     void Init() ;
  
        void SetNbKronrodPoints(const Standard_Integer theNbPoints) ;
  
        void SetValueType(const GProp_ValueType aType) ;
  
        void SetTolerance(const Standard_Real aTol) ;
  
        Standard_Real ErrorReached() const;
  
        Standard_Real AbsolutError() const;
  
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_Real X,Standard_Real& F) ;
  
      virtual  Standard_Integer GetStateNumber() ;





protected:





private:



BRepGProp_Face mySurface;
BRepGProp_UFunctionOfVinertGK myUFunction;
Standard_Real myUMin;
Standard_Real myTolerance;
Standard_Real myTolReached;
Standard_Real myErrReached;
Standard_Real myAbsError;
GProp_ValueType myValueType;
Standard_Boolean myIsByPoint;
Standard_Integer myNbPntOuter;


};

#define Arc TopoDS_Edge
#define Arc_hxx <TopoDS_Edge.hxx>
#define Face BRepGProp_Face
#define Face_hxx <BRepGProp_Face.hxx>
#define Domain BRepGProp_Domain
#define Domain_hxx <BRepGProp_Domain.hxx>
#define GProp_UFunction BRepGProp_UFunctionOfVinertGK
#define GProp_UFunction_hxx <BRepGProp_UFunctionOfVinertGK.hxx>
#define GProp_TFunction BRepGProp_TFunctionOfVinertGK
#define GProp_TFunction_hxx <BRepGProp_TFunctionOfVinertGK.hxx>
#define GProp_VGPropsGK BRepGProp_VinertGK
#define GProp_VGPropsGK_hxx <BRepGProp_VinertGK.hxx>

#include <GProp_TFunction.lxx>

#undef Arc
#undef Arc_hxx
#undef Face
#undef Face_hxx
#undef Domain
#undef Domain_hxx
#undef GProp_UFunction
#undef GProp_UFunction_hxx
#undef GProp_TFunction
#undef GProp_TFunction_hxx
#undef GProp_VGPropsGK
#undef GProp_VGPropsGK_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
