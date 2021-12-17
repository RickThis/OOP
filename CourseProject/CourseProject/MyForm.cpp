
#include "MyForm.h"
#include <Windows.h>
using namespace Course; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

System::Void Course::MyForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Course::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
		this->label5->Text = "";
		this->label6->Text = "";

		double a = System::Convert::ToDouble(this->textBox1->Text);
		double b = System::Convert::ToDouble(this->textBox2->Text);
		double c = System::Convert::ToDouble(this->textBox3->Text);
		double dis = (b * b) - 4 * a * c;
		if (dis > 0) {
			double res1 = -b + System::Math::Sqrt(dis);
			double res2 = -b - System::Math::Sqrt(dis);
			this->label5->Text = "Solution 1:" + System::Convert::ToString(res1 / (2 * a));
			this->label6->Text = "Solution 2:" + System::Convert::ToString(res2 / (2 * a));
		}
		else if (dis == 0) {
			double res1 = -b + System::Math::Sqrt(dis);
			this->label5->Text = "Solution 1:" + System::Convert::ToString(res1 / (2 * a));
		}
		else {
			this->label5->Text = "The equation does not have any solutions";

	};
}

System::Void Course::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

