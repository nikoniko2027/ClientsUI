#pragma once

namespace Files {

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

	protected:


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog;
	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::DataGridView^  dataGridView2;












	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnDel;

	private: System::Windows::Forms::Button^  btnOpenFile;
	private: System::Windows::Forms::Button^  btnSaveFile;
	private: System::Windows::Forms::Button^  btnChoose;
	private: System::Windows::Forms::Button^  btnSaveChoose;
	private: System::Windows::Forms::Label^  lblTarif;
	private: System::Windows::Forms::TextBox^  txtTarif;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
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
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->btnOpenFile = (gcnew System::Windows::Forms::Button());
			this->btnSaveFile = (gcnew System::Windows::Forms::Button());
			this->btnChoose = (gcnew System::Windows::Forms::Button());
			this->btnSaveChoose = (gcnew System::Windows::Forms::Button());
			this->lblTarif = (gcnew System::Windows::Forms::Label());
			this->txtTarif = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog
			// 
			this->openFileDialog->DefaultExt = L"txt";
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"��������� ����� (*.txt)|*.txt|��� ����� (*.*)|*.*";
			this->openFileDialog->Title = L"������� ����";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"txt";
			this->saveFileDialog->Filter = L"��������� ����� (*.txt)|*.txt|��� ����� (*.*)|*.*";
			this->saveFileDialog->Title = L"��������� ����";
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView->Location = System::Drawing::Point(116, 12);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(845, 158);
			this->dataGridView->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"�������";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"���";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"��������";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"����� ��������";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"��� ������";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"�����";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"���";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"��������";
			this->Column8->Name = L"Column8";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column9,
					this->Column10, this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16
			});
			this->dataGridView2->Location = System::Drawing::Point(116, 186);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(845, 170);
			this->dataGridView2->TabIndex = 1;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"�������";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"���";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"��������";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"����� ��������";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"��� ������";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"�����";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"���";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"��������";
			this->Column16->Name = L"Column16";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(12, 12);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(97, 35);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"��������";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnDel
			// 
			this->btnDel->Location = System::Drawing::Point(12, 53);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(97, 35);
			this->btnDel->TabIndex = 3;
			this->btnDel->Text = L"�������";
			this->btnDel->UseVisualStyleBackColor = true;
			this->btnDel->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnOpenFile
			// 
			this->btnOpenFile->Location = System::Drawing::Point(12, 94);
			this->btnOpenFile->Name = L"btnOpenFile";
			this->btnOpenFile->Size = System::Drawing::Size(97, 35);
			this->btnOpenFile->TabIndex = 4;
			this->btnOpenFile->Text = L"�������";
			this->btnOpenFile->UseVisualStyleBackColor = true;
			this->btnOpenFile->Click += gcnew System::EventHandler(this, &MyForm::btnOpenFile_Click);
			// 
			// btnSaveFile
			// 
			this->btnSaveFile->Location = System::Drawing::Point(12, 135);
			this->btnSaveFile->Name = L"btnSaveFile";
			this->btnSaveFile->Size = System::Drawing::Size(98, 35);
			this->btnSaveFile->TabIndex = 5;
			this->btnSaveFile->Text = L"���������";
			this->btnSaveFile->UseVisualStyleBackColor = true;
			this->btnSaveFile->Click += gcnew System::EventHandler(this, &MyForm::btnSaveFile_Click);
			// 
			// btnChoose
			// 
			this->btnChoose->Location = System::Drawing::Point(12, 228);
			this->btnChoose->Name = L"btnChoose";
			this->btnChoose->Size = System::Drawing::Size(98, 35);
			this->btnChoose->TabIndex = 6;
			this->btnChoose->Text = L"�������";
			this->btnChoose->UseVisualStyleBackColor = true;
			this->btnChoose->Click += gcnew System::EventHandler(this, &MyForm::btnChoose_Click);
			// 
			// btnSaveChoose
			// 
			this->btnSaveChoose->Location = System::Drawing::Point(12, 269);
			this->btnSaveChoose->Name = L"btnSaveChoose";
			this->btnSaveChoose->Size = System::Drawing::Size(98, 36);
			this->btnSaveChoose->TabIndex = 7;
			this->btnSaveChoose->Text = L"���������";
			this->btnSaveChoose->UseVisualStyleBackColor = true;
			this->btnSaveChoose->Click += gcnew System::EventHandler(this, &MyForm::btnSaveChoose_Click);
			// 
			// lblTarif
			// 
			this->lblTarif->AutoSize = true;
			this->lblTarif->Location = System::Drawing::Point(20, 186);
			this->lblTarif->Name = L"lblTarif";
			this->lblTarif->Size = System::Drawing::Size(40, 13);
			this->lblTarif->TabIndex = 8;
			this->lblTarif->Text = L"�����";
			// 
			// txtTarif
			// 
			this->txtTarif->Location = System::Drawing::Point(23, 202);
			this->txtTarif->Name = L"txtTarif";
			this->txtTarif->Size = System::Drawing::Size(79, 20);
			this->txtTarif->TabIndex = 9;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 364);
			this->Controls->Add(this->txtTarif);
			this->Controls->Add(this->lblTarif);
			this->Controls->Add(this->btnSaveChoose);
			this->Controls->Add(this->btnChoose);
			this->Controls->Add(this->btnSaveFile);
			this->Controls->Add(this->btnOpenFile);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"������ � �������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ str2;
		void Clear() { // ������� ������
			errorProvider1->SetError(btnDel, "");
			errorProvider1->SetError(btnOpenFile, "");
			errorProvider1->SetError(btnSaveFile, "");
			errorProvider1->SetError(dataGridView, "");
			errorProvider1->SetError(btnChoose, "");
			errorProvider1->SetError(txtTarif, "");
		}
		int check() {  // ��������� ���������� �������
			bool flac = true;
			for (int i = 0; i < this->dataGridView->RowCount; i++) {
				for (int j = 0; j < this->dataGridView->ColumnCount; j++) {
					if (this->dataGridView->Rows[i]->Cells[j]->Value == nullptr) {
						flac = false;
						break;
					}
				}
			}
			if (flac == true) {
				for (int i = 0; i < this->dataGridView->Rows->Count; i++) { // ����������� �� ������ ������
					String^ phone = System::Convert::ToString(this->dataGridView->Rows[i]->Cells[3]->Value); // �������� ������ � ���������
					bool fl = true;
					int x;
					System::String^ phone2 = ""; // ��� �������� ���������� ������
					for (int i = 0; i < phone->Length; i++) { // ���� �� ����� ����������� ������ 
						phone2 = phone->Substring(i, 1); // ����������� ������ ������
						bool res = Int32::TryParse(phone2, x);
						if (!res && phone2 != "-") { // ���� ��� �� ����� � �� ����, ��
							fl = false;
							break; // ��������� ��������
						}

					}
					if (fl = false) { // ���� ������� ���� ���� �� �����
						errorProvider1->SetError(dataGridView, "���� �� �����");
						return 0;
						break;
					}
					else { // ����� 
						if (phone->Empty) { // ���� ����� �� ������
							if (phone->Length == 11 && phone->IndexOf("-") == -1) { // ���� �� �������� 11 ����� � 0 ����
								return 1;
								break;
							}
							else { // �����
								if (phone->Length != 11 && phone->IndexOf("-") == -1) { // ���� �� �������� �� 11 ����� � 0 ����
									errorProvider1->SetError(dataGridView, "������������ �����");
									return 0;
									break;
								}
								else { // �����
									int tire = 0;
									System::String ^strl = "";
									for (int i = 0; i < phone->Length; i++) { // ������� ���������� ���� � ������
										strl = phone->Substring(i, 1);
										if (strl == "-")
											tire++;

									}
									if (phone->Length - tire != 11) { // ���� ������ ���� ������ ����� ���������� ���� �� ����� 11
										errorProvider1->SetError(dataGridView, "���� ������ �������");
										return 0;
										break;
									}
									else { // ����� ��� �������� ������ �������
										return 1;
										break;
									}
								}
							}
						}
						else {
							errorProvider1->SetError(dataGridView, "���� ������ ������");
							return 0;
						}
					}
				}
			} 
			else {
				errorProvider1->SetError(btnSaveFile, "���� ������ ������");
			}
		}

	private: System::Void btnOpenFile_Click(System::Object^  sender, System::EventArgs^  e) { // ������ ��� ��������
		Clear();
		this->dataGridView->Rows->Clear(); // ������� �������
		this->dataGridView2->Rows->Clear(); // ������� �������
		System::IO::Stream^ myStream;
		if (this->openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = openFileDialog->OpenFile()) != nullptr) {
				System::IO::StreamReader^ sw = gcnew System::IO::StreamReader(myStream, System::Text::Encoding::GetEncoding(1251));
				System::String ^str = "";
				while (str = sw->ReadLine()) {  // ��������� ����
					int at, pos = 0;
					this->dataGridView->Rows->Add(1);
					str += " ";
					at = str->IndexOf(" ");
					for (int i = 0; i < 9 && at != -1; i++) {  // ��������� � �������
						System::String^ str1 = str->Substring(pos, at - pos);
						pos = at + 1;
						this->dataGridView->Rows[this->dataGridView->RowCount - 1]->Cells[i]->Value = str1;
						at = str->IndexOf(" ", pos);
					}
				}
				sw->Close(); // ��������� ����
			}
		}
		else
			errorProvider1->SetError(btnOpenFile, "���� �� ��������");
	}

	private: System::Void btnSaveFile_Click(System::Object^  sender, System::EventArgs^  e) { // ������ ����������
		Clear(); // ������� ������
		if (this->dataGridView->RowCount != 0) {
			if (check()) {  // ���� ���� ��� ���������
				System::IO::Stream^ myStream;
				if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					if ((myStream = saveFileDialog->OpenFile()) != nullptr) {
						System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(myStream, System::Text::Encoding::GetEncoding(1251));
						for (int i = 0; i < this->dataGridView->Rows->Count; i++) { // ���� ������ ��� ��������, �� ��������� ������� � ����
							System::String ^str = "";
							for (int j = 0; j < 8; j++)
								str += System::Convert::ToString(this->dataGridView->Rows[i]->Cells[j]->Value) + " ";
							str = str->Remove(str->Length - 1, 1);
							if (i == this->dataGridView->Rows->Count - 1) // ���� ��� ��������� ������
								sw->Write(str);
							else
								sw->WriteLine(str);  // ���� �� ���������
						}
						sw->Close();
					}
				}
			}
		}
		else {
			errorProvider1->SetError(btnSaveFile, "������� ������");
		}
	}

	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) { // ������ ��� ����������� ������
		Clear(); // ������� ������
		this->dataGridView->Rows->Add(1); // ��������� ������
	}

	private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) { // ������ ��� �������� ������
		Clear(); // ������� ������
		if (this->dataGridView->Rows->Count > 0) { // ���� ������� ������
			if (!this->dataGridView->CurrentRow->IsNewRow) // ���� ��� �� ����� ������
				this->dataGridView->Rows->Remove(this->dataGridView->Rows[this->dataGridView->CurrentRow->Index]); // �� ������� ��
		}
		else
			errorProvider1->SetError(btnDel, "��� �����");
	}
	private: System::Void btnChoose_Click(System::Object^  sender, System::EventArgs^  e) { // ������ ������ ������
		Clear(); // ������� ������
		this->dataGridView2->Rows->Clear(); // ������� �������
		if (check()) {
			if (this->txtTarif->Text == "")
				errorProvider1->SetError(btnChoose, "������ ������");
			else {
					bool fl = false;
					for (int i = 0; i < this->dataGridView->Rows->Count; i++) { // ����������� �� ������ ������
						if (System::Convert::ToString(this->dataGridView->Rows[i]->Cells[4]->Value) == this->txtTarif->Text) { // ���� ������� �������������
							fl = true;
							this->dataGridView2->Rows->Add(1); // ��������� ������
							for (int j = 0; j < 8; j++) // ��������� �������� ������
								this->dataGridView2->Rows[this->dataGridView2->Rows->Count - 1]->Cells[j]->Value = this->dataGridView->Rows[i]->Cells[j]->Value;
						}
					}
					if (!fl) { // ���� �� ������� ������ ������
						errorProvider1->SetError(btnChoose, "��������� ������� ���");
						this->txtTarif->Text = "";
					}
			}
		}
	}
	private: System::Void btnSaveChoose_Click(System::Object^  sender, System::EventArgs^  e) { // ������ ���������� ���������� ������
		Clear(); // ������� ������
		if (check()) {  
			System::IO::Stream^ myStream;
			if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((myStream = saveFileDialog->OpenFile()) != nullptr) {
					System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(myStream, System::Text::Encoding::GetEncoding(1251));
					for (int i = 0; i < this->dataGridView2->Rows->Count; i++) {
						System::String ^str = "";
						for (int j = 0; j < 8; j++)
							str += System::Convert::ToString(this->dataGridView2->Rows[i]->Cells[j]->Value) + " ";  // ��������� ����� ������ �������
						str = str->Remove(str->Length - 1, 1);
						if (i == this->dataGridView2->Rows->Count - 1) // ���� ��������� ������
							sw->Write(str); 
						else // ���� �� ���������
							sw->WriteLine(str); 
					}
					sw->Close(); // ��������� ����
				}
			}
		}
	}
	};
}
