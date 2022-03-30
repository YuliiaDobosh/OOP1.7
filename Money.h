#pragma once
#include <string>
using namespace std;

class Money
{
	int h500 ; int h200; int h100; int h50; int h20; int h10; int h5; int h2; int h1;
	int k50 ;int k25; int k10; int k5; int k2; int k1;
public:

	void setH500(const int h) { h500 = h; };
	void setH200(const int h) { h200 = h; };
	void setH100(const int h) { h100 = h; };
	void setH50(const int h) { h50 = h; };
	void setH20(const int h) { h20 = h; };
	void setH10(const int h) { h10 = h; };
	void setH5(const int h) { h5 = h; };
	void setH2(const int h) { h2 = h; };
	void setH1(const int h) { h1 = h; };
	void setK50(const int k) { k50 = k; };
	void setK25(const int k) { k25 = k; };
	void setK10(const int k) { k10 = k; };
	void setK5(const int k) { k5 = k; };
	void setK2(const int k) { k2 = k; };
	void setK1(const int k) { k1 = k; };

	int getH500() const { return h500; }
	int getH200() const { return h200; }
	int getH100() const { return h100; }
	int getH50() const { return h50; }
	int getH20() const { return h20; }
	int getH10() const { return h10; }
	int getH5() const { return h5; }
	int getH2() const { return h2; }
	int getH1() const { return h1; }
	int getK50() const { return k50; }
	int getK25() const { return k25; }
	int getK10() const { return k10; }
	int getK5() const { return k5; }
	int getK2() const { return k2; }
	int getK1() const { return k1; }

	double sum() const;
	friend double div(Money m1, Money m2);//ділення сум 
	friend double mult(Money m1, Money m2);//множення сум 
	friend double dod(Money m1, Money m2);//додавання сум 
	friend double ded(Money m1, Money m2);//віднімання сум 
	friend Money div (Money m, double value);//ділення суми на дробове
	friend Money mult(Money m, double value);//множення суми на дробове
	friend bool lessthan(Money f, Money s);//порівняння
	friend bool greatthan(Money f, Money s);//порівняння
	friend bool equal(Money f, Money s);//порівняння
	friend bool nEqual(Money f, Money s);//порівняння
	friend Money doubleToMoney(double value);

	void Display() const;
	void Read();
	bool Init(int h500 = 0, int h200 = 0, int h100 = 0, int h50 = 0, int h20 = 0, int h10 = 0, int h5 = 0, int h2 = 0, int h1 = 0, int k50 = 0, int k25 = 0, int k10 = 0, int k5 = 0, int k2 = 0, int k1 = 0);
	string toString() const;
};
double div(Money m1, Money m2);
double mult(Money m1, Money m2); 
 double dod(Money m1, Money m2);
 double ded(Money m1, Money m2);  
 Money div(Money m, double value);
 Money mult(Money m, double value);
 bool lessthan(Money f, Money s);
 bool greatthan(Money f, Money s);
 bool equal(Money f, Money s);
 bool nEqual(Money f, Money s);
 Money doubleToMoney(double value);
