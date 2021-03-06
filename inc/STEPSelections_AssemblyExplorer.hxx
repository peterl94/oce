// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPSelections_AssemblyExplorer_HeaderFile
#define _STEPSelections_AssemblyExplorer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _STEPSelections_SequenceOfAssemblyComponent_HeaderFile
#include <STEPSelections_SequenceOfAssemblyComponent.hxx>
#endif
#ifndef _Interface_Graph_HeaderFile
#include <Interface_Graph.hxx>
#endif
#ifndef _TColStd_IndexedDataMapOfTransientTransient_HeaderFile
#include <TColStd_IndexedDataMapOfTransientTransient.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Handle_StepShape_ShapeDefinitionRepresentation_HeaderFile
#include <Handle_StepShape_ShapeDefinitionRepresentation.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinition_HeaderFile
#include <Handle_StepBasic_ProductDefinition.hxx>
#endif
#ifndef _Handle_STEPSelections_AssemblyComponent_HeaderFile
#include <Handle_STEPSelections_AssemblyComponent.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepRepr_NextAssemblyUsageOccurrence_HeaderFile
#include <Handle_StepRepr_NextAssemblyUsageOccurrence.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Interface_Graph;
class StepShape_ShapeDefinitionRepresentation;
class StepBasic_ProductDefinition;
class STEPSelections_AssemblyComponent;
class Standard_Transient;
class StepRepr_NextAssemblyUsageOccurrence;



class STEPSelections_AssemblyExplorer  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   STEPSelections_AssemblyExplorer(const Interface_Graph& G);
  
  Standard_EXPORT     void Init(const Interface_Graph& G) ;
  
  Standard_EXPORT     void Dump(Standard_OStream& os) const;
  
  Standard_EXPORT     Handle_StepShape_ShapeDefinitionRepresentation FindSDRWithProduct(const Handle(StepBasic_ProductDefinition)& product) const;
  
  Standard_EXPORT     void FillListWithGraph(const Handle(STEPSelections_AssemblyComponent)& cmp) ;
  
  Standard_EXPORT     Handle_Standard_Transient FindItemWithNAUO(const Handle(StepRepr_NextAssemblyUsageOccurrence)& nauo) const;
  //! Returns the number of root assemblies; <br>
        Standard_Integer NbAssemblies() const;
  //! Returns root of assenbly by its rank; <br>
        Handle_STEPSelections_AssemblyComponent Root(const Standard_Integer rank = 1) const;





protected:





private:



STEPSelections_SequenceOfAssemblyComponent myRoots;
Interface_Graph myGraph;
TColStd_IndexedDataMapOfTransientTransient myMap;


};


#include <STEPSelections_AssemblyExplorer.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
