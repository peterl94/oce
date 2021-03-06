// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductDefinitionRelationship_HeaderFile
#define _StepBasic_ProductDefinitionRelationship_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionRelationship_HeaderFile
#include <Handle_StepBasic_ProductDefinitionRelationship.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinition_HeaderFile
#include <Handle_StepBasic_ProductDefinition.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepBasic_ProductDefinition;


//! Representation of STEP entity ProductDefinitionRelationship <br>
class StepBasic_ProductDefinitionRelationship : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepBasic_ProductDefinitionRelationship();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aId,const Handle(TCollection_HAsciiString)& aName,const Standard_Boolean hasDescription,const Handle(TCollection_HAsciiString)& aDescription,const Handle(StepBasic_ProductDefinition)& aRelatingProductDefinition,const Handle(StepBasic_ProductDefinition)& aRelatedProductDefinition) ;
  //! Returns field Id <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Id() const;
  //! Set field Id <br>
  Standard_EXPORT     void SetId(const Handle(TCollection_HAsciiString)& Id) ;
  //! Returns field Name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  //! Set field Name <br>
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& Name) ;
  //! Returns field Description <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Description() const;
  //! Set field Description <br>
  Standard_EXPORT     void SetDescription(const Handle(TCollection_HAsciiString)& Description) ;
  //! Returns True if optional field Description is defined <br>
  Standard_EXPORT     Standard_Boolean HasDescription() const;
  //! Returns field RelatingProductDefinition <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinition RelatingProductDefinition() const;
  //! Set field RelatingProductDefinition <br>
  Standard_EXPORT     void SetRelatingProductDefinition(const Handle(StepBasic_ProductDefinition)& RelatingProductDefinition) ;
  //! Returns field RelatedProductDefinition <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinition RelatedProductDefinition() const;
  //! Set field RelatedProductDefinition <br>
  Standard_EXPORT     void SetRelatedProductDefinition(const Handle(StepBasic_ProductDefinition)& RelatedProductDefinition) ;




  DEFINE_STANDARD_RTTI(StepBasic_ProductDefinitionRelationship)

protected:




private: 


Handle_TCollection_HAsciiString theId;
Handle_TCollection_HAsciiString theName;
Handle_TCollection_HAsciiString theDescription;
Handle_StepBasic_ProductDefinition theRelatingProductDefinition;
Handle_StepBasic_ProductDefinition theRelatedProductDefinition;
Standard_Boolean defDescription;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
