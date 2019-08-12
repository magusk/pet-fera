//  file:  date.h
//  author:  Bernt  A  Oedegaard.
#ifndef _DATE_H_
#define _DATE_H_
	#include<iostream>

	using namespace std;

	class date {
		protected:
			int year_;
			int month_;
			int day_;

		public:
			date();
			date(const int &d, const int& m, const int& y);

			bool valid(void) const;
			int day() const;
			int month() const;
			int year() const;

			void set_day (const int& day);
			void set_month (const int& month);
			void set_year (const int& year);

			int transform_in_days();

			date operator++();
			date operator++(int);

			date operator--();
			date operator--(int);
			int operator- (date data_two);
			friend ostream& operator<<(ostream& os, const date& d);

	};

		bool operator== (const date&, const date&);
		bool operator!= (const date&, const date&);
		bool operator< (const date&, const date&);
		bool operator> (const date&, const date&);
		bool operator<= (const date&, const date&);
		bool operator>= (const date&, const date&);


		

#endif

