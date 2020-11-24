#pragma once
#include <iostream>
namespace Prosit5App {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ BoxFichiers;
	protected:
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::GroupBox^ BoxContenu;
	private: System::Windows::Forms::Button^ startbutton;
	private: System::Windows::Forms::CheckedListBox^ CBlist;
	private: System::Windows::Forms::Button^ buttonCopyHere;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonCopy;
	private: System::Windows::Forms::Button^ buttonPrevious;
	private: System::Windows::Forms::Label^ labelNameDossier;
	private: System::Windows::Forms::Button^ buttonNext;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private:
		array<String^>^ photos;
		int numtableau;
		String ^PathCopy;
	private: System::Windows::Forms::Button^ buttonCopyDelete;
		   /// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BoxFichiers = (gcnew System::Windows::Forms::GroupBox());
			this->CBlist = (gcnew System::Windows::Forms::CheckedListBox());
			this->startbutton = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->BoxContenu = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCopyDelete = (gcnew System::Windows::Forms::Button());
			this->buttonCopyHere = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonCopy = (gcnew System::Windows::Forms::Button());
			this->buttonPrevious = (gcnew System::Windows::Forms::Button());
			this->labelNameDossier = (gcnew System::Windows::Forms::Label());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BoxFichiers->SuspendLayout();
			this->BoxContenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BoxFichiers
			// 
			this->BoxFichiers->Controls->Add(this->CBlist);
			this->BoxFichiers->Controls->Add(this->startbutton);
			this->BoxFichiers->Location = System::Drawing::Point(2, 226);
			this->BoxFichiers->Name = L"BoxFichiers";
			this->BoxFichiers->Size = System::Drawing::Size(598, 187);
			this->BoxFichiers->TabIndex = 0;
			this->BoxFichiers->TabStop = false;
			this->BoxFichiers->Text = L"Dossiers";
			// 
			// CBlist
			// 
			this->CBlist->FormattingEnabled = true;
			this->CBlist->Location = System::Drawing::Point(6, 74);
			this->CBlist->Name = L"CBlist";
			this->CBlist->Size = System::Drawing::Size(585, 106);
			this->CBlist->TabIndex = 0;
			this->CBlist->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::CBlist_SelectedIndexChanged);
			// 
			// startbutton
			// 
			this->startbutton->Location = System::Drawing::Point(29, 45);
			this->startbutton->Name = L"startbutton";
			this->startbutton->Size = System::Drawing::Size(75, 23);
			this->startbutton->TabIndex = 0;
			this->startbutton->Text = L"start";
			this->startbutton->UseVisualStyleBackColor = true;
			this->startbutton->Click += gcnew System::EventHandler(this, &MyForm::startbutton_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->SelectedPath = L"C:\\Users\\erwan\\OneDrive\\Bureau\\TEST";
			// 
			// BoxContenu
			// 
			this->BoxContenu->Controls->Add(this->buttonCopyDelete);
			this->BoxContenu->Controls->Add(this->buttonCopyHere);
			this->BoxContenu->Controls->Add(this->buttonDelete);
			this->BoxContenu->Controls->Add(this->buttonCopy);
			this->BoxContenu->Controls->Add(this->buttonPrevious);
			this->BoxContenu->Controls->Add(this->labelNameDossier);
			this->BoxContenu->Controls->Add(this->buttonNext);
			this->BoxContenu->Controls->Add(this->pictureBox1);
			this->BoxContenu->Location = System::Drawing::Point(8, 12);
			this->BoxContenu->Name = L"BoxContenu";
			this->BoxContenu->Size = System::Drawing::Size(585, 219);
			this->BoxContenu->TabIndex = 1;
			this->BoxContenu->TabStop = false;
			this->BoxContenu->Text = L"Contenu";
			// 
			// buttonCopyDelete
			// 
			this->buttonCopyDelete->Location = System::Drawing::Point(442, 91);
			this->buttonCopyDelete->Name = L"buttonCopyDelete";
			this->buttonCopyDelete->Size = System::Drawing::Size(137, 46);
			this->buttonCopyDelete->TabIndex = 7;
			this->buttonCopyDelete->Text = L"Copy here and delete the org";
			this->buttonCopyDelete->UseVisualStyleBackColor = true;
			this->buttonCopyDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonCopyDelete_Click);
			// 
			// buttonCopyHere
			// 
			this->buttonCopyHere->Location = System::Drawing::Point(504, 38);
			this->buttonCopyHere->Name = L"buttonCopyHere";
			this->buttonCopyHere->Size = System::Drawing::Size(75, 47);
			this->buttonCopyHere->TabIndex = 6;
			this->buttonCopyHere->Text = L"Copy Here";
			this->buttonCopyHere->UseVisualStyleBackColor = true;
			this->buttonCopyHere->Click += gcnew System::EventHandler(this, &MyForm::buttonCopyHere_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(237, 185);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 23);
			this->buttonDelete->TabIndex = 5;
			this->buttonDelete->Text = L"Delete";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// buttonCopy
			// 
			this->buttonCopy->Location = System::Drawing::Point(237, 143);
			this->buttonCopy->Name = L"buttonCopy";
			this->buttonCopy->Size = System::Drawing::Size(75, 27);
			this->buttonCopy->TabIndex = 4;
			this->buttonCopy->Text = L"Copy";
			this->buttonCopy->UseVisualStyleBackColor = true;
			this->buttonCopy->Click += gcnew System::EventHandler(this, &MyForm::buttonCopy_Click);
			// 
			// buttonPrevious
			// 
			this->buttonPrevious->Location = System::Drawing::Point(36, 163);
			this->buttonPrevious->Name = L"buttonPrevious";
			this->buttonPrevious->Size = System::Drawing::Size(75, 23);
			this->buttonPrevious->TabIndex = 3;
			this->buttonPrevious->Text = L"Previous";
			this->buttonPrevious->UseVisualStyleBackColor = true;
			this->buttonPrevious->Click += gcnew System::EventHandler(this, &MyForm::buttonPrevious_Click);
			// 
			// labelNameDossier
			// 
			this->labelNameDossier->AutoSize = true;
			this->labelNameDossier->Location = System::Drawing::Point(523, 18);
			this->labelNameDossier->Name = L"labelNameDossier";
			this->labelNameDossier->Size = System::Drawing::Size(56, 17);
			this->labelNameDossier->TabIndex = 2;
			this->labelNameDossier->Text = L"Dossier";
			// 
			// buttonNext
			// 
			this->buttonNext->Location = System::Drawing::Point(442, 163);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(75, 23);
			this->buttonNext->TabIndex = 1;
			this->buttonNext->Text = L"Next";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &MyForm::buttonNext_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(161, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 425);
			this->Controls->Add(this->BoxContenu);
			this->Controls->Add(this->BoxFichiers);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->BoxFichiers->ResumeLayout(false);
			this->BoxContenu->ResumeLayout(false);
			this->BoxContenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void startbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ dossiers;
		dossiers = System::IO::Directory::GetDirectories(this->folderBrowserDialog1->SelectedPath);

		this->BoxFichiers->Controls->Clear();
		this->BoxFichiers->Controls->Add(this->CBlist);
		this->CBlist->Items->Clear();
		for each (String ^ dossier in dossiers) {
			this->CBlist->Items->Add(dossier);
		}
		
	}
	private: System::Void CBlist_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->folderBrowserDialog1->SelectedPath = this->CBlist->SelectedItem->ToString();
		this->photos = System::IO::Directory::GetFiles(this->folderBrowserDialog1->SelectedPath);

		this->pictureBox1->ImageLocation = photos[0];
		this->numtableau = 0;
	}
private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {

	if (numtableau >= this->photos->Length -1) {
		numtableau = 0;
		this->pictureBox1->ImageLocation = photos[this->numtableau];
	}
	else if (numtableau < this->photos->Length - 1) {
		this->numtableau = this->numtableau +1;
		this->pictureBox1->ImageLocation = photos[this->numtableau];
	}

}
private: System::Void buttonPrevious_Click(System::Object^ sender, System::EventArgs^ e) {

	if (numtableau <= 0) {
		numtableau = this->photos->Length - 1;
		this->pictureBox1->ImageLocation = photos[this->numtableau];
	}
	else if (numtableau > 0) {
		this->numtableau = this->numtableau - 1;
		this->pictureBox1->ImageLocation = photos[this->numtableau];
	}

}
private: System::Void buttonCopy_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PathCopy = photos[this->numtableau];
}

private: System::Void buttonCopyHere_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::FileStream^ fs = System::IO::File::Create("Copied.PNG");
	System::IO::File::Copy(PathCopy, this->folderBrowserDialog1->SelectedPath + "/Copied.PNG");
}
private: System::Void buttonCopyDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::FileStream^ fs = System::IO::File::Create("Copied.PNG");
	System::IO::File::Copy(PathCopy, this->folderBrowserDialog1->SelectedPath + "/Copied.PNG");
	System::IO::File::Delete(PathCopy);
}

private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::File::Delete(this->pictureBox1->ImageLocation);
}
};
}
