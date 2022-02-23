#include <iostream>

#include "Fixed.hpp"

int Fixed::_fraction = 8;

Fixed::Fixed(): _nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(Fixed const &src) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src) {
		_nb = src.getRawBits();
	}
	return *this;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _nb;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_nb = raw;
}
