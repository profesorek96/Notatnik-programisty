#pragma once


namespace Notatnikprogramisty {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	public: 

	protected:
		String^ stringToPrint;
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  otwórzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  podgladWydrukuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  drukujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  zakoñczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cofnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  wytnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kopiujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wklejToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  zaznaczWszystkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wyczyœæWszystkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  formatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  czcionkaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kolorTekstuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  kopiujToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  wytnijToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  wklejToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  cofnijToolStripMenuItem1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otwórzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->podgladWydrukuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drukujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cofnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->wytnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kopiujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wklejToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->zaznaczWszystkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyczyœæWszystkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->czcionkaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kolorTekstuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->kopiujToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wytnijToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wklejToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cofnijToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->formatToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1120, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->nowyToolStripMenuItem,
					this->otwórzToolStripMenuItem, this->zapiszToolStripMenuItem, this->toolStripMenuItem1, this->podgladWydrukuToolStripMenuItem,
					this->drukujToolStripMenuItem, this->toolStripMenuItem2, this->zakoñczToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// nowyToolStripMenuItem
			// 
			this->nowyToolStripMenuItem->Name = L"nowyToolStripMenuItem";
			this->nowyToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->nowyToolStripMenuItem->Text = L"Nowy";
			this->nowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nowyToolStripMenuItem_Click);
			// 
			// otwórzToolStripMenuItem
			// 
			this->otwórzToolStripMenuItem->Name = L"otwórzToolStripMenuItem";
			this->otwórzToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->otwórzToolStripMenuItem->Text = L"Otwórz";
			this->otwórzToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::otwórzToolStripMenuItem_Click);
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zapiszToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(195, 6);
			// 
			// podgladWydrukuToolStripMenuItem
			// 
			this->podgladWydrukuToolStripMenuItem->Name = L"podgladWydrukuToolStripMenuItem";
			this->podgladWydrukuToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->podgladWydrukuToolStripMenuItem->Text = L"Podgl¹d wydruku";
			this->podgladWydrukuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::podgladWydrukuToolStripMenuItem_Click);
			// 
			// drukujToolStripMenuItem
			// 
			this->drukujToolStripMenuItem->Name = L"drukujToolStripMenuItem";
			this->drukujToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->drukujToolStripMenuItem->Text = L"Drukuj";
			this->drukujToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::drukujToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(195, 6);
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->zakoñczToolStripMenuItem->Text = L"Zakoñcz";
			this->zakoñczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zakoñczToolStripMenuItem_Click);
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->cofnijToolStripMenuItem,
					this->toolStripMenuItem3, this->wytnijToolStripMenuItem, this->kopiujToolStripMenuItem, this->wklejToolStripMenuItem, this->toolStripMenuItem4,
					this->zaznaczWszystkoToolStripMenuItem, this->wyczyœæWszystkoToolStripMenuItem
			});
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			// 
			// cofnijToolStripMenuItem
			// 
			this->cofnijToolStripMenuItem->Name = L"cofnijToolStripMenuItem";
			this->cofnijToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->cofnijToolStripMenuItem->Text = L"Cofnij";
			this->cofnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cofnijToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(198, 6);
			// 
			// wytnijToolStripMenuItem
			// 
			this->wytnijToolStripMenuItem->Name = L"wytnijToolStripMenuItem";
			this->wytnijToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->wytnijToolStripMenuItem->Text = L"Wytnij";
			this->wytnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wytnijToolStripMenuItem_Click);
			// 
			// kopiujToolStripMenuItem
			// 
			this->kopiujToolStripMenuItem->Name = L"kopiujToolStripMenuItem";
			this->kopiujToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->kopiujToolStripMenuItem->Text = L"Kopiuj";
			this->kopiujToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kopiujToolStripMenuItem_Click);
			// 
			// wklejToolStripMenuItem
			// 
			this->wklejToolStripMenuItem->Name = L"wklejToolStripMenuItem";
			this->wklejToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->wklejToolStripMenuItem->Text = L"Wklej";
			this->wklejToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wklejToolStripMenuItem_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(198, 6);
			// 
			// zaznaczWszystkoToolStripMenuItem
			// 
			this->zaznaczWszystkoToolStripMenuItem->Name = L"zaznaczWszystkoToolStripMenuItem";
			this->zaznaczWszystkoToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->zaznaczWszystkoToolStripMenuItem->Text = L"Zaznacz wszystko";
			this->zaznaczWszystkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zaznaczWszystkoToolStripMenuItem_Click);
			// 
			// wyczyœæWszystkoToolStripMenuItem
			// 
			this->wyczyœæWszystkoToolStripMenuItem->Name = L"wyczyœæWszystkoToolStripMenuItem";
			this->wyczyœæWszystkoToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->wyczyœæWszystkoToolStripMenuItem->Text = L"Wyczyœæ wszystko";
			this->wyczyœæWszystkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wyczyœæWszystkoToolStripMenuItem_Click);
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->czcionkaToolStripMenuItem,
					this->kolorTekstuToolStripMenuItem
			});
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			this->formatToolStripMenuItem->Size = System::Drawing::Size(68, 24);
			this->formatToolStripMenuItem->Text = L"Format";
			// 
			// czcionkaToolStripMenuItem
			// 
			this->czcionkaToolStripMenuItem->Name = L"czcionkaToolStripMenuItem";
			this->czcionkaToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->czcionkaToolStripMenuItem->Text = L"Czcionka";
			this->czcionkaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::czcionkaToolStripMenuItem_Click);
			// 
			// kolorTekstuToolStripMenuItem
			// 
			this->kolorTekstuToolStripMenuItem->Name = L"kolorTekstuToolStripMenuItem";
			this->kolorTekstuToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->kolorTekstuToolStripMenuItem->Text = L"Kolor tekstu";
			this->kolorTekstuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kolorTekstuToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::infoToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripButton7
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1120, 27);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(24, 24);
			this->toolStripButton1->Text = L"Nowy";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(24, 24);
			this->toolStripButton2->Text = L"C++";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(24, 24);
			this->toolStripButton3->Text = L"C#";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(24, 24);
			this->toolStripButton4->Text = L"C";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(24, 24);
			this->toolStripButton5->Text = L"Java";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &Form1::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(24, 24);
			this->toolStripButton6->Text = L"HTML";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &Form1::toolStripButton6_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(24, 24);
			this->toolStripButton7->Text = L"CSS";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &Form1::toolStripButton7_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->kopiujToolStripMenuItem1,
					this->wytnijToolStripMenuItem1, this->wklejToolStripMenuItem1, this->cofnijToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(128, 108);
			// 
			// kopiujToolStripMenuItem1
			// 
			this->kopiujToolStripMenuItem1->Name = L"kopiujToolStripMenuItem1";
			this->kopiujToolStripMenuItem1->Size = System::Drawing::Size(127, 26);
			this->kopiujToolStripMenuItem1->Text = L"Kopiuj";
			this->kopiujToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::kopiujToolStripMenuItem_Click);
			// 
			// wytnijToolStripMenuItem1
			// 
			this->wytnijToolStripMenuItem1->Name = L"wytnijToolStripMenuItem1";
			this->wytnijToolStripMenuItem1->Size = System::Drawing::Size(127, 26);
			this->wytnijToolStripMenuItem1->Text = L"Wytnij";
			this->wytnijToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::wytnijToolStripMenuItem_Click);
			// 
			// wklejToolStripMenuItem1
			// 
			this->wklejToolStripMenuItem1->Name = L"wklejToolStripMenuItem1";
			this->wklejToolStripMenuItem1->Size = System::Drawing::Size(127, 26);
			this->wklejToolStripMenuItem1->Text = L"Wklej";
			this->wklejToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::wklejToolStripMenuItem_Click);
			// 
			// cofnijToolStripMenuItem1
			// 
			this->cofnijToolStripMenuItem1->Name = L"cofnijToolStripMenuItem1";
			this->cofnijToolStripMenuItem1->Size = System::Drawing::Size(127, 26);
			this->cofnijToolStripMenuItem1->Text = L"Cofnij";
			this->cofnijToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::cofnijToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->richTextBox1->Location = System::Drawing::Point(0, 60);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1119, 507);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"\"txt\"";
			this->openFileDialog1->Filter = L"Plik txt|*.txt|Plik cpp|*cpp|Plik c|*c|Plik cs|*cs|Plik java|*java|Plik php|*php|"
				L"Plik html|*.html|Plik doc|*.doc|Plik css|*.css";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"\"txt\"";
			this->saveFileDialog1->Filter = L"Plik txt|*.txt|Plik cpp|*cpp|Plik c|*c|Plik cs|*cs|Plik java|*java|Plik php|*php|"
				L"Plik html|*.html|Plik doc|*.doc|Plik css|*.css";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1120, 572);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->Text = L"Notatnik programisty v1.0";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void nowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->Clear();
			 }
private: System::Void otwórzToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 {
						 Form1::Text = openFileDialog1->FileName;

						 richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
						 //if (openFileDialog1->FilterIndex == 1)
						 //{
							//richTextBox1->LoadFile(openFileDialog1->FileName);
							//richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
						// }
				}
		 }
private: System::Void zapiszToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 //richTextBox1->SaveFile(saveFileDialog1->FileName);
				 richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
				 richTextBox1->Modified=false;
				 Form1::Text = saveFileDialog1->FileName;
			 }

		 }
private: System::Void podgladWydrukuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 stringToPrint = this->richTextBox1->Text;
			printPreviewDialog1->Document = this->printDocument1;
			printPreviewDialog1->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			printPreviewDialog1->ShowDialog();
		 }
private: System::Void drukujToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {


				 stringToPrint=this->richTextBox1->Text;
				 this->printDocument1->Print();
			}
		 }
private: System::Void zakoñczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
private: System::Void cofnijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Undo();
		 }
private: System::Void wytnijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Cut();
		 }
private: System::Void kopiujToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Copy();
		 }
private: System::Void wklejToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Paste();
		 }
private: System::Void zaznaczWszystkoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SelectAll();
		 }
private: System::Void wyczyœæWszystkoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Clear();
		 }
private: System::Void czcionkaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 FontDialog^dlg = gcnew FontDialog();
			 if(dlg->ShowDialog() == Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->Font=dlg->Font;

			 }
		 }
private: System::Void kolorTekstuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ColorDialog^dlg=gcnew ColorDialog();
			 if(dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->ForeColor=dlg->Color;
			 }
		 }
private: System::Void infoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MessageBox::Show("Autor: Krzysztof £os \n profesorek96.blogspot.com \n Ikony pochodz¹ ze strony www.iconfinder.com");
		 }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Clear();
		 }
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SaveFile( "main.cpp",RichTextBoxStreamType::PlainText );
		 }
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SaveFile( "main.cs",RichTextBoxStreamType::PlainText );
		 }
private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SaveFile( "main.c",RichTextBoxStreamType::PlainText );
		 }
private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SaveFile( "main.java",RichTextBoxStreamType::PlainText );
		 }
private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SaveFile( "main.html",RichTextBoxStreamType::PlainText );
		 }
private: System::Void toolStripButton7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SaveFile( "main.css",RichTextBoxStreamType::PlainText );
		 }
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) 
		 {
			 int charactersOnPage = 0;

			  int linesPerPage = 0;
			  StringFormat^ newStringFormat = gcnew StringFormat;
			   
			e->Graphics->MeasureString( stringToPrint, this->fontDialog1->Font, e->MarginBounds.Size, newStringFormat, charactersOnPage, linesPerPage);
 

			e->Graphics->DrawString( stringToPrint, this->fontDialog1->Font, gcnew SolidBrush( this->fontDialog1->Color ), e->MarginBounds, newStringFormat);



			stringToPrint = stringToPrint->Substring( charactersOnPage );

		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

