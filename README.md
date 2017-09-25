#include <iostream>
#include <fstream>

using namespace std;

class date {
	
private:
int day;
int month;
int year;

public:



};
// number of days in each month
const int DAYS[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(void)
{
ofstream fout("date.txt");
date d(12, 6, 2010);
date e(14, 9, 2012);
fout << "For the date is ";

d.write(fout);
fout << endl;
fout << "Day number is " << d.day_number() << endl;
fout << "\nFor the date is ";

e.write(fout);
fout << endl;
fout << "Day number is " << e.day_number() << endl;
fout << "\nDays between ";

d.write(fout);
fout << " and ";
e.write(fout);
fout << " = " << d.days_between(e) << endl;
fout.close();
return 0;

}
