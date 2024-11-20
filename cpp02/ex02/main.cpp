#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	a = 5;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "le plus grands des deux est b : "<< Fixed::max( a, b ) << std::endl;
	std::cout << "le plus petit des deux est a : "<< Fixed::min( a, b ) << std::endl;
	if (a > b)
		std::cout << "a est plus grand que b" << std::endl;
	else if (a < b)
		std::cout << "a est plus petit que b" << std::endl;
	if (a == b)
		std::cout << "a et b sont egaux" << std::endl;
	else if (a != b)
		std::cout << "a et b ne sont pas egaux" << std::endl;
	std::cout << "le resultat de a + b est : " << a + b << std::endl;
	std::cout << "le resultat de a - b est : " << a - b << std::endl;
	std::cout << "le resultat de a / b est : " << a / b << std::endl;
	std::cout << "le resultat de a * b est : " << a * b << std::endl;
	return 0;
}
