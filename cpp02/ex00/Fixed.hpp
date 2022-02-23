#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int			_nb;
		static int	_fraction;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed&	operator=(Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
