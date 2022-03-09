#pragma once

namespace Prosit5 {

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

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fichierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ imprimerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ envoyerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graverToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ouvrirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ effectuerUneCopieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ propriétésToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quitterToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	protected:

	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fichierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->effectuerUneCopieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->propriétésToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imprimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->envoyerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graverToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ouvrirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 67);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hello World";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(561, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(765, 68);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 193);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(95, 283);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 24);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Oui";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fichierToolStripMenuItem,
					this->imprimerToolStripMenuItem, this->envoyerToolStripMenuItem, this->graverToolStripMenuItem, this->ouvrirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1253, 33);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fichierToolStripMenuItem
			// 
			this->fichierToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->supprimerToolStripMenuItem,
					this->effectuerUneCopieToolStripMenuItem, this->copierToolStripMenuItem, this->propriétésToolStripMenuItem, this->quitterToolStripMenuItem
			});
			this->fichierToolStripMenuItem->Name = L"fichierToolStripMenuItem";
			this->fichierToolStripMenuItem->Size = System::Drawing::Size(78, 29);
			this->fichierToolStripMenuItem->Text = L"Fichier";
			// 
			// supprimerToolStripMenuItem
			// 
			this->supprimerToolStripMenuItem->Name = L"supprimerToolStripMenuItem";
			this->supprimerToolStripMenuItem->Size = System::Drawing::Size(277, 34);
			this->supprimerToolStripMenuItem->Text = L"Supprimer";
			this->supprimerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::supprimerToolStripMenuItem_Click);
			// 
			// effectuerUneCopieToolStripMenuItem
			// 
			this->effectuerUneCopieToolStripMenuItem->Name = L"effectuerUneCopieToolStripMenuItem";
			this->effectuerUneCopieToolStripMenuItem->Size = System::Drawing::Size(277, 34);
			this->effectuerUneCopieToolStripMenuItem->Text = L"Effectuer une copie...";
			// 
			// copierToolStripMenuItem
			// 
			this->copierToolStripMenuItem->Name = L"copierToolStripMenuItem";
			this->copierToolStripMenuItem->Size = System::Drawing::Size(277, 34);
			this->copierToolStripMenuItem->Text = L"Copier";
			this->copierToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copierToolStripMenuItem_Click);
			// 
			// propriétésToolStripMenuItem
			// 
			this->propriétésToolStripMenuItem->Name = L"propriétésToolStripMenuItem";
			this->propriétésToolStripMenuItem->Size = System::Drawing::Size(277, 34);
			this->propriétésToolStripMenuItem->Text = L"Propriétés";
			// 
			// quitterToolStripMenuItem
			// 
			this->quitterToolStripMenuItem->Name = L"quitterToolStripMenuItem";
			this->quitterToolStripMenuItem->Size = System::Drawing::Size(277, 34);
			this->quitterToolStripMenuItem->Text = L"Quitter";
			// 
			// imprimerToolStripMenuItem
			// 
			this->imprimerToolStripMenuItem->Name = L"imprimerToolStripMenuItem";
			this->imprimerToolStripMenuItem->Size = System::Drawing::Size(101, 29);
			this->imprimerToolStripMenuItem->Text = L"Imprimer";
			// 
			// envoyerToolStripMenuItem
			// 
			this->envoyerToolStripMenuItem->Name = L"envoyerToolStripMenuItem";
			this->envoyerToolStripMenuItem->Size = System::Drawing::Size(91, 29);
			this->envoyerToolStripMenuItem->Text = L"Envoyer";
			// 
			// graverToolStripMenuItem
			// 
			this->graverToolStripMenuItem->Name = L"graverToolStripMenuItem";
			this->graverToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->graverToolStripMenuItem->Text = L"Graver";
			// 
			// ouvrirToolStripMenuItem
			// 
			this->ouvrirToolStripMenuItem->Name = L"ouvrirToolStripMenuItem";
			this->ouvrirToolStripMenuItem->Size = System::Drawing::Size(77, 29);
			this->ouvrirToolStripMenuItem->Text = L"Ouvrir";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(358, 200);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(81, 66);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1253, 497);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		{
			System::String^ chaine;
			System::DateTime^ date = System::DateTime::Now;
			chaine = "Hello World, nous sommes le : " + date->ToString();
			label1->Text = chaine;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void copierToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	copierToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Control | Keys::C);
}
private: System::Void supprimerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}