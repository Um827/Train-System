#pragma once
#include<iostream>
#include "back end.h"

namespace Project17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			Train = new train;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ Intro;



	private: System::Windows::Forms::Button^ AddBogieButton;
	private: System::Windows::Forms::Button^ DeleteBogieButton;
	private: System::Windows::Forms::Button^ SearchBogieButton;

	private: System::Windows::Forms::Label^ InputLabel;

	private: System::Windows::Forms::TextBox^ InputIdBox;
	private: System::Windows::Forms::Button^ AddBogieSubmitButton;


	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Label^ AgeLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ GenderLabel;
	private: System::Windows::Forms::TextBox^ NameBox;
	private: System::Windows::Forms::TextBox^ AgeBox;
	private: System::Windows::Forms::TextBox^ GenderBox;




	private: System::Windows::Forms::Button^ AddpassengersforadultsButton;
	private: System::Windows::Forms::Button^ AddpassengersforkidsButton;
	private: System::Windows::Forms::Label^ OcuupationLabel;

	private: System::Windows::Forms::TextBox^ OccupationBox;
	private: System::Windows::Forms::Label^ QualificationLabel;

	private: System::Windows::Forms::TextBox^ QualificationBox;
	private: System::Windows::Forms::Label^ NICLabel;

	private: System::Windows::Forms::Label^ B_Form_NoLabel;

	private: System::Windows::Forms::TextBox^ NICBox;
	private: System::Windows::Forms::TextBox^ B_Form_NoBox;
	private: System::Windows::Forms::Button^ ViewTrainButton;

	private: System::Windows::Forms::Label^ printlabel;
	private: System::Windows::Forms::Button^ ViewBogieButton;
	private: System::Windows::Forms::Button^ RemoveBogieSubmitButton;
	private: System::Windows::Forms::Button^ SearchBogieSubmitButton;
	private: System::Windows::Forms::Label^ TrainInfoLabel;
	private: System::Windows::Forms::Button^ AdultInfoSubmit;
	private: System::Windows::Forms::Button^ AdultIDSubmit;
	private: System::Windows::Forms::Button^ KidInfoSubmit;
	private: System::Windows::Forms::Button^ KidSubmit;
	private: System::Windows::Forms::Button^ ViewBogieInfoSubmit;
	private: System::Windows::Forms::Label^ AdultInfoBogie;
	private: System::Windows::Forms::Label^ KidInfoBogie;
	private: System::Windows::Forms::PictureBox^  TrainPicture;




















			 train* Train;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->Intro = (gcnew System::Windows::Forms::Label());
				 this->AddBogieButton = (gcnew System::Windows::Forms::Button());
				 this->DeleteBogieButton = (gcnew System::Windows::Forms::Button());
				 this->SearchBogieButton = (gcnew System::Windows::Forms::Button());
				 this->InputLabel = (gcnew System::Windows::Forms::Label());
				 this->InputIdBox = (gcnew System::Windows::Forms::TextBox());
				 this->AddBogieSubmitButton = (gcnew System::Windows::Forms::Button());
				 this->BackButton = (gcnew System::Windows::Forms::Button());
				 this->NameLabel = (gcnew System::Windows::Forms::Label());
				 this->AgeLabel = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->GenderLabel = (gcnew System::Windows::Forms::Label());
				 this->NameBox = (gcnew System::Windows::Forms::TextBox());
				 this->AgeBox = (gcnew System::Windows::Forms::TextBox());
				 this->GenderBox = (gcnew System::Windows::Forms::TextBox());
				 this->AddpassengersforadultsButton = (gcnew System::Windows::Forms::Button());
				 this->AddpassengersforkidsButton = (gcnew System::Windows::Forms::Button());
				 this->OcuupationLabel = (gcnew System::Windows::Forms::Label());
				 this->OccupationBox = (gcnew System::Windows::Forms::TextBox());
				 this->QualificationLabel = (gcnew System::Windows::Forms::Label());
				 this->QualificationBox = (gcnew System::Windows::Forms::TextBox());
				 this->NICLabel = (gcnew System::Windows::Forms::Label());
				 this->B_Form_NoLabel = (gcnew System::Windows::Forms::Label());
				 this->NICBox = (gcnew System::Windows::Forms::TextBox());
				 this->B_Form_NoBox = (gcnew System::Windows::Forms::TextBox());
				 this->ViewTrainButton = (gcnew System::Windows::Forms::Button());
				 this->printlabel = (gcnew System::Windows::Forms::Label());
				 this->ViewBogieButton = (gcnew System::Windows::Forms::Button());
				 this->RemoveBogieSubmitButton = (gcnew System::Windows::Forms::Button());
				 this->SearchBogieSubmitButton = (gcnew System::Windows::Forms::Button());
				 this->TrainInfoLabel = (gcnew System::Windows::Forms::Label());
				 this->AdultInfoSubmit = (gcnew System::Windows::Forms::Button());
				 this->AdultIDSubmit = (gcnew System::Windows::Forms::Button());
				 this->KidInfoSubmit = (gcnew System::Windows::Forms::Button());
				 this->KidSubmit = (gcnew System::Windows::Forms::Button());
				 this->ViewBogieInfoSubmit = (gcnew System::Windows::Forms::Button());
				 this->AdultInfoBogie = (gcnew System::Windows::Forms::Label());
				 this->KidInfoBogie = (gcnew System::Windows::Forms::Label());
				 this->TrainPicture = (gcnew System::Windows::Forms::PictureBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TrainPicture))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // Intro
				 // 
				 this->Intro->AutoSize = true;
				 this->Intro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->Intro->ForeColor = System::Drawing::Color::Transparent;
				 this->Intro->Location = System::Drawing::Point(281, 7);
				 this->Intro->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->Intro->Name = L"Intro";
				 this->Intro->Size = System::Drawing::Size(259, 33);
				 this->Intro->TabIndex = 0;
				 this->Intro->Text = L"TRAIN PROJECT";
				 // 
				 // AddBogieButton
				 // 
				 this->AddBogieButton->BackColor = System::Drawing::Color::DarkRed;
				 this->AddBogieButton->ForeColor = System::Drawing::Color::White;
				 this->AddBogieButton->Location = System::Drawing::Point(15, 457);
				 this->AddBogieButton->Margin = System::Windows::Forms::Padding(2);
				 this->AddBogieButton->Name = L"AddBogieButton";
				 this->AddBogieButton->Size = System::Drawing::Size(74, 20);
				 this->AddBogieButton->TabIndex = 2;
				 this->AddBogieButton->Text = L"AddBogie";
				 this->AddBogieButton->UseVisualStyleBackColor = false;
				 this->AddBogieButton->Click += gcnew System::EventHandler(this, &MyForm::AddBogieButton_Click);
				 // 
				 // DeleteBogieButton
				 // 
				 this->DeleteBogieButton->BackColor = System::Drawing::Color::DarkRed;
				 this->DeleteBogieButton->ForeColor = System::Drawing::Color::White;
				 this->DeleteBogieButton->Location = System::Drawing::Point(106, 457);
				 this->DeleteBogieButton->Margin = System::Windows::Forms::Padding(2);
				 this->DeleteBogieButton->Name = L"DeleteBogieButton";
				 this->DeleteBogieButton->Size = System::Drawing::Size(79, 20);
				 this->DeleteBogieButton->TabIndex = 3;
				 this->DeleteBogieButton->Text = L"DeleteBogie";
				 this->DeleteBogieButton->UseVisualStyleBackColor = false;
				 this->DeleteBogieButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteBogieButton_Click);
				 // 
				 // SearchBogieButton
				 // 
				 this->SearchBogieButton->BackColor = System::Drawing::Color::DarkRed;
				 this->SearchBogieButton->ForeColor = System::Drawing::Color::White;
				 this->SearchBogieButton->Location = System::Drawing::Point(201, 457);
				 this->SearchBogieButton->Margin = System::Windows::Forms::Padding(2);
				 this->SearchBogieButton->Name = L"SearchBogieButton";
				 this->SearchBogieButton->Size = System::Drawing::Size(80, 20);
				 this->SearchBogieButton->TabIndex = 4;
				 this->SearchBogieButton->Text = L"SearchBogie";
				 this->SearchBogieButton->UseVisualStyleBackColor = false;
				 this->SearchBogieButton->Click += gcnew System::EventHandler(this, &MyForm::SearchBogieButton_Click);
				 // 
				 // InputLabel
				 // 
				 this->InputLabel->AutoSize = true;
				 this->InputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->InputLabel->ForeColor = System::Drawing::Color::White;
				 this->InputLabel->Location = System::Drawing::Point(149, 93);
				 this->InputLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->InputLabel->Name = L"InputLabel";
				 this->InputLabel->Size = System::Drawing::Size(150, 31);
				 this->InputLabel->TabIndex = 6;
				 this->InputLabel->Text = L"ENTER ID";
				 this->InputLabel->Visible = false;
				 // 
				 // InputIdBox
				 // 
				 this->InputIdBox->Location = System::Drawing::Point(289, 102);
				 this->InputIdBox->Margin = System::Windows::Forms::Padding(2);
				 this->InputIdBox->Name = L"InputIdBox";
				 this->InputIdBox->Size = System::Drawing::Size(128, 20);
				 this->InputIdBox->TabIndex = 7;
				 this->InputIdBox->Visible = false;
				 // 
				 // AddBogieSubmitButton
				 // 
				 this->AddBogieSubmitButton->BackColor = System::Drawing::Color::DarkRed;
				 this->AddBogieSubmitButton->ForeColor = System::Drawing::Color::White;
				 this->AddBogieSubmitButton->Location = System::Drawing::Point(320, 123);
				 this->AddBogieSubmitButton->Margin = System::Windows::Forms::Padding(2);
				 this->AddBogieSubmitButton->Name = L"AddBogieSubmitButton";
				 this->AddBogieSubmitButton->Size = System::Drawing::Size(56, 20);
				 this->AddBogieSubmitButton->TabIndex = 8;
				 this->AddBogieSubmitButton->Text = L"Submit";
				 this->AddBogieSubmitButton->UseVisualStyleBackColor = false;
				 this->AddBogieSubmitButton->Visible = false;
				 this->AddBogieSubmitButton->Click += gcnew System::EventHandler(this, &MyForm::AddBogieSubmitButton_Click);
				 // 
				 // BackButton
				 // 
				 this->BackButton->BackColor = System::Drawing::Color::DarkRed;
				 this->BackButton->ForeColor = System::Drawing::Color::White;
				 this->BackButton->Location = System::Drawing::Point(11, 20);
				 this->BackButton->Margin = System::Windows::Forms::Padding(2);
				 this->BackButton->Name = L"BackButton";
				 this->BackButton->Size = System::Drawing::Size(56, 20);
				 this->BackButton->TabIndex = 9;
				 this->BackButton->Text = L"Back";
				 this->BackButton->UseVisualStyleBackColor = false;
				 this->BackButton->Visible = false;
				 this->BackButton->Click += gcnew System::EventHandler(this, &MyForm::BackButton_Click);
				 // 
				 // NameLabel
				 // 
				 this->NameLabel->AutoSize = true;
				 this->NameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->NameLabel->ForeColor = System::Drawing::Color::White;
				 this->NameLabel->Location = System::Drawing::Point(458, 58);
				 this->NameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->NameLabel->Name = L"NameLabel";
				 this->NameLabel->Size = System::Drawing::Size(90, 31);
				 this->NameLabel->TabIndex = 10;
				 this->NameLabel->Text = L"Name";
				 this->NameLabel->Visible = false;
				 // 
				 // AgeLabel
				 // 
				 this->AgeLabel->AutoSize = true;
				 this->AgeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->AgeLabel->ForeColor = System::Drawing::Color::White;
				 this->AgeLabel->Location = System::Drawing::Point(484, 102);
				 this->AgeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->AgeLabel->Name = L"AgeLabel";
				 this->AgeLabel->Size = System::Drawing::Size(65, 31);
				 this->AgeLabel->TabIndex = 11;
				 this->AgeLabel->Text = L"Age";
				 this->AgeLabel->Visible = false;
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->ForeColor = System::Drawing::Color::White;
				 this->label2->Location = System::Drawing::Point(481, 143);
				 this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(0, 13);
				 this->label2->TabIndex = 12;
				 // 
				 // GenderLabel
				 // 
				 this->GenderLabel->AutoSize = true;
				 this->GenderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->GenderLabel->ForeColor = System::Drawing::Color::White;
				 this->GenderLabel->Location = System::Drawing::Point(454, 157);
				 this->GenderLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->GenderLabel->Name = L"GenderLabel";
				 this->GenderLabel->Size = System::Drawing::Size(110, 31);
				 this->GenderLabel->TabIndex = 13;
				 this->GenderLabel->Text = L"Gender";
				 this->GenderLabel->Visible = false;
				 // 
				 // NameBox
				 // 
				 this->NameBox->Location = System::Drawing::Point(537, 69);
				 this->NameBox->Margin = System::Windows::Forms::Padding(2);
				 this->NameBox->Name = L"NameBox";
				 this->NameBox->Size = System::Drawing::Size(116, 20);
				 this->NameBox->TabIndex = 14;
				 this->NameBox->Visible = false;
				 // 
				 // AgeBox
				 // 
				 this->AgeBox->Location = System::Drawing::Point(542, 112);
				 this->AgeBox->Margin = System::Windows::Forms::Padding(2);
				 this->AgeBox->Name = L"AgeBox";
				 this->AgeBox->Size = System::Drawing::Size(116, 20);
				 this->AgeBox->TabIndex = 15;
				 this->AgeBox->Visible = false;
				 // 
				 // GenderBox
				 // 
				 this->GenderBox->Location = System::Drawing::Point(550, 167);
				 this->GenderBox->Margin = System::Windows::Forms::Padding(2);
				 this->GenderBox->Name = L"GenderBox";
				 this->GenderBox->Size = System::Drawing::Size(111, 20);
				 this->GenderBox->TabIndex = 16;
				 this->GenderBox->Visible = false;
				 // 
				 // AddpassengersforadultsButton
				 // 
				 this->AddpassengersforadultsButton->BackColor = System::Drawing::Color::DarkRed;
				 this->AddpassengersforadultsButton->ForeColor = System::Drawing::Color::White;
				 this->AddpassengersforadultsButton->Location = System::Drawing::Point(289, 457);
				 this->AddpassengersforadultsButton->Margin = System::Windows::Forms::Padding(2);
				 this->AddpassengersforadultsButton->Name = L"AddpassengersforadultsButton";
				 this->AddpassengersforadultsButton->Size = System::Drawing::Size(119, 20);
				 this->AddpassengersforadultsButton->TabIndex = 18;
				 this->AddpassengersforadultsButton->Text = L"Addpassengerforadults";
				 this->AddpassengersforadultsButton->UseVisualStyleBackColor = false;
				 this->AddpassengersforadultsButton->Click += gcnew System::EventHandler(this, &MyForm::AddpassengersforadultsButton_Click);
				 // 
				 // AddpassengersforkidsButton
				 // 
				 this->AddpassengersforkidsButton->BackColor = System::Drawing::Color::DarkRed;
				 this->AddpassengersforkidsButton->ForeColor = System::Drawing::Color::White;
				 this->AddpassengersforkidsButton->Location = System::Drawing::Point(416, 458);
				 this->AddpassengersforkidsButton->Margin = System::Windows::Forms::Padding(2);
				 this->AddpassengersforkidsButton->Name = L"AddpassengersforkidsButton";
				 this->AddpassengersforkidsButton->Size = System::Drawing::Size(114, 20);
				 this->AddpassengersforkidsButton->TabIndex = 19;
				 this->AddpassengersforkidsButton->Text = L"Addpassengersforkids";
				 this->AddpassengersforkidsButton->UseVisualStyleBackColor = false;
				 this->AddpassengersforkidsButton->Click += gcnew System::EventHandler(this, &MyForm::AddpassengersforkidsButton_Click);
				 // 
				 // OcuupationLabel
				 // 
				 this->OcuupationLabel->AutoSize = true;
				 this->OcuupationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->OcuupationLabel->ForeColor = System::Drawing::Color::White;
				 this->OcuupationLabel->Location = System::Drawing::Point(415, 213);
				 this->OcuupationLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->OcuupationLabel->Name = L"OcuupationLabel";
				 this->OcuupationLabel->Size = System::Drawing::Size(162, 31);
				 this->OcuupationLabel->TabIndex = 20;
				 this->OcuupationLabel->Text = L"Occupation";
				 this->OcuupationLabel->Visible = false;
				 // 
				 // OccupationBox
				 // 
				 this->OccupationBox->Location = System::Drawing::Point(556, 223);
				 this->OccupationBox->Margin = System::Windows::Forms::Padding(2);
				 this->OccupationBox->Name = L"OccupationBox";
				 this->OccupationBox->Size = System::Drawing::Size(111, 20);
				 this->OccupationBox->TabIndex = 21;
				 this->OccupationBox->Visible = false;
				 // 
				 // QualificationLabel
				 // 
				 this->QualificationLabel->AutoSize = true;
				 this->QualificationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->QualificationLabel->ForeColor = System::Drawing::Color::White;
				 this->QualificationLabel->Location = System::Drawing::Point(404, 270);
				 this->QualificationLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->QualificationLabel->Name = L"QualificationLabel";
				 this->QualificationLabel->Size = System::Drawing::Size(177, 31);
				 this->QualificationLabel->TabIndex = 22;
				 this->QualificationLabel->Text = L"Qualification";
				 this->QualificationLabel->Visible = false;
				 // 
				 // QualificationBox
				 // 
				 this->QualificationBox->Location = System::Drawing::Point(556, 280);
				 this->QualificationBox->Margin = System::Windows::Forms::Padding(2);
				 this->QualificationBox->Name = L"QualificationBox";
				 this->QualificationBox->Size = System::Drawing::Size(111, 20);
				 this->QualificationBox->TabIndex = 23;
				 this->QualificationBox->Visible = false;
				 // 
				 // NICLabel
				 // 
				 this->NICLabel->AutoSize = true;
				 this->NICLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->NICLabel->ForeColor = System::Drawing::Color::White;
				 this->NICLabel->Location = System::Drawing::Point(488, 308);
				 this->NICLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->NICLabel->Name = L"NICLabel";
				 this->NICLabel->Size = System::Drawing::Size(65, 31);
				 this->NICLabel->TabIndex = 24;
				 this->NICLabel->Text = L"NIC";
				 this->NICLabel->Visible = false;
				 // 
				 // B_Form_NoLabel
				 // 
				 this->B_Form_NoLabel->AutoSize = true;
				 this->B_Form_NoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->B_Form_NoLabel->ForeColor = System::Drawing::Color::White;
				 this->B_Form_NoLabel->Location = System::Drawing::Point(410, 213);
				 this->B_Form_NoLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->B_Form_NoLabel->Name = L"B_Form_NoLabel";
				 this->B_Form_NoLabel->Size = System::Drawing::Size(169, 31);
				 this->B_Form_NoLabel->TabIndex = 26;
				 this->B_Form_NoLabel->Text = L"B_Form_No";
				 this->B_Form_NoLabel->Visible = false;
				 // 
				 // NICBox
				 // 
				 this->NICBox->Location = System::Drawing::Point(547, 318);
				 this->NICBox->Margin = System::Windows::Forms::Padding(2);
				 this->NICBox->Name = L"NICBox";
				 this->NICBox->Size = System::Drawing::Size(111, 20);
				 this->NICBox->TabIndex = 27;
				 this->NICBox->Visible = false;
				 // 
				 // B_Form_NoBox
				 // 
				 this->B_Form_NoBox->Location = System::Drawing::Point(556, 223);
				 this->B_Form_NoBox->Margin = System::Windows::Forms::Padding(2);
				 this->B_Form_NoBox->Name = L"B_Form_NoBox";
				 this->B_Form_NoBox->Size = System::Drawing::Size(107, 20);
				 this->B_Form_NoBox->TabIndex = 28;
				 this->B_Form_NoBox->Visible = false;
				 // 
				 // ViewTrainButton
				 // 
				 this->ViewTrainButton->BackColor = System::Drawing::Color::DarkRed;
				 this->ViewTrainButton->ForeColor = System::Drawing::Color::White;
				 this->ViewTrainButton->Location = System::Drawing::Point(542, 457);
				 this->ViewTrainButton->Margin = System::Windows::Forms::Padding(2);
				 this->ViewTrainButton->Name = L"ViewTrainButton";
				 this->ViewTrainButton->Size = System::Drawing::Size(105, 20);
				 this->ViewTrainButton->TabIndex = 29;
				 this->ViewTrainButton->Text = L"View Train Info";
				 this->ViewTrainButton->UseVisualStyleBackColor = false;
				 this->ViewTrainButton->Click += gcnew System::EventHandler(this, &MyForm::ViewTrainButton_Click);
				 // 
				 // printlabel
				 // 
				 this->printlabel->AutoSize = true;
				 this->printlabel->BackColor = System::Drawing::Color::Black;
				 this->printlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->printlabel->ForeColor = System::Drawing::Color::White;
				 this->printlabel->Location = System::Drawing::Point(152, 193);
				 this->printlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->printlabel->Name = L"printlabel";
				 this->printlabel->Size = System::Drawing::Size(0, 25);
				 this->printlabel->TabIndex = 30;
				 this->printlabel->Visible = false;
				 // 
				 // ViewBogieButton
				 // 
				 this->ViewBogieButton->BackColor = System::Drawing::Color::DarkRed;
				 this->ViewBogieButton->ForeColor = System::Drawing::Color::White;
				 this->ViewBogieButton->Location = System::Drawing::Point(663, 457);
				 this->ViewBogieButton->Margin = System::Windows::Forms::Padding(2);
				 this->ViewBogieButton->Name = L"ViewBogieButton";
				 this->ViewBogieButton->Size = System::Drawing::Size(105, 20);
				 this->ViewBogieButton->TabIndex = 39;
				 this->ViewBogieButton->Text = L"View Bogie Info";
				 this->ViewBogieButton->UseVisualStyleBackColor = false;
				 this->ViewBogieButton->Click += gcnew System::EventHandler(this, &MyForm::ViewBogieButton_Click);
				 // 
				 // RemoveBogieSubmitButton
				 // 
				 this->RemoveBogieSubmitButton->BackColor = System::Drawing::Color::DarkRed;
				 this->RemoveBogieSubmitButton->ForeColor = System::Drawing::Color::White;
				 this->RemoveBogieSubmitButton->Location = System::Drawing::Point(320, 123);
				 this->RemoveBogieSubmitButton->Margin = System::Windows::Forms::Padding(2);
				 this->RemoveBogieSubmitButton->Name = L"RemoveBogieSubmitButton";
				 this->RemoveBogieSubmitButton->Size = System::Drawing::Size(56, 20);
				 this->RemoveBogieSubmitButton->TabIndex = 40;
				 this->RemoveBogieSubmitButton->Text = L"Submit";
				 this->RemoveBogieSubmitButton->UseVisualStyleBackColor = false;
				 this->RemoveBogieSubmitButton->Visible = false;
				 this->RemoveBogieSubmitButton->Click += gcnew System::EventHandler(this, &MyForm::RemoveBogieSubmitButton_Click);
				 // 
				 // SearchBogieSubmitButton
				 // 
				 this->SearchBogieSubmitButton->BackColor = System::Drawing::Color::DarkRed;
				 this->SearchBogieSubmitButton->ForeColor = System::Drawing::Color::White;
				 this->SearchBogieSubmitButton->Location = System::Drawing::Point(320, 123);
				 this->SearchBogieSubmitButton->Margin = System::Windows::Forms::Padding(2);
				 this->SearchBogieSubmitButton->Name = L"SearchBogieSubmitButton";
				 this->SearchBogieSubmitButton->Size = System::Drawing::Size(56, 20);
				 this->SearchBogieSubmitButton->TabIndex = 41;
				 this->SearchBogieSubmitButton->Text = L"Submit";
				 this->SearchBogieSubmitButton->UseVisualStyleBackColor = false;
				 this->SearchBogieSubmitButton->Visible = false;
				 this->SearchBogieSubmitButton->Click += gcnew System::EventHandler(this, &MyForm::SearchBogieSubmitButton_Click);
				 // 
				 // TrainInfoLabel
				 // 
				 this->TrainInfoLabel->AutoSize = true;
				 this->TrainInfoLabel->ForeColor = System::Drawing::Color::White;
				 this->TrainInfoLabel->Location = System::Drawing::Point(154, 213);
				 this->TrainInfoLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->TrainInfoLabel->Name = L"TrainInfoLabel";
				 this->TrainInfoLabel->Size = System::Drawing::Size(0, 13);
				 this->TrainInfoLabel->TabIndex = 42;
				 this->TrainInfoLabel->Visible = false;
				 // 
				 // AdultInfoSubmit
				 // 
				 this->AdultInfoSubmit->BackColor = System::Drawing::Color::DarkRed;
				 this->AdultInfoSubmit->ForeColor = System::Drawing::Color::White;
				 this->AdultInfoSubmit->Location = System::Drawing::Point(712, 168);
				 this->AdultInfoSubmit->Margin = System::Windows::Forms::Padding(2);
				 this->AdultInfoSubmit->Name = L"AdultInfoSubmit";
				 this->AdultInfoSubmit->Size = System::Drawing::Size(56, 20);
				 this->AdultInfoSubmit->TabIndex = 43;
				 this->AdultInfoSubmit->Text = L"Submit";
				 this->AdultInfoSubmit->UseVisualStyleBackColor = false;
				 this->AdultInfoSubmit->Visible = false;
				 this->AdultInfoSubmit->Click += gcnew System::EventHandler(this, &MyForm::AdultInfoSubmit_Click);
				 // 
				 // AdultIDSubmit
				 // 
				 this->AdultIDSubmit->BackColor = System::Drawing::Color::DarkRed;
				 this->AdultIDSubmit->ForeColor = System::Drawing::Color::White;
				 this->AdultIDSubmit->Location = System::Drawing::Point(320, 123);
				 this->AdultIDSubmit->Margin = System::Windows::Forms::Padding(2);
				 this->AdultIDSubmit->Name = L"AdultIDSubmit";
				 this->AdultIDSubmit->Size = System::Drawing::Size(56, 20);
				 this->AdultIDSubmit->TabIndex = 44;
				 this->AdultIDSubmit->Text = L"Submit";
				 this->AdultIDSubmit->UseVisualStyleBackColor = false;
				 this->AdultIDSubmit->Visible = false;
				 this->AdultIDSubmit->Click += gcnew System::EventHandler(this, &MyForm::AdultIDSubmit_Click);
				 // 
				 // KidInfoSubmit
				 // 
				 this->KidInfoSubmit->BackColor = System::Drawing::Color::DarkRed;
				 this->KidInfoSubmit->ForeColor = System::Drawing::Color::White;
				 this->KidInfoSubmit->Location = System::Drawing::Point(712, 168);
				 this->KidInfoSubmit->Margin = System::Windows::Forms::Padding(2);
				 this->KidInfoSubmit->Name = L"KidInfoSubmit";
				 this->KidInfoSubmit->Size = System::Drawing::Size(56, 20);
				 this->KidInfoSubmit->TabIndex = 45;
				 this->KidInfoSubmit->Text = L"Submit";
				 this->KidInfoSubmit->UseVisualStyleBackColor = false;
				 this->KidInfoSubmit->Visible = false;
				 this->KidInfoSubmit->Click += gcnew System::EventHandler(this, &MyForm::KidInfoSubmit_Click);
				 // 
				 // KidSubmit
				 // 
				 this->KidSubmit->BackColor = System::Drawing::Color::DarkRed;
				 this->KidSubmit->ForeColor = System::Drawing::Color::White;
				 this->KidSubmit->Location = System::Drawing::Point(320, 123);
				 this->KidSubmit->Margin = System::Windows::Forms::Padding(2);
				 this->KidSubmit->Name = L"KidSubmit";
				 this->KidSubmit->Size = System::Drawing::Size(56, 20);
				 this->KidSubmit->TabIndex = 46;
				 this->KidSubmit->Text = L"Submit";
				 this->KidSubmit->UseVisualStyleBackColor = false;
				 this->KidSubmit->Visible = false;
				 this->KidSubmit->Click += gcnew System::EventHandler(this, &MyForm::KidSubmit_Click);
				 // 
				 // ViewBogieInfoSubmit
				 // 
				 this->ViewBogieInfoSubmit->BackColor = System::Drawing::Color::DarkRed;
				 this->ViewBogieInfoSubmit->ForeColor = System::Drawing::Color::White;
				 this->ViewBogieInfoSubmit->Location = System::Drawing::Point(320, 123);
				 this->ViewBogieInfoSubmit->Margin = System::Windows::Forms::Padding(2);
				 this->ViewBogieInfoSubmit->Name = L"ViewBogieInfoSubmit";
				 this->ViewBogieInfoSubmit->Size = System::Drawing::Size(56, 20);
				 this->ViewBogieInfoSubmit->TabIndex = 47;
				 this->ViewBogieInfoSubmit->Text = L"Submit";
				 this->ViewBogieInfoSubmit->UseVisualStyleBackColor = false;
				 this->ViewBogieInfoSubmit->Visible = false;
				 this->ViewBogieInfoSubmit->Click += gcnew System::EventHandler(this, &MyForm::ViewBogieInfoSubmit_Click);
				 // 
				 // AdultInfoBogie
				 // 
				 this->AdultInfoBogie->ForeColor = System::Drawing::Color::White;
				 this->AdultInfoBogie->Location = System::Drawing::Point(164, 69);
				 this->AdultInfoBogie->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->AdultInfoBogie->Name = L"AdultInfoBogie";
				 this->AdultInfoBogie->Size = System::Drawing::Size(251, 387);
				 this->AdultInfoBogie->TabIndex = 48;
				 this->AdultInfoBogie->Visible = false;
				 // 
				 // KidInfoBogie
				 // 
				 this->KidInfoBogie->ForeColor = System::Drawing::Color::White;
				 this->KidInfoBogie->Location = System::Drawing::Point(456, 69);
				 this->KidInfoBogie->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->KidInfoBogie->Name = L"KidInfoBogie";
				 this->KidInfoBogie->Size = System::Drawing::Size(251, 387);
				 this->KidInfoBogie->TabIndex = 49;
				 this->KidInfoBogie->Visible = false;
				 // 
				 // TrainPicture
				 // 
				 this->TrainPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TrainPicture.Image")));
				 this->TrainPicture->Location = System::Drawing::Point(93, 43);
				 this->TrainPicture->Name = L"TrainPicture";
				 this->TrainPicture->Size = System::Drawing::Size(675, 409);
				 this->TrainPicture->TabIndex = 50;
				 this->TrainPicture->TabStop = false;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::Black;
				 this->ClientSize = System::Drawing::Size(829, 496);
				 this->Controls->Add(this->TrainPicture);
				 this->Controls->Add(this->ViewBogieInfoSubmit);
				 this->Controls->Add(this->KidSubmit);
				 this->Controls->Add(this->KidInfoSubmit);
				 this->Controls->Add(this->AdultIDSubmit);
				 this->Controls->Add(this->AdultInfoSubmit);
				 this->Controls->Add(this->TrainInfoLabel);
				 this->Controls->Add(this->SearchBogieSubmitButton);
				 this->Controls->Add(this->RemoveBogieSubmitButton);
				 this->Controls->Add(this->ViewBogieButton);
				 this->Controls->Add(this->printlabel);
				 this->Controls->Add(this->ViewTrainButton);
				 this->Controls->Add(this->B_Form_NoBox);
				 this->Controls->Add(this->NICBox);
				 this->Controls->Add(this->B_Form_NoLabel);
				 this->Controls->Add(this->NICLabel);
				 this->Controls->Add(this->QualificationBox);
				 this->Controls->Add(this->QualificationLabel);
				 this->Controls->Add(this->OccupationBox);
				 this->Controls->Add(this->OcuupationLabel);
				 this->Controls->Add(this->AddpassengersforkidsButton);
				 this->Controls->Add(this->AddpassengersforadultsButton);
				 this->Controls->Add(this->GenderBox);
				 this->Controls->Add(this->AgeBox);
				 this->Controls->Add(this->NameBox);
				 this->Controls->Add(this->GenderLabel);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->AgeLabel);
				 this->Controls->Add(this->NameLabel);
				 this->Controls->Add(this->BackButton);
				 this->Controls->Add(this->AddBogieSubmitButton);
				 this->Controls->Add(this->InputIdBox);
				 this->Controls->Add(this->InputLabel);
				 this->Controls->Add(this->SearchBogieButton);
				 this->Controls->Add(this->DeleteBogieButton);
				 this->Controls->Add(this->AddBogieButton);
				 this->Controls->Add(this->Intro);
				 this->Controls->Add(this->AdultInfoBogie);
				 this->Controls->Add(this->KidInfoBogie);
				 this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->ForeColor = System::Drawing::Color::Black;
				 this->Margin = System::Windows::Forms::Padding(2);
				 this->MinimumSize = System::Drawing::Size(461, 319);
				 this->Name = L"MyForm";
				 this->Text = L"Train System";
				 this->TopMost = true;
				 this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TrainPicture))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
			 static std::string toStandardString(System::String^ string)
			 {
				 using System::Runtime::InteropServices::Marshal;
				 System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
				 char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
				 std::string returnString(charPointer, string->Length);
				 Marshal::FreeHGlobal(pointer);
				 return returnString;
			 }

			 void Home()
			 {
				 this->AddBogieButton->Visible = true;
				 this->DeleteBogieButton->Visible = true;
				 this->SearchBogieButton->Visible = true;
				 this->AddpassengersforadultsButton->Visible = true;
				 this->ViewTrainButton->Visible = true;
				 this->ViewBogieButton->Visible = true;
				 this->AddpassengersforkidsButton->Visible = true;
				 this->BackButton->Visible = false;
				 this->InputIdBox->Visible = false;
				 this->InputIdBox->Text = "";
				 this->InputLabel->Visible = false;
				 this->AddBogieSubmitButton->Visible = false;
				 this->RemoveBogieSubmitButton->Visible = false;
				 this->SearchBogieSubmitButton->Visible = false;
				 this->TrainInfoLabel->Visible = false;
				 this->TrainInfoLabel->Text = "";
				 this->AdultIDSubmit->Visible = false;
				 this->AdultInfoSubmit->Visible = false;
				 this->NameBox->Visible = false;
				 this->NameLabel->Visible = false;
				 this->AgeBox->Visible = false;
				 this->AgeLabel->Visible = false;
				 this->GenderBox->Visible = false;
				 this->GenderLabel->Visible = false;
				 this->OccupationBox->Visible = false;
				 this->OcuupationLabel->Visible = false;
				 this->QualificationBox->Visible = false;
				 this->QualificationLabel->Visible = false;
				 this->NICBox->Visible = false;
				 this->NICLabel->Visible = false;
				 this->B_Form_NoBox->Visible = false;
				 this->B_Form_NoLabel->Visible = false;
				 this->KidInfoSubmit->Visible = false;
				 this->KidSubmit->Visible = false;
				 this->printlabel->Text = "";
				 this->printlabel->Visible = false;
				 this->ViewBogieInfoSubmit->Visible = false;
				 this->AdultInfoBogie->Visible = false;
				 this->AdultInfoBogie->Text = "";
				 this->KidInfoBogie->Visible = false;
				 this->KidInfoBogie->Text = "";
				 this->TrainPicture->Visible = false;

			 }
			 void NotHome()
			 {
				 this->AddBogieButton->Visible = false;
				 this->DeleteBogieButton->Visible = false;
				 this->SearchBogieButton->Visible = false;
				 this->AddpassengersforadultsButton->Visible = false;
				 this->ViewTrainButton->Visible = false;
				 this->ViewBogieButton->Visible = false;
				 this->AddpassengersforkidsButton->Visible = false;
				 this->BackButton->Visible = true;
				 this->InputIdBox->Visible = true;
				 this->InputLabel->Visible = true;
				 this->TrainPicture->Visible = false;
			 }
#pragma endregion



	private: System::Void AddBogieButton_Click(System::Object^ sender, System::EventArgs^ e) {
		NotHome();
		this->AddBogieSubmitButton->Visible = true;
		this->TrainPicture->Visible = false;
	}
	private: System::Void AddBogieSubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		string ID = toStandardString(this->InputIdBox->Text);
		int id = atoi(ID.c_str());

		Train->addBogie(id);

		this->InputIdBox->Text = "";
	}
	private: System::Void DeleteBogieButton_Click(System::Object^ sender, System::EventArgs^ e) {
		NotHome();
		this->RemoveBogieSubmitButton->Visible = true;
	}
	private: System::Void RemoveBogieSubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		string ID = toStandardString(this->InputIdBox->Text);
		int id = atoi(ID.c_str());


		if (Train->removeBogie(id))
		{
			this->printlabel->Text = "REMOVED";
			this->printlabel->Visible = true;
		}
		else
		{
			this->printlabel->Text = "NOT REMOVED";
			this->printlabel->Visible = true;
		}
		this->InputIdBox->Text = "";
	}
	private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Home();
	}
	private: System::Void SearchBogieButton_Click(System::Object^ sender, System::EventArgs^ e) {
		NotHome();
		this->SearchBogieSubmitButton->Visible = true;
	}
	private: System::Void SearchBogieSubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		string ID = toStandardString(this->InputIdBox->Text);
		int id = atoi(ID.c_str());


		if (Train->SearchBogie(id))
		{
			this->printlabel->Text = "FOUND";
			this->printlabel->Visible = true;
		}
		else
		{
			this->printlabel->Text = "NOT FOUND";
			this->printlabel->Visible = true;
		}

		this->InputIdBox->Text = "";
	}
	private: System::Void ViewTrainButton_Click(System::Object^ sender, System::EventArgs^ e) {
		NotHome();
		this->InputIdBox->Visible = false;
		this->InputLabel->Visible = false;
		string Text;
		Train->print_train(Text);
		String^ T = gcnew String(Text.c_str());
		this->TrainInfoLabel->Text = T;
		this->TrainInfoLabel->Visible = true;
		this->TrainPicture->Visible = false;
	}
	private: System::Void AddpassengersforadultsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		NotHome();
		this->AdultIDSubmit->Visible = true;
	}
	private: System::Void AdultInfoSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

		string ID = toStandardString(this->InputIdBox->Text);
		int id = atoi(ID.c_str());
		string Name = toStandardString(this->NameBox->Text);
		string Age = toStandardString(this->AgeBox->Text);
		int AGE = atoi(Age.c_str());
		string Gender = toStandardString(this->GenderBox->Text);
		string Occupation = toStandardString(this->OccupationBox->Text);
		string Qualification = toStandardString(this->QualificationBox->Text);
		string NIC = toStandardString(this->NICBox->Text);

		Train->AddAdultPassenger(id, Name, AGE, Gender, Occupation, Qualification, NIC);

		this->NameBox->Text = "";
		this->AgeBox->Text = "";
		this->GenderBox->Text = "";
		this->OccupationBox->Text = "";
		this->QualificationBox->Text = "";
		this->NICBox->Text = "";

	}
	private: System::Void AdultIDSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->NameBox->Visible = true;
		this->NameLabel->Visible = true;
		this->AgeBox->Visible = true;
		this->AgeLabel->Visible = true;
		this->GenderBox->Visible = true;
		this->GenderLabel->Visible = true;
		this->OccupationBox->Visible = true;
		this->OcuupationLabel->Visible = true;
		this->QualificationBox->Visible = true;
		this->QualificationLabel->Visible = true;
		this->NICBox->Visible = true;
		this->NICLabel->Visible = true;
		this->InputIdBox->Visible = false;
		this->InputLabel->Visible = false;
		this->AdultIDSubmit->Visible = false;
		this->AdultInfoSubmit->Visible = true;
		this->TrainPicture->Visible = false;
	}
	private: System::Void AddpassengersforkidsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		NotHome();
		this->KidSubmit->Visible = true;
	}
	private: System::Void KidSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->NameBox->Visible = true;
		this->NameLabel->Visible = true;
		this->AgeBox->Visible = true;
		this->AgeLabel->Visible = true;
		this->GenderBox->Visible = true;
		this->GenderLabel->Visible = true;
		this->B_Form_NoBox->Visible = true;
		this->B_Form_NoLabel->Visible = true;
		this->InputIdBox->Visible = false;
		this->InputLabel->Visible = false;
		this->KidSubmit->Visible = false;
		this->KidInfoSubmit->Visible = true;
		this->TrainPicture->Visible = false;
	}
	private: System::Void KidInfoSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

		string ID = toStandardString(this->InputIdBox->Text);
		int id = atoi(ID.c_str());
		string Name = toStandardString(this->NameBox->Text);
		string Age = toStandardString(this->AgeBox->Text);
		int AGE = atoi(Age.c_str());
		string Gender = toStandardString(this->GenderBox->Text);
		string BForm = toStandardString(this->B_Form_NoBox->Text);

		Train->AddKidPassenger(id, Name, AGE, Gender, BForm);

		this->NameBox->Text = "";
		this->AgeBox->Text = "";
		this->GenderBox->Text = "";
		this->B_Form_NoBox->Text = "";
	}
	private: System::Void ViewBogieButton_Click(System::Object^ sender, System::EventArgs^ e) {
		NotHome();
		this->ViewBogieInfoSubmit->Visible = true;
	}
	private: System::Void ViewBogieInfoSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->InputIdBox->Visible = false;
		this->InputLabel->Visible = false;
		this->ViewBogieInfoSubmit->Visible = false;
		string AdultInfo, KidInfo;
		string ID = toStandardString(this->InputIdBox->Text);
		int id = atoi(ID.c_str());
		Train->print_Bogie(id, AdultInfo, KidInfo);

		String^ AINFO = gcnew String(AdultInfo.c_str());
		String^ KINFO = gcnew String(KidInfo.c_str());

		this->AdultInfoBogie->Text = AINFO;
		this->KidInfoBogie->Text = KINFO;
		this->AdultInfoBogie->Visible = true;
		this->KidInfoBogie->Visible = true;
		this->TrainPicture->Visible = false;
	}
	};
}
