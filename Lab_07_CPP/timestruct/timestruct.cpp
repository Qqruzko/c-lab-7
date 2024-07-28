#include <iostream>
#include <windows.h>
using namespace std;
struct Time
{
	int hours;
	int mins;
	int sec;

	void Showsec()
	{
		int total = hours * 3600 + mins * 60 + sec;
		cout << "Total sec:" << total << '\n';
	}

	Time Settime()
	{
		Time t;
		cout << "Hours" << '\n';
		cin >> t.hours;
		cout << "Mins" << '\n';
		cin >> t.mins;
		cout << "Secs" << '\n';
		cin >> t.sec;

		if (t.sec > 59)
		{
			int buf = t.sec / 60;
			t.mins += buf;
			t.sec = t.sec % 60;
		}
		if (t.mins > 59)
		{
			int buf = t.mins / 60;
			t.hours += buf;
			t.mins = t.mins % 60;
		}
		return t;
	}
	Time Addtime(const Time& t1, const Time& t2)
	{
		Time t3;
		int buf;
		t3.sec = t1.sec + t2.sec;
		if (t3.sec > 59)
		{
			buf = t3.sec / 60;
			t3.mins += buf;
			t3.sec = t3.sec % 60;
		}
		t3.mins += t1.mins + t2.mins;
		if (t3.mins > 59)
		{
			buf = t3.mins / 60;
			t3.hours += buf;
			t3.mins = t3.mins % 60;
		}
		t3.hours += t1.hours + t2.hours;
		return t3;

	}
	Time Decrtime(const Time& t1, const Time& t2)
	{
		Time t3;
		int buf;
		if (t1.hours < t2.hours)
		{
			t3.hours = 0;
			t3.mins = 0;
			t3.sec = 0;
			return t3;
		}
		else
		{
			t3.hours = t1.hours - t2.hours;
			if (t1.mins < t2.mins)
			{
				buf = t1.mins + 60;
				t3.mins = buf - t2.mins;
				t3.hours--;
			}
			else
			{
				t3.mins = t1.mins - t2.mins;
			}
			if (t1.sec < t2.sec)
			{
				buf = t1.sec + 60;
				t3.sec = buf - t2.sec;
				t3.mins--;
			}
			else
			{
				t3.sec = t1.sec - t2.sec;
			}

			return t3;
		}
	}

};

void Printtime(Time t)
{
	cout << "Hours: " << t.hours << " Mins: " << t.mins << " Seconds: " << t.sec << '\n';
}

int main()
{
	Time t1 = t1.Settime();
	Printtime(t1);
	Time t2 = t2.Settime();
	Printtime(t2);
	Time t3 = t3.Decrtime(t1, t2);
	Printtime(t3);
}