// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Texture2D_HeaderFile
#define _Graphic3d_Texture2D_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Graphic3d_Texture2D.hxx>

#include <Graphic3d_NameOfTexture2D.hxx>
#include <Graphic3d_TextureMap.hxx>
#include <Graphic3d_TypeOfTexture.hxx>
#include <Image_PixMap_Handle.hxx>
#include <Standard_Integer.hxx>
class Standard_OutOfRange;
class TCollection_AsciiString;


//! This abstract class for managing 2D textures
class Graphic3d_Texture2D : public Graphic3d_TextureMap
{

public:

  

  //! Returns the name of the predefined textures or NOT_2D_UNKNOWN
  //! when the name is given as a filename.
  Standard_EXPORT   Graphic3d_NameOfTexture2D Name()  const;
  

  //! Returns the number of predefined textures.
  Standard_EXPORT static   Standard_Integer NumberOfTextures() ;
  

  //! Returns the name of the predefined texture of rank <aRank>
  Standard_EXPORT static   TCollection_AsciiString TextureName (const Standard_Integer theRank) ;




  DEFINE_STANDARD_RTTI(Graphic3d_Texture2D)

protected:

  
  Standard_EXPORT Graphic3d_Texture2D(const TCollection_AsciiString& theFileName, const Graphic3d_TypeOfTexture theType);
  
  Standard_EXPORT Graphic3d_Texture2D(const Graphic3d_NameOfTexture2D theName, const Graphic3d_TypeOfTexture theType);
  
  Standard_EXPORT Graphic3d_Texture2D(const Image_PixMap_Handle& thePixMap, const Graphic3d_TypeOfTexture theType);



private: 


  Graphic3d_NameOfTexture2D myName;


};







#endif // _Graphic3d_Texture2D_HeaderFile
