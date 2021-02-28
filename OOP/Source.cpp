#include <iostream>

using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int second;

public:
	Time() { hour = minute = second = 0; }
	Time(int a, int b, int c) { hour = a; minute = b; second = c; }
	~Time() {};

	int Get_Hour() { return hour; }
	int Get_Min() { return minute; }
	int Get_Sec() { return second; }

	void Set_Hour(void) 
	{ 
		int a;
		p1:cout << "Hour: ";
		cin >> a;
		if (a >= 0 && a < 24) 
		{
			hour = a;
		}
		else
		{
			cout << "Error. Hours value is incorrect" << endl;
			goto p1;
		}
	}
	void Set_Minute(void) 
	{ 
		int b;
		p2:cout << "Minutes: ";
		cin >> b;
		if (b >= 0 && b < 60)
		{
			minute = b;
		}
		else
		{
			cout << "Error. Minutes value is incorrect" << endl;
			goto p2;
		}
	}
	void Set_Sec(void) 
	{ 
		int c;
		p3:cout << "Seconds: ";
		cin >> c;
		if (c >= 0 && c < 60)
		{
			second = c;
		}
		else
		{
			cout << "Error. Seconds value is incorrect" << endl;
			goto p3;
		}
	}
	void Print1(void);
	void Print2(void);
};

void Time::Print1(void) 
{
	cout << hour << ':' << minute << ':' << second << endl;
}
void Time::Print2(void)
{
	cout << hour << " hours " << minute << " minutes " << second << " seconds " << endl;
}

int main()
{
	Time obj;
	obj.Set_Hour();
	obj.Set_Minute();
	obj.Set_Sec();

	cout << "Hour - " << obj.Get_Hour() << endl;
	cout << "Minute - " << obj.Get_Min() << endl;
	cout << "Second - " << obj.Get_Sec() << endl;

	obj.Print1();
	obj.Print2();
}