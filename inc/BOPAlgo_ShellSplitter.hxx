// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPAlgo_ShellSplitter_HeaderFile
#define _BOPAlgo_ShellSplitter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPCol_ListOfShape_HeaderFile
#include <BOPCol_ListOfShape.hxx>
#endif
#ifndef _BOPTools_ListOfConnexityBlock_HeaderFile
#include <BOPTools_ListOfConnexityBlock.hxx>
#endif
#ifndef _BOPAlgo_Algo_HeaderFile
#include <BOPAlgo_Algo.hxx>
#endif
#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _BOPTools_ConnexityBlock_HeaderFile
#include <BOPTools_ConnexityBlock.hxx>
#endif
class TopoDS_Shape;



//! The class provides the splitting of the set of connected faces <br>
//! on separate loops <br>
class BOPAlgo_ShellSplitter  : public BOPAlgo_Algo {
public:

  DEFINE_STANDARD_ALLOC

  //! empty constructor <br>
  Standard_EXPORT   BOPAlgo_ShellSplitter();
Standard_EXPORT virtual ~BOPAlgo_ShellSplitter();
  //!  constructor <br>
  Standard_EXPORT   BOPAlgo_ShellSplitter(const BOPCol_BaseAllocator& theAllocator);
  //! adds a face <theS> to process <br>
  Standard_EXPORT     void AddStartElement(const TopoDS_Shape& theS) ;
  //! return the faces to process <br>
  Standard_EXPORT    const BOPCol_ListOfShape& StartElements() const;
  //! performs the algorithm <br>
  Standard_EXPORT   virtual  void Perform() ;
  //! returns the loops <br>
  Standard_EXPORT    const BOPCol_ListOfShape& Shells() const;
  
  Standard_EXPORT   static  void SplitBlock(BOPTools_ConnexityBlock& theCB) ;





protected:

  
  Standard_EXPORT     void MakeConnexityBlocks() ;
  
  Standard_EXPORT     void MakeShells() ;


BOPCol_ListOfShape myStartShapes;
BOPCol_ListOfShape myShells;
BOPTools_ListOfConnexityBlock myLCB;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
