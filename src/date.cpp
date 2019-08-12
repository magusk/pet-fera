#include "date.h"

/////////////////////////////  construction  //////////
date::date(const int& d, const int& m, const int& y){
	day_ = d;
	month_ = m;
	year_ = y;
}

////////////////////////////  inline  definitions  //////////
date::date(){
	year_ = 0;
	month_ = 0;
	day_ = 0;
}

int date::day()const{return day_;};
int date::month()const{return month_;};
int date::year()const{return year_;};

void date::set_day(const int& day){date::day_ = day;};
void date::set_month(const int& month){date::month_ = month;};
void date::set_year(const int& year){date::year_ = year;};

bool date::valid()const{
	//  This  function  will  check  the  given  date  is  valid  or  not.
	//  If  the  date  is  not  valid  then  it  will  return  the  value  false.
	//    Need  some  more  checks  on  the  year,  though
	if (year_ < 0)
		return false;
	if (month_ > 12 || month_ < 1)
		return false;
	if (day_ > 31 || day_ < 1)
		return false;
	if (day_ == 31 && (month_ == 2 || month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11))
		return false;
	if (day_ == 30 && month_ == 2)
		return false;
	if (year_ < 2000){
		if ((day_==29 && month_ == 2) && !((year_-1900)%4==0))
			return false;
	}
	if (year_ > 2000){
		if ((day_==29 && month_ == 2) && !((year_-2000)%4==0))
			return false;
	}
	return true;
}

int date::transform_in_days (){
	int numero_dias = 0;
	numero_dias += year_ * 365;
	if (month_ == 2)
		numero_dias += 31;
	else if (month_ == 3)
		numero_dias += 59;
	else if (month_ == 4)
		numero_dias += 90;
	else if (month_ == 5)
		numero_dias += 120;
	else if (month_ == 6)
		numero_dias += 151;
	else if (month_ == 7)
		numero_dias += 181;
	else if (month_ == 8)
	 	numero_dias += 212;
	else if (month_ == 9)
		numero_dias += 243;
	else if (month_ == 10)
		numero_dias += 273;
	else if (month_ == 11)
		numero_dias += 304;
	else
		numero_dias += 334;
	if (month_ >2 && year_%4==0)
		numero_dias += 1;
	numero_dias += day_;
	return numero_dias;
}

int date::operator- (date data_two){
	return transform_in_days() - data_two.transform_in_days();
}

ostream& operator<<(ostream& os, const date& d){
	os<<d.day_<<"/"<<d.month_<<"/"<<d.year_;
	return os;
}