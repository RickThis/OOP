
#include "MyForm.h"
#include <Windows.h>
#include <iostream>
#include "string"
#include <fstream>
using namespace Course; // Название проекта
using namespace std;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

class Data  {
	
public:
	double a;
	double b;
	double c;

	virtual double count() {
		double dis = (b * b) - ((4) * a * c);
		return dis;
	}
	
};


class first  : public Data {
public:
	double count() override {
		if (a == 0) {
			throw a;
		}
		double res = (-b + Math::Sqrt(::Data::count())) / (2 * a);
		return res;
	}
	first(double am, double bm, double cm) {
		a = am;
		b = bm;
		c = cm;
	}
};

class second : public Data{

public:
	double count() override {
		if (a == 0) {
			throw a;
		}
		double res = (-b - (Math::Sqrt(::Data::count())))/(2*a);
		return res;
	}
	second(double am, double bm, double cm) {
		a = am;
		b = bm;
		c = cm;
	}
};





System::Void Course::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	label5->Text = "";
	label6->Text = "";

	first  fir(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	second sec(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));

	if (fir.::Data::count() > 0) {
		label5->Text = Convert::ToString(fir.count());
		label6->Text = Convert::ToString(sec.count());
	}
	else if (fir.::Data::count() == 0) {
		label5->Text = Convert::ToString(fir.count());
	}
	else {
		label5->Text = "The equation has no any solutions!";
	}
	
}


System::Void Course::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	label2->Text = "number 1";
	label3->Text = "number 2";
	label4->Text = "number 3";
	return System::Void();
}
System::Void Course::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	fstream a;
	try
	{
		a.open("def.txt");
		string res = "";
		String^ out;
		int c = 1;
		while (!a.eof()) {
			a >> res;
			if (res != " " && res != "\n") {
				out = gcnew System::String(res.c_str());
				switch (c)
				{
				case 1:
				{
					this->textBox1->Text = out;
					c++;
					break;
				}
				case 2:
				{
					this->textBox2->Text = out;
					c++;
					break;
				}case 3:
				{
					this->textBox3->Text = out;
					c++;
					break;
				}
				default:
					break;
				}
			}
		}
	}
	catch (const std::exception& ex)
	{
		throw ex.what();
	}
	return System::Void();
}
