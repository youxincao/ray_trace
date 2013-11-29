#ifndef _COLOR_H_
#define _COLOR_H_

class Color {
	double red , green , blue , special ;

public :
	Color() ;
	Color( double , double , double , double );

	//method function
	double getColorRed( ) { return red ; }
	double getColorGreen( ) { return green ; }
	double getColorBlue( ) { return blue ; }
	double getColorSpecial( ) { return special ; }

	double setColorRed ( double r ) { red = r ; }
	double setColorGreen ( double g ) { green = g  ; }
	double setColorBlue ( double b ) { blue = b ; }
	double setColorSpecial ( double s ) { special = s ; }

	
};

Color::Color()
{
	red = 0.5 ;
	green = 0.5 ;
	blue = 0.5 ; 
}

Color::Color( double r , double g , double b , double s )
{
	red = r ;
	green = g ;
	blue = b ;
	special = s ; 
}

#endif /* _COLOR_H_ */
