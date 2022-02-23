#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int			_nb;
		static int	_fraction;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed(int const n);
		Fixed(float const n);
		Fixed&	operator=(Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);

#endif
