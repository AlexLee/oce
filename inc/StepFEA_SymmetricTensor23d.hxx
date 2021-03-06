// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SymmetricTensor23d_HeaderFile
#define _StepFEA_SymmetricTensor23d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepData_SelectMember.hxx>
#include <Standard_Real.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
class Standard_Transient;
class StepData_SelectMember;
class TColStd_HArray1OfReal;


//! Representation of STEP SELECT type SymmetricTensor23d
class StepFEA_SymmetricTensor23d  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepFEA_SymmetricTensor23d();
  
  //! Recognizes a kind of SymmetricTensor23d select type
  //! return 0
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Recognizes a items of select member SymmetricTensor23dMember
  //! 1 -> IsotropicSymmetricTensor23d
  //! 2 -> OrthotropicSymmetricTensor23d
  //! 3 -> AnisotropicSymmetricTensor23d
  //! 0 else
  Standard_EXPORT virtual   Standard_Integer CaseMem (const Handle(StepData_SelectMember)& ent)  const;
  
  //! Returns a new select member the type SymmetricTensor23dMember
  Standard_EXPORT virtual   Handle(StepData_SelectMember) NewMember()  const;
  
  //! Set Value for IsotropicSymmetricTensor23d
  Standard_EXPORT   void SetIsotropicSymmetricTensor23d (const Standard_Real aVal) ;
  
  //! Returns Value as IsotropicSymmetricTensor23d (or Null if another type)
  Standard_EXPORT   Standard_Real IsotropicSymmetricTensor23d()  const;
  
  //! Set Value for OrthotropicSymmetricTensor23d
  Standard_EXPORT   void SetOrthotropicSymmetricTensor23d (const Handle(TColStd_HArray1OfReal)& aVal) ;
  
  //! Returns Value as OrthotropicSymmetricTensor23d (or Null if another type)
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) OrthotropicSymmetricTensor23d()  const;
  
  //! Set Value for AnisotropicSymmetricTensor23d
  Standard_EXPORT   void SetAnisotropicSymmetricTensor23d (const Handle(TColStd_HArray1OfReal)& aVal) ;
  
  //! Returns Value as AnisotropicSymmetricTensor23d (or Null if another type)
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) AnisotropicSymmetricTensor23d()  const;




protected:





private:





};







#endif // _StepFEA_SymmetricTensor23d_HeaderFile
