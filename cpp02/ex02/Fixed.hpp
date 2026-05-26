
#include <iostream>
#include <string>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();

		Fixed(const int value);
		Fixed(const float value);
		
		~Fixed();
		
		Fixed(const Fixed& fixed);

		Fixed& operator=(const Fixed& fixed);

		bool operator>(const Fixed& fixed);
		bool operator<(const Fixed& fixed);
		bool operator>=(const Fixed& fixed);
		bool operator<=(const Fixed& fixed);
		bool operator==(const Fixed& fixed);
		bool operator!=(const Fixed& fixed);
		Fixed operator+(const Fixed& fixed) const;
		Fixed operator-(const Fixed& fixed) const;
		Fixed operator*(const Fixed& fixed) const;
		Fixed operator/(const Fixed& fixed) const;
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		
		int getRawBits(void) const ;
		void setRawBits(int const raw);
		
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
