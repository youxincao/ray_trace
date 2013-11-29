#ifndef _CAMERA_H_
#define _CAMERA_H_

#include "Vect.hpp"

class Camera {
	Vect campos , camdir , camright , camdown ;

public :
	Camera() ;
	Camera( Vect , Vect , Vect , Vect );
 
	Vect getCameraPosition( ) { return campos  ; }
	Vect getCameraDirection( ) { return camdir ; }
	Vect getCameraRight( ) { return camright  ; }
	Vect getCameraDown( ) { return camdown  ; }
};

Camera::Camera()
{
	campos = Vect( 0 , 0 , 0 ) ;
	camdir = Vect( 0 , 0 , 1 );
	camright = Vect( 0 , 0, 0 );
	camdown = Vect( 0 , 0, 0 );
}

Camera::Camera( Vect pos , Vect dir , Vect right , Vect down)
{
	campos = pos ; 
	camdir = dir ; 
	camright = right ; 
	camdown = down ; 
}

#endif /* _CAMERA_H_ */
