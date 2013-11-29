#ifndef _LIGHT_H_
#define _LIGHT_H_

#include "Vect.hpp"
#include "Color.hpp"

class Light
{
	Vect position ;
	Color color ;
	
public:
    Light();
	Light( Vect , Color );

	// Get function
	Vect getLightPosition ( ) { return position ; }
	Color getLightColor( ) { return color ; }
	
}; 

Light::Light()
{
	position = Vect( 0 , 0, 0);
	color = Color( 1 , 1 ,1 , 0  );
}

Light::Light( Vect p , Color c )
{
	position = p ;
	color = c ; 
}

#endif /* _LIGHT_H_ */
