#include <iostream>
using namespace std;
int main() {
	string month, time, day;
	string eng_mon[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int year, mon, dayarr[2] = {}, count = 0, hour, min, totalmin;
	cin >> month >> day >> year >> time;
	
	int m_arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {		//연도
		m_arr[1] = 29;
		totalmin = 366 * 24 * 60;
	}
	else
		totalmin = 365 * 24 * 60;

	int daysum = 0;

	for (int i = 0; i < 12; i++) {		//월
		if (month == eng_mon[i]) {
			for (int j = 0; j < i; j++) {
				daysum += m_arr[j];
			}
			break;
		}
	}	

	for (int i = 0; i < day.length() - 1; i++) {		//일
		dayarr[i] = day[i] - '0';
		count++;
	}

	if (count == 1)	
		daysum += dayarr[0];
	else if (count == 2)
		daysum += dayarr[0] * 10 + dayarr[1];
	daysum--;

	if (time[0] == '0') {					//시간
		hour = time[1] - '0';
	}
	else
		hour = (time[0] - '0') * 10 + (time[1] - '0');

	if (time[3] == '0') {					//분
		min = time[4] - '0';
	}
	else
		min = (time[3] - '0') * 10 + (time[4] - '0');

	int minsum = daysum * 24 * 60 + hour * 60 + min;
    
	double result = (double)minsum / totalmin * 100;
	printf("%0.9f\n", result);
}