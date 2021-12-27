
#include "MyForm.h"
#include <Windows.h>
#include <iostream>
#include "string"
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

	double dis() {
		double dis = (b*b) -((4)*a * c);
		return dis;
	}
};


class first  : public Data {
public:
	virtual double count(){
		double res = -b + (System::Math::Sqrt(dis())/2* a);
		return res;
	}
};

class second : public first{
public:
	double count() override {
		double res = -b - (System::Math::Sqrt(dis())/2*a);
		return res;
	}
};




System::Void Course::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	label5->Text = "";
	label6->Text = "";


	first  fir;
	second sec;

	
	fir.a = Convert::ToDouble(textBox1->Text);
	fir.b = Convert::ToDouble(textBox2->Text);
	fir.c = Convert::ToDouble(textBox3->Text);

	if (fir.dis() > 0) {
		label5->Text = Convert::ToString(fir.count());
		label6->Text = Convert::ToString(sec.count());
	}
	else if (fir.dis() == 0) {
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

