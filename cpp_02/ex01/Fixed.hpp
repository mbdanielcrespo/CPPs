#include <iostream>

class Fixed
{
	private:
		int 				num;
		static const int	bit_fraction = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();

		Fixed&operator=(const Fixed &fixed);
		friend std::ostream&operator<<(std::ostream &os, const Fixed &obj);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};
