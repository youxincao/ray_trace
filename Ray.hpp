#ifndef _RAY_H_
#define _RAY_H_

#include "math.h"

class Ray {
	Vect origin , direction ; 

public :
	Ray () ;
	Ray ( Vect , Vect );

	// Method function
	Vect getRayOrigin() { return origin ; }
	Vect getRayDirection() { return direction ; }
};

Ray::Ray()
{
	origin = Vect( 0 , 0, 0 );
	direction = Vect( 1 , 0 , 0 ); 
}

Ray::Ray( Vect o , Vect d )
{
	origin = o ;
	direction = d ;
}

#endif /* _VECT_H_ */
