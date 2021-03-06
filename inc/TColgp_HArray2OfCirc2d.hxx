// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray2OfCirc2d_HeaderFile
#define _TColgp_HArray2OfCirc2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColgp_HArray2OfCirc2d_HeaderFile
#include <Handle_TColgp_HArray2OfCirc2d.hxx>
#endif

#ifndef _TColgp_Array2OfCirc2d_HeaderFile
#include <TColgp_Array2OfCirc2d.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class gp_Circ2d;
class TColgp_Array2OfCirc2d;



class TColgp_HArray2OfCirc2d : public MMgt_TShared {

public:

  
      TColgp_HArray2OfCirc2d(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
      TColgp_HArray2OfCirc2d(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const gp_Circ2d& V);
  
        void Init(const gp_Circ2d& V) ;
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const gp_Circ2d& Value) ;
  
       const gp_Circ2d& Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
        gp_Circ2d& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
  
       const TColgp_Array2OfCirc2d& Array2() const;
  
        TColgp_Array2OfCirc2d& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray2OfCirc2d)

protected:




private: 


TColgp_Array2OfCirc2d myArray;


};

#define ItemHArray2 gp_Circ2d
#define ItemHArray2_hxx <gp_Circ2d.hxx>
#define TheArray2 TColgp_Array2OfCirc2d
#define TheArray2_hxx <TColgp_Array2OfCirc2d.hxx>
#define TCollection_HArray2 TColgp_HArray2OfCirc2d
#define TCollection_HArray2_hxx <TColgp_HArray2OfCirc2d.hxx>
#define Handle_TCollection_HArray2 Handle_TColgp_HArray2OfCirc2d
#define TCollection_HArray2_Type_() TColgp_HArray2OfCirc2d_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
