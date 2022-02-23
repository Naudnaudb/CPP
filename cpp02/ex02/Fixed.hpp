#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int			_nb;
		static int	_fraction;
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(int const n);
		Fixed(float const n);
		~Fixed();

		Fixed&	operator=(Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator> (Fixed const &src) const;
		bool	operator< (Fixed const &src) const;
		bool	operator>=(Fixed const &src) const;
		bool	operator<=(Fixed const &src) const;
		bool	operator==(Fixed const &src) const;
		bool	operator!=(Fixed const &src) const;

		Fixed	operator+(Fixed const &src) const;
		Fixed	operator-(Fixed const &src) const;
		Fixed	operator*(Fixed const &src) const;
		Fixed	operator/(Fixed const &src) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		const static Fixed	&min(Fixed const &a, Fixed const &b);
		const static Fixed	&max(Fixed const &a, Fixed const &b);
};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);
Fixed const		&min(Fixed const &a, Fixed const &b);
Fixed const		&max(Fixed const &a, Fixed const &b);

#endif
