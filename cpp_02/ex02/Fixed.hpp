#include <iostream>
//#include <>

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

		friend std::ostream&operator<<(std::ostream &os, const Fixed &obj);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&		min(Fixed &fix1, Fixed &fix2);
		static const Fixed&	min(const Fixed &fix1, const Fixed &fix2);
		static Fixed&		max(Fixed &fix1, Fixed &fix2);
		static const Fixed&	max(const Fixed &fix1, const Fixed &fix2);

		Fixed&	operator=(const Fixed &fixed);

		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
		Fixed	operator/(const Fixed &fixed);
		Fixed	operator*(const Fixed &fixed);

		Fixed	operator++(int);
		Fixed&	operator++();
		Fixed	operator--(int);
		Fixed&	operator--();

		bool	operator<(const Fixed &fixed);
		bool	operator>(const Fixed &fixed);
		bool	operator<=(const Fixed &fixed);
		bool	operator>=(const Fixed &fixed);
		bool	operator==(const Fixed &fixed);
		bool	operator!=(const Fixed &fixed);
		



};
