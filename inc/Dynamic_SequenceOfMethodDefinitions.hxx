// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_SequenceOfMethodDefinitions_HeaderFile
#define _Dynamic_SequenceOfMethodDefinitions_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_SequenceOfMethodDefinitions_HeaderFile
#include <Handle_Dynamic_SequenceOfMethodDefinitions.hxx>
#endif

#ifndef _Dynamic_SeqOfMethodDefinitions_HeaderFile
#include <Dynamic_SeqOfMethodDefinitions.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Dynamic_MethodDefinition_HeaderFile
#include <Handle_Dynamic_MethodDefinition.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Dynamic_MethodDefinition;
class Dynamic_SeqOfMethodDefinitions;



class Dynamic_SequenceOfMethodDefinitions : public MMgt_TShared {

public:

  
      Dynamic_SequenceOfMethodDefinitions();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(Dynamic_MethodDefinition)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(Dynamic_SequenceOfMethodDefinitions)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(Dynamic_MethodDefinition)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(Dynamic_SequenceOfMethodDefinitions)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Dynamic_MethodDefinition)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Dynamic_SequenceOfMethodDefinitions)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Dynamic_MethodDefinition)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Dynamic_SequenceOfMethodDefinitions)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_Dynamic_SequenceOfMethodDefinitions Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(Dynamic_MethodDefinition)& anItem) ;
  
  Standard_EXPORT    const Handle_Dynamic_MethodDefinition& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_Dynamic_MethodDefinition& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const Dynamic_SeqOfMethodDefinitions& Sequence() const;
  
        Dynamic_SeqOfMethodDefinitions& ChangeSequence() ;
  
  Standard_EXPORT     Handle_Dynamic_SequenceOfMethodDefinitions ShallowCopy() const;




  DEFINE_STANDARD_RTTI(Dynamic_SequenceOfMethodDefinitions)

protected:




private: 


Dynamic_SeqOfMethodDefinitions mySequence;


};

#define Item Handle_Dynamic_MethodDefinition
#define Item_hxx <Dynamic_MethodDefinition.hxx>
#define TheSequence Dynamic_SeqOfMethodDefinitions
#define TheSequence_hxx <Dynamic_SeqOfMethodDefinitions.hxx>
#define TCollection_HSequence Dynamic_SequenceOfMethodDefinitions
#define TCollection_HSequence_hxx <Dynamic_SequenceOfMethodDefinitions.hxx>
#define Handle_TCollection_HSequence Handle_Dynamic_SequenceOfMethodDefinitions
#define TCollection_HSequence_Type_() Dynamic_SequenceOfMethodDefinitions_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Dynamic_SequenceOfMethodDefinitions ShallowCopy(const Handle_Dynamic_SequenceOfMethodDefinitions& me) {
 return me->ShallowCopy();
}



#endif