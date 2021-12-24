
#include "MyForm.h"
#include <Windows.h>
using namespace Course; // Название проекта




int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

ref class Data{
public:
	String^ index = "Index ";
	String^ solution = "Solution ";
	double a;
	double b;
	double c;
	
	double count() {

		double dis = (this->b * this->b) - 4 * this->a * this->c;
		return dis;
	}
	virtual double count1(){
		double res = -(this->b) + System::Math::Sqrt(count());
		return res;
	}

};

ref class first : public Data {
public:
	String^ lable5;
	String^ digit = "1";
	double count1() override {
		double res = -b - System::Math::Sqrt(count());
		return res;
	}
	double r1 = count1() / 2 * a;
};

ref class second : public Data {
public:
	String^ lable6;
	String^ digit = "2";
	double r2 = count() / 2 * a;
};

ref class third : public Data {
public:
	String^ digit = "3";
	

};



System::Void Course::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	first  obj1;
	second obj2;
	
	this->label5->Text = "";
	this->label6->Text = "";
	obj1.lable5 = this->label5->Text;
	obj2.lable6 = this->label6->Text;

	obj1.a = System::Convert::ToDouble(this->textBox1->Text);
	obj1.b = System::Convert::ToDouble(this->textBox2->Text);
	obj1.c = System::Convert::ToDouble(this->textBox3->Text);
	if (obj1.count() > 0) {
		this->label5->Text = obj1.solution + obj1.digit + ":" + System::Convert::ToString(obj1.r1);
		this->label6->Text = obj2.solution + obj2.digit + ":" + System::Convert::ToString(obj2.r2);
	}
	else if (obj1.count() == 0) {

		double res1 = -b + System::Math::Sqrt(obj1.count());
		this->label5->Text = obj1.solution + obj1.digit + ":" + System::Convert::ToString(res1 / (2 * a));
	}
	else {
		this->label5->Text = "The equation does not have any solutions";

	};
}


System::Void Course::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	first  obj1;
	second obj2;
	third  obj3;
	label2->Text = obj1.a + obj1.digit;
	label3->Text = obj2.a + obj2.digit;
	label4->Text = obj3.a + obj3.digit;
	return System::Void();
}

