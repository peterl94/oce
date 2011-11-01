// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectExtract_HeaderFile
#define _IFSelect_SelectExtract_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectExtract_HeaderFile
#include <Handle_IFSelect_SelectExtract.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IFSelect_SelectDeduct_HeaderFile
#include <IFSelect_SelectDeduct.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class Interface_EntityIterator;
class Interface_Graph;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! A SelectExtract determines a list of Entities from an Input <br>
//!           Selection, as a sub-list of the Input Result <br>
//!           It works by applying a sort criterium on each Entity of the <br>
//!           Input. This criterium can be applied Direct to Pick Items <br>
//!           (default case) or Reverse to Remove Item <br>
//! <br>
//!           Basic features (the unique Input) are inherited from SelectDeduct <br>
class IFSelect_SelectExtract : public IFSelect_SelectDeduct {

public:

  //! Returns True if Sort criterium is Direct, False if Reverse <br>
  Standard_EXPORT     Standard_Boolean IsDirect() const;
  //! Sets Sort criterium sense to a new value <br>
//!           (True : Direct , False : Reverse) <br>
  Standard_EXPORT     void SetDirect(const Standard_Boolean direct) ;
  //! Returns the list of selected entities. Works by calling the <br>
//!           method Sort on each input Entity : the Entity is kept as <br>
//!           output if Sort returns the same value as Direct status <br>
  Standard_EXPORT   virtual  Interface_EntityIterator RootResult(const Interface_Graph& G) const;
  //! Returns True for an Entity if it satisfies the Sort criterium <br>
//!           It receives : <br>
//!           - <rank>, the rank of the Entity in the Iteration, <br>
//!           - <ent> , the Entity itself, and <br>
//!           - <model>, the Starting Model <br>
//!             Hence, the Entity to check is "model->Value(num)" (but an <br>
//!             InterfaceModel allows other checks) <br>
//!           This method is specific to each class of SelectExtract <br>
  Standard_EXPORT   virtual  Standard_Boolean Sort(const Standard_Integer rank,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const = 0;
  //! Works as Sort but works on the Graph <br>
//!           Default directly calls Sort, but it can be redefined <br>
//!           If SortInGraph is redefined, Sort should be defined even if <br>
//!           not called (to avoid deferred methods in a final class) <br>
  Standard_EXPORT   virtual  Standard_Boolean SortInGraph(const Standard_Integer rank,const Handle(Standard_Transient)& ent,const Interface_Graph& G) const;
  //! Returns a text saying "Picked" or "Removed", plus the <br>
//!           specific criterium returned by ExtractLabel (see below) <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;
  //! Returns a text defining the criterium for extraction <br>
  Standard_EXPORT   virtual  TCollection_AsciiString ExtractLabel() const = 0;




  DEFINE_STANDARD_RTTI(IFSelect_SelectExtract)

protected:

  //! Initializes a SelectExtract : enforces the sort to be Direct <br>
  Standard_EXPORT   IFSelect_SelectExtract();



private: 


Standard_Boolean thesort;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif