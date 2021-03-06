// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_Line_HeaderFile
#define _PGeom2d_Line_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PGeom2d_Line.hxx>

#include <gp_Ax2d.hxx>
#include <PGeom2d_Curve.hxx>
class gp_Ax2d;


class PGeom2d_Line : public PGeom2d_Curve
{

public:

  
  //! Creates a line with default values.
  Standard_EXPORT PGeom2d_Line();
  
  //! Creates   a  line  located    in  3D space   with
  //! <aPosition>.  The Location   of <aPosition> is  the
  //! origin of the line.
  Standard_EXPORT PGeom2d_Line(const gp_Ax2d& aPosition);
  
  //! Set the value of the field position with <aPosition>.
  Standard_EXPORT   void Position (const gp_Ax2d& aPosition) ;
  
  //! Returns the value of the field position.
  Standard_EXPORT   gp_Ax2d Position()  const;

PGeom2d_Line(const Storage_stCONSTclCOM& a) : PGeom2d_Curve(a)
{
  
}
    const gp_Ax2d& _CSFDB_GetPGeom2d_Lineposition() const { return position; }



  DEFINE_STANDARD_RTTI(PGeom2d_Line)

protected:




private: 


  gp_Ax2d position;


};







#endif // _PGeom2d_Line_HeaderFile
