#pragma once



// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include <string>
#define Firebrick Peru


const char* ChosenMark;
int Player1Points = 0, Player2Points = 0;
bool again;

enum CurrentPlayer {

    First, Second
}Player;



namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            Player = First;
            //
            //TODO: Add the constructor code here
            //
            // uncomment to execute the rk1-utils:
            //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

        }

    protected:
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
    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Button^ button25;
    private: System::Windows::Forms::Button^ button26;
    private: System::Windows::Forms::Button^ button27;
    private: System::Windows::Forms::Button^ button28;
    private: System::Windows::Forms::Button^ button29;
    private: System::Windows::Forms::Button^ button30;
    private: System::Windows::Forms::Button^ button31;
    private: System::Windows::Forms::Button^ button32;
    private: System::Windows::Forms::Button^ button33;
    private: System::Windows::Forms::Button^ button34;
    private: System::Windows::Forms::Button^ button35;
    private: System::Windows::Forms::Button^ button36;
    private: System::Windows::Forms::Button^ button37;
    private: System::Windows::Forms::Button^ button38;
    private: System::Windows::Forms::Button^ button39;
    private: System::Windows::Forms::Button^ button40;
    private: System::Windows::Forms::Button^ button41;
    private: System::Windows::Forms::Button^ button42;
    private: System::Windows::Forms::Button^ button43;
    private: System::Windows::Forms::Button^ button44;
    private: System::Windows::Forms::Button^ button45;
    private: System::Windows::Forms::Button^ button46;
    private: System::Windows::Forms::Button^ button47;
    private: System::Windows::Forms::Button^ button48;
    private: System::Windows::Forms::Button^ button49;
    private: System::Windows::Forms::Button^ button50;
    private: System::Windows::Forms::Button^ button51;
    private: System::Windows::Forms::Button^ button52;
    private: System::Windows::Forms::Button^ button53;
    private: System::Windows::Forms::Button^ button54;
    private: System::Windows::Forms::Button^ button55;
    private: System::Windows::Forms::Button^ button56;
    private: System::Windows::Forms::Button^ button57;
    private: System::Windows::Forms::Button^ button58;
    private: System::Windows::Forms::Button^ button59;
    private: System::Windows::Forms::Button^ button60;
    private: System::Windows::Forms::Button^ button61;
    private: System::Windows::Forms::Button^ button62;
    private: System::Windows::Forms::Button^ button63;
    private: System::Windows::Forms::Button^ button64;
    private: System::Windows::Forms::Button^ button65;
    private: System::Windows::Forms::Button^ button66;
    private: System::Windows::Forms::Button^ button67;
    private: System::Windows::Forms::Button^ button68;
    private: System::Windows::Forms::Button^ button69;
    private: System::Windows::Forms::Button^ button70;
    private: System::Windows::Forms::Button^ button71;
    private: System::Windows::Forms::Button^ button72;
    private: System::Windows::Forms::Button^ button73;
    private: System::Windows::Forms::Button^ button74;
    private: System::Windows::Forms::Button^ button75;
    private: System::Windows::Forms::Button^ button76;
    private: System::Windows::Forms::Button^ button77;
    private: System::Windows::Forms::Button^ button78;
    private: System::Windows::Forms::Button^ button79;
    private: System::Windows::Forms::Button^ button80;
    private: System::Windows::Forms::Button^ button81;
    private: System::Windows::Forms::Button^ button82;
    private: System::Windows::Forms::Button^ button83;
    private: System::Windows::Forms::Button^ button84;
    private: System::Windows::Forms::Button^ button85;
    private: System::Windows::Forms::Button^ button86;
    private: System::Windows::Forms::Button^ button87;
    private: System::Windows::Forms::Button^ button88;
    private: System::Windows::Forms::Button^ button89;
    private: System::Windows::Forms::Button^ button90;
    private: System::Windows::Forms::Button^ button91;
    private: System::Windows::Forms::Button^ button92;
    private: System::Windows::Forms::Button^ button93;
    private: System::Windows::Forms::Button^ button94;
    private: System::Windows::Forms::Button^ button95;
    private: System::Windows::Forms::Button^ button96;
    private: System::Windows::Forms::Button^ button97;
    private: System::Windows::Forms::Button^ button98;
    private: System::Windows::Forms::Button^ button99;
    private: System::Windows::Forms::Button^ button100;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ OMark;

    private: System::Windows::Forms::Button^ SMark;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
           //
           // Point Function
           // 
    private:
        void Check_Points() {

            again = true;
            if (Player == First) {
                Player1Points++;
                label3->Text = System::Convert::ToString(Player1Points);
            }
            else {
                Player2Points++;
                label5->Text = System::Convert::ToString(Player2Points);
            }
        }






































































































































































































    protected:





    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->button35 = (gcnew System::Windows::Forms::Button());
            this->button36 = (gcnew System::Windows::Forms::Button());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->button38 = (gcnew System::Windows::Forms::Button());
            this->button39 = (gcnew System::Windows::Forms::Button());
            this->button40 = (gcnew System::Windows::Forms::Button());
            this->button41 = (gcnew System::Windows::Forms::Button());
            this->button42 = (gcnew System::Windows::Forms::Button());
            this->button43 = (gcnew System::Windows::Forms::Button());
            this->button44 = (gcnew System::Windows::Forms::Button());
            this->button45 = (gcnew System::Windows::Forms::Button());
            this->button46 = (gcnew System::Windows::Forms::Button());
            this->button47 = (gcnew System::Windows::Forms::Button());
            this->button48 = (gcnew System::Windows::Forms::Button());
            this->button49 = (gcnew System::Windows::Forms::Button());
            this->button50 = (gcnew System::Windows::Forms::Button());
            this->button51 = (gcnew System::Windows::Forms::Button());
            this->button52 = (gcnew System::Windows::Forms::Button());
            this->button53 = (gcnew System::Windows::Forms::Button());
            this->button54 = (gcnew System::Windows::Forms::Button());
            this->button55 = (gcnew System::Windows::Forms::Button());
            this->button56 = (gcnew System::Windows::Forms::Button());
            this->button57 = (gcnew System::Windows::Forms::Button());
            this->button58 = (gcnew System::Windows::Forms::Button());
            this->button59 = (gcnew System::Windows::Forms::Button());
            this->button60 = (gcnew System::Windows::Forms::Button());
            this->button61 = (gcnew System::Windows::Forms::Button());
            this->button62 = (gcnew System::Windows::Forms::Button());
            this->button63 = (gcnew System::Windows::Forms::Button());
            this->button64 = (gcnew System::Windows::Forms::Button());
            this->button65 = (gcnew System::Windows::Forms::Button());
            this->button66 = (gcnew System::Windows::Forms::Button());
            this->button67 = (gcnew System::Windows::Forms::Button());
            this->button68 = (gcnew System::Windows::Forms::Button());
            this->button69 = (gcnew System::Windows::Forms::Button());
            this->button70 = (gcnew System::Windows::Forms::Button());
            this->button71 = (gcnew System::Windows::Forms::Button());
            this->button72 = (gcnew System::Windows::Forms::Button());
            this->button73 = (gcnew System::Windows::Forms::Button());
            this->button74 = (gcnew System::Windows::Forms::Button());
            this->button75 = (gcnew System::Windows::Forms::Button());
            this->button76 = (gcnew System::Windows::Forms::Button());
            this->button77 = (gcnew System::Windows::Forms::Button());
            this->button78 = (gcnew System::Windows::Forms::Button());
            this->button79 = (gcnew System::Windows::Forms::Button());
            this->button80 = (gcnew System::Windows::Forms::Button());
            this->button81 = (gcnew System::Windows::Forms::Button());
            this->button82 = (gcnew System::Windows::Forms::Button());
            this->button83 = (gcnew System::Windows::Forms::Button());
            this->button84 = (gcnew System::Windows::Forms::Button());
            this->button85 = (gcnew System::Windows::Forms::Button());
            this->button86 = (gcnew System::Windows::Forms::Button());
            this->button87 = (gcnew System::Windows::Forms::Button());
            this->button88 = (gcnew System::Windows::Forms::Button());
            this->button89 = (gcnew System::Windows::Forms::Button());
            this->button90 = (gcnew System::Windows::Forms::Button());
            this->button91 = (gcnew System::Windows::Forms::Button());
            this->button92 = (gcnew System::Windows::Forms::Button());
            this->button93 = (gcnew System::Windows::Forms::Button());
            this->button94 = (gcnew System::Windows::Forms::Button());
            this->button95 = (gcnew System::Windows::Forms::Button());
            this->button96 = (gcnew System::Windows::Forms::Button());
            this->button97 = (gcnew System::Windows::Forms::Button());
            this->button98 = (gcnew System::Windows::Forms::Button());
            this->button99 = (gcnew System::Windows::Forms::Button());
            this->button100 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->OMark = (gcnew System::Windows::Forms::Button());
            this->SMark = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button1->BackColor = System::Drawing::Color::BurlyWood;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(0, 0);
            this->button1->Margin = System::Windows::Forms::Padding(0);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(70, 70);
            this->button1->TabIndex = 1;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->flowLayoutPanel1->Controls->Add(this->button1);
            this->flowLayoutPanel1->Controls->Add(this->button2);
            this->flowLayoutPanel1->Controls->Add(this->button3);
            this->flowLayoutPanel1->Controls->Add(this->button4);
            this->flowLayoutPanel1->Controls->Add(this->button5);
            this->flowLayoutPanel1->Controls->Add(this->button6);
            this->flowLayoutPanel1->Controls->Add(this->button7);
            this->flowLayoutPanel1->Controls->Add(this->button8);
            this->flowLayoutPanel1->Controls->Add(this->button9);
            this->flowLayoutPanel1->Controls->Add(this->button10);
            this->flowLayoutPanel1->Controls->Add(this->button11);
            this->flowLayoutPanel1->Controls->Add(this->button12);
            this->flowLayoutPanel1->Controls->Add(this->button13);
            this->flowLayoutPanel1->Controls->Add(this->button14);
            this->flowLayoutPanel1->Controls->Add(this->button15);
            this->flowLayoutPanel1->Controls->Add(this->button16);
            this->flowLayoutPanel1->Controls->Add(this->button17);
            this->flowLayoutPanel1->Controls->Add(this->button18);
            this->flowLayoutPanel1->Controls->Add(this->button19);
            this->flowLayoutPanel1->Controls->Add(this->button20);
            this->flowLayoutPanel1->Controls->Add(this->button21);
            this->flowLayoutPanel1->Controls->Add(this->button22);
            this->flowLayoutPanel1->Controls->Add(this->button23);
            this->flowLayoutPanel1->Controls->Add(this->button24);
            this->flowLayoutPanel1->Controls->Add(this->button25);
            this->flowLayoutPanel1->Controls->Add(this->button26);
            this->flowLayoutPanel1->Controls->Add(this->button27);
            this->flowLayoutPanel1->Controls->Add(this->button28);
            this->flowLayoutPanel1->Controls->Add(this->button29);
            this->flowLayoutPanel1->Controls->Add(this->button30);
            this->flowLayoutPanel1->Controls->Add(this->button31);
            this->flowLayoutPanel1->Controls->Add(this->button32);
            this->flowLayoutPanel1->Controls->Add(this->button33);
            this->flowLayoutPanel1->Controls->Add(this->button34);
            this->flowLayoutPanel1->Controls->Add(this->button35);
            this->flowLayoutPanel1->Controls->Add(this->button36);
            this->flowLayoutPanel1->Controls->Add(this->button37);
            this->flowLayoutPanel1->Controls->Add(this->button38);
            this->flowLayoutPanel1->Controls->Add(this->button39);
            this->flowLayoutPanel1->Controls->Add(this->button40);
            this->flowLayoutPanel1->Controls->Add(this->button41);
            this->flowLayoutPanel1->Controls->Add(this->button42);
            this->flowLayoutPanel1->Controls->Add(this->button43);
            this->flowLayoutPanel1->Controls->Add(this->button44);
            this->flowLayoutPanel1->Controls->Add(this->button45);
            this->flowLayoutPanel1->Controls->Add(this->button46);
            this->flowLayoutPanel1->Controls->Add(this->button47);
            this->flowLayoutPanel1->Controls->Add(this->button48);
            this->flowLayoutPanel1->Controls->Add(this->button49);
            this->flowLayoutPanel1->Controls->Add(this->button50);
            this->flowLayoutPanel1->Controls->Add(this->button51);
            this->flowLayoutPanel1->Controls->Add(this->button52);
            this->flowLayoutPanel1->Controls->Add(this->button53);
            this->flowLayoutPanel1->Controls->Add(this->button54);
            this->flowLayoutPanel1->Controls->Add(this->button55);
            this->flowLayoutPanel1->Controls->Add(this->button56);
            this->flowLayoutPanel1->Controls->Add(this->button57);
            this->flowLayoutPanel1->Controls->Add(this->button58);
            this->flowLayoutPanel1->Controls->Add(this->button59);
            this->flowLayoutPanel1->Controls->Add(this->button60);
            this->flowLayoutPanel1->Controls->Add(this->button61);
            this->flowLayoutPanel1->Controls->Add(this->button62);
            this->flowLayoutPanel1->Controls->Add(this->button63);
            this->flowLayoutPanel1->Controls->Add(this->button64);
            this->flowLayoutPanel1->Controls->Add(this->button65);
            this->flowLayoutPanel1->Controls->Add(this->button66);
            this->flowLayoutPanel1->Controls->Add(this->button67);
            this->flowLayoutPanel1->Controls->Add(this->button68);
            this->flowLayoutPanel1->Controls->Add(this->button69);
            this->flowLayoutPanel1->Controls->Add(this->button70);
            this->flowLayoutPanel1->Controls->Add(this->button71);
            this->flowLayoutPanel1->Controls->Add(this->button72);
            this->flowLayoutPanel1->Controls->Add(this->button73);
            this->flowLayoutPanel1->Controls->Add(this->button74);
            this->flowLayoutPanel1->Controls->Add(this->button75);
            this->flowLayoutPanel1->Controls->Add(this->button76);
            this->flowLayoutPanel1->Controls->Add(this->button77);
            this->flowLayoutPanel1->Controls->Add(this->button78);
            this->flowLayoutPanel1->Controls->Add(this->button79);
            this->flowLayoutPanel1->Controls->Add(this->button80);
            this->flowLayoutPanel1->Controls->Add(this->button81);
            this->flowLayoutPanel1->Controls->Add(this->button82);
            this->flowLayoutPanel1->Controls->Add(this->button83);
            this->flowLayoutPanel1->Controls->Add(this->button84);
            this->flowLayoutPanel1->Controls->Add(this->button85);
            this->flowLayoutPanel1->Controls->Add(this->button86);
            this->flowLayoutPanel1->Controls->Add(this->button87);
            this->flowLayoutPanel1->Controls->Add(this->button88);
            this->flowLayoutPanel1->Controls->Add(this->button89);
            this->flowLayoutPanel1->Controls->Add(this->button90);
            this->flowLayoutPanel1->Controls->Add(this->button91);
            this->flowLayoutPanel1->Controls->Add(this->button92);
            this->flowLayoutPanel1->Controls->Add(this->button93);
            this->flowLayoutPanel1->Controls->Add(this->button94);
            this->flowLayoutPanel1->Controls->Add(this->button95);
            this->flowLayoutPanel1->Controls->Add(this->button96);
            this->flowLayoutPanel1->Controls->Add(this->button97);
            this->flowLayoutPanel1->Controls->Add(this->button98);
            this->flowLayoutPanel1->Controls->Add(this->button99);
            this->flowLayoutPanel1->Controls->Add(this->button100);
            this->flowLayoutPanel1->Location = System::Drawing::Point(30, 35);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(723, 704);
            this->flowLayoutPanel1->TabIndex = 0;
            // 
            // button2
            // 
            this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button2->BackColor = System::Drawing::Color::BurlyWood;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(70, 0);
            this->button2->Margin = System::Windows::Forms::Padding(0);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(70, 70);
            this->button2->TabIndex = 2;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // button3
            // 
            this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button3->BackColor = System::Drawing::Color::BurlyWood;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(140, 0);
            this->button3->Margin = System::Windows::Forms::Padding(0);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(70, 70);
            this->button3->TabIndex = 3;
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // button4
            // 
            this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button4->BackColor = System::Drawing::Color::BurlyWood;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(210, 0);
            this->button4->Margin = System::Windows::Forms::Padding(0);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(70, 70);
            this->button4->TabIndex = 4;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // button5
            // 
            this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button5->BackColor = System::Drawing::Color::BurlyWood;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(280, 0);
            this->button5->Margin = System::Windows::Forms::Padding(0);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(70, 70);
            this->button5->TabIndex = 5;
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
            // 
            // button6
            // 
            this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button6->BackColor = System::Drawing::Color::BurlyWood;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(350, 0);
            this->button6->Margin = System::Windows::Forms::Padding(0);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(70, 70);
            this->button6->TabIndex = 6;
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
            // 
            // button7
            // 
            this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button7->BackColor = System::Drawing::Color::BurlyWood;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(420, 0);
            this->button7->Margin = System::Windows::Forms::Padding(0);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(70, 70);
            this->button7->TabIndex = 7;
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
            // 
            // button8
            // 
            this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button8->BackColor = System::Drawing::Color::BurlyWood;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(490, 0);
            this->button8->Margin = System::Windows::Forms::Padding(0);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(70, 70);
            this->button8->TabIndex = 8;
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
            // 
            // button9
            // 
            this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button9->BackColor = System::Drawing::Color::BurlyWood;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(560, 0);
            this->button9->Margin = System::Windows::Forms::Padding(0);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(70, 70);
            this->button9->TabIndex = 9;
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
            // 
            // button10
            // 
            this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button10->BackColor = System::Drawing::Color::BurlyWood;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(630, 0);
            this->button10->Margin = System::Windows::Forms::Padding(0);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(70, 70);
            this->button10->TabIndex = 10;
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
            // 
            // button11
            // 
            this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button11->BackColor = System::Drawing::Color::BurlyWood;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(0, 70);
            this->button11->Margin = System::Windows::Forms::Padding(0);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(70, 70);
            this->button11->TabIndex = 11;
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
            // 
            // button12
            // 
            this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button12->BackColor = System::Drawing::Color::BurlyWood;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->Location = System::Drawing::Point(70, 70);
            this->button12->Margin = System::Windows::Forms::Padding(0);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(70, 70);
            this->button12->TabIndex = 12;
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
            // 
            // button13
            // 
            this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button13->BackColor = System::Drawing::Color::BurlyWood;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->Location = System::Drawing::Point(140, 70);
            this->button13->Margin = System::Windows::Forms::Padding(0);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(70, 70);
            this->button13->TabIndex = 13;
            this->button13->UseVisualStyleBackColor = false;
            this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
            // 
            // button14
            // 
            this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button14->BackColor = System::Drawing::Color::BurlyWood;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->Location = System::Drawing::Point(210, 70);
            this->button14->Margin = System::Windows::Forms::Padding(0);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(70, 70);
            this->button14->TabIndex = 14;
            this->button14->UseVisualStyleBackColor = false;
            this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
            // 
            // button15
            // 
            this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button15->BackColor = System::Drawing::Color::BurlyWood;
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button15->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->Location = System::Drawing::Point(280, 70);
            this->button15->Margin = System::Windows::Forms::Padding(0);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(70, 70);
            this->button15->TabIndex = 15;
            this->button15->UseVisualStyleBackColor = false;
            this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
            // 
            // button16
            // 
            this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button16->BackColor = System::Drawing::Color::BurlyWood;
            this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button16->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->Location = System::Drawing::Point(350, 70);
            this->button16->Margin = System::Windows::Forms::Padding(0);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(70, 70);
            this->button16->TabIndex = 16;
            this->button16->UseVisualStyleBackColor = false;
            this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
            // 
            // button17
            // 
            this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button17->BackColor = System::Drawing::Color::BurlyWood;
            this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button17->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->Location = System::Drawing::Point(420, 70);
            this->button17->Margin = System::Windows::Forms::Padding(0);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(70, 70);
            this->button17->TabIndex = 17;
            this->button17->UseVisualStyleBackColor = false;
            this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
            // 
            // button18
            // 
            this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button18->BackColor = System::Drawing::Color::BurlyWood;
            this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button18->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->Location = System::Drawing::Point(490, 70);
            this->button18->Margin = System::Windows::Forms::Padding(0);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(70, 70);
            this->button18->TabIndex = 18;
            this->button18->UseVisualStyleBackColor = false;
            this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
            // 
            // button19
            // 
            this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button19->BackColor = System::Drawing::Color::BurlyWood;
            this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button19->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->Location = System::Drawing::Point(560, 70);
            this->button19->Margin = System::Windows::Forms::Padding(0);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(70, 70);
            this->button19->TabIndex = 19;
            this->button19->UseVisualStyleBackColor = false;
            this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
            // 
            // button20
            // 
            this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button20->BackColor = System::Drawing::Color::BurlyWood;
            this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button20->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->Location = System::Drawing::Point(630, 70);
            this->button20->Margin = System::Windows::Forms::Padding(0);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(70, 70);
            this->button20->TabIndex = 20;
            this->button20->UseVisualStyleBackColor = false;
            this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
            // 
            // button21
            // 
            this->button21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button21->BackColor = System::Drawing::Color::BurlyWood;
            this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button21->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->Location = System::Drawing::Point(0, 140);
            this->button21->Margin = System::Windows::Forms::Padding(0);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(70, 70);
            this->button21->TabIndex = 21;
            this->button21->UseVisualStyleBackColor = false;
            this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
            // 
            // button22
            // 
            this->button22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button22->BackColor = System::Drawing::Color::BurlyWood;
            this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button22->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->Location = System::Drawing::Point(70, 140);
            this->button22->Margin = System::Windows::Forms::Padding(0);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(70, 70);
            this->button22->TabIndex = 22;
            this->button22->UseVisualStyleBackColor = false;
            this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
            // 
            // button23
            // 
            this->button23->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button23->BackColor = System::Drawing::Color::BurlyWood;
            this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button23->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->Location = System::Drawing::Point(140, 140);
            this->button23->Margin = System::Windows::Forms::Padding(0);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(70, 70);
            this->button23->TabIndex = 23;
            this->button23->UseVisualStyleBackColor = false;
            this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
            // 
            // button24
            // 
            this->button24->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button24->BackColor = System::Drawing::Color::BurlyWood;
            this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button24->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button24->Location = System::Drawing::Point(210, 140);
            this->button24->Margin = System::Windows::Forms::Padding(0);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(70, 70);
            this->button24->TabIndex = 24;
            this->button24->UseVisualStyleBackColor = false;
            this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
            // 
            // button25
            // 
            this->button25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button25->BackColor = System::Drawing::Color::BurlyWood;
            this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button25->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button25->Location = System::Drawing::Point(280, 140);
            this->button25->Margin = System::Windows::Forms::Padding(0);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(70, 70);
            this->button25->TabIndex = 25;
            this->button25->UseVisualStyleBackColor = false;
            this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
            // 
            // button26
            // 
            this->button26->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button26->BackColor = System::Drawing::Color::BurlyWood;
            this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button26->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button26->Location = System::Drawing::Point(350, 140);
            this->button26->Margin = System::Windows::Forms::Padding(0);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(70, 70);
            this->button26->TabIndex = 26;
            this->button26->UseVisualStyleBackColor = false;
            this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
            // 
            // button27
            // 
            this->button27->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button27->BackColor = System::Drawing::Color::BurlyWood;
            this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button27->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button27->Location = System::Drawing::Point(420, 140);
            this->button27->Margin = System::Windows::Forms::Padding(0);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(70, 70);
            this->button27->TabIndex = 27;
            this->button27->UseVisualStyleBackColor = false;
            this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
            // 
            // button28
            // 
            this->button28->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button28->BackColor = System::Drawing::Color::BurlyWood;
            this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button28->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button28->Location = System::Drawing::Point(490, 140);
            this->button28->Margin = System::Windows::Forms::Padding(0);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(70, 70);
            this->button28->TabIndex = 28;
            this->button28->UseVisualStyleBackColor = false;
            this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
            // 
            // button29
            // 
            this->button29->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button29->BackColor = System::Drawing::Color::BurlyWood;
            this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button29->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button29->Location = System::Drawing::Point(560, 140);
            this->button29->Margin = System::Windows::Forms::Padding(0);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(70, 70);
            this->button29->TabIndex = 29;
            this->button29->UseVisualStyleBackColor = false;
            this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
            // 
            // button30
            // 
            this->button30->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button30->BackColor = System::Drawing::Color::BurlyWood;
            this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button30->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button30->Location = System::Drawing::Point(630, 140);
            this->button30->Margin = System::Windows::Forms::Padding(0);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(70, 70);
            this->button30->TabIndex = 30;
            this->button30->UseVisualStyleBackColor = false;
            this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
            // 
            // button31
            // 
            this->button31->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button31->BackColor = System::Drawing::Color::BurlyWood;
            this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button31->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button31->Location = System::Drawing::Point(0, 210);
            this->button31->Margin = System::Windows::Forms::Padding(0);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(70, 70);
            this->button31->TabIndex = 31;
            this->button31->UseVisualStyleBackColor = false;
            this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
            // 
            // button32
            // 
            this->button32->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button32->BackColor = System::Drawing::Color::BurlyWood;
            this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button32->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button32->Location = System::Drawing::Point(70, 210);
            this->button32->Margin = System::Windows::Forms::Padding(0);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(70, 70);
            this->button32->TabIndex = 32;
            this->button32->UseVisualStyleBackColor = false;
            this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
            // 
            // button33
            // 
            this->button33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button33->BackColor = System::Drawing::Color::BurlyWood;
            this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button33->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button33->Location = System::Drawing::Point(140, 210);
            this->button33->Margin = System::Windows::Forms::Padding(0);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(70, 70);
            this->button33->TabIndex = 33;
            this->button33->UseVisualStyleBackColor = false;
            this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
            // 
            // button34
            // 
            this->button34->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button34->BackColor = System::Drawing::Color::BurlyWood;
            this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button34->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button34->Location = System::Drawing::Point(210, 210);
            this->button34->Margin = System::Windows::Forms::Padding(0);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(70, 70);
            this->button34->TabIndex = 34;
            this->button34->UseVisualStyleBackColor = false;
            this->button34->Click += gcnew System::EventHandler(this, &Form1::button34_Click);
            // 
            // button35
            // 
            this->button35->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button35->BackColor = System::Drawing::Color::BurlyWood;
            this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button35->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button35->Location = System::Drawing::Point(280, 210);
            this->button35->Margin = System::Windows::Forms::Padding(0);
            this->button35->Name = L"button35";
            this->button35->Size = System::Drawing::Size(70, 70);
            this->button35->TabIndex = 35;
            this->button35->UseVisualStyleBackColor = false;
            this->button35->Click += gcnew System::EventHandler(this, &Form1::button35_Click);
            // 
            // button36
            // 
            this->button36->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button36->BackColor = System::Drawing::Color::BurlyWood;
            this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button36->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button36->Location = System::Drawing::Point(350, 210);
            this->button36->Margin = System::Windows::Forms::Padding(0);
            this->button36->Name = L"button36";
            this->button36->Size = System::Drawing::Size(70, 70);
            this->button36->TabIndex = 36;
            this->button36->UseVisualStyleBackColor = false;
            this->button36->Click += gcnew System::EventHandler(this, &Form1::button36_Click);
            // 
            // button37
            // 
            this->button37->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button37->BackColor = System::Drawing::Color::BurlyWood;
            this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button37->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button37->Location = System::Drawing::Point(420, 210);
            this->button37->Margin = System::Windows::Forms::Padding(0);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(70, 70);
            this->button37->TabIndex = 37;
            this->button37->UseVisualStyleBackColor = false;
            this->button37->Click += gcnew System::EventHandler(this, &Form1::button37_Click);
            // 
            // button38
            // 
            this->button38->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button38->BackColor = System::Drawing::Color::BurlyWood;
            this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button38->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button38->Location = System::Drawing::Point(490, 210);
            this->button38->Margin = System::Windows::Forms::Padding(0);
            this->button38->Name = L"button38";
            this->button38->Size = System::Drawing::Size(70, 70);
            this->button38->TabIndex = 38;
            this->button38->UseVisualStyleBackColor = false;
            this->button38->Click += gcnew System::EventHandler(this, &Form1::button38_Click);
            // 
            // button39
            // 
            this->button39->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button39->BackColor = System::Drawing::Color::BurlyWood;
            this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button39->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button39->Location = System::Drawing::Point(560, 210);
            this->button39->Margin = System::Windows::Forms::Padding(0);
            this->button39->Name = L"button39";
            this->button39->Size = System::Drawing::Size(70, 70);
            this->button39->TabIndex = 39;
            this->button39->UseVisualStyleBackColor = false;
            this->button39->Click += gcnew System::EventHandler(this, &Form1::button39_Click);
            // 
            // button40
            // 
            this->button40->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button40->BackColor = System::Drawing::Color::BurlyWood;
            this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button40->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button40->Location = System::Drawing::Point(630, 210);
            this->button40->Margin = System::Windows::Forms::Padding(0);
            this->button40->Name = L"button40";
            this->button40->Size = System::Drawing::Size(70, 70);
            this->button40->TabIndex = 40;
            this->button40->UseVisualStyleBackColor = false;
            this->button40->Click += gcnew System::EventHandler(this, &Form1::button40_Click);
            // 
            // button41
            // 
            this->button41->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button41->BackColor = System::Drawing::Color::BurlyWood;
            this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button41->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button41->Location = System::Drawing::Point(0, 280);
            this->button41->Margin = System::Windows::Forms::Padding(0);
            this->button41->Name = L"button41";
            this->button41->Size = System::Drawing::Size(70, 70);
            this->button41->TabIndex = 41;
            this->button41->UseVisualStyleBackColor = false;
            this->button41->Click += gcnew System::EventHandler(this, &Form1::button41_Click);
            // 
            // button42
            // 
            this->button42->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button42->BackColor = System::Drawing::Color::BurlyWood;
            this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button42->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button42->Location = System::Drawing::Point(70, 280);
            this->button42->Margin = System::Windows::Forms::Padding(0);
            this->button42->Name = L"button42";
            this->button42->Size = System::Drawing::Size(70, 70);
            this->button42->TabIndex = 42;
            this->button42->UseVisualStyleBackColor = false;
            this->button42->Click += gcnew System::EventHandler(this, &Form1::button42_Click);
            // 
            // button43
            // 
            this->button43->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button43->BackColor = System::Drawing::Color::BurlyWood;
            this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button43->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button43->Location = System::Drawing::Point(140, 280);
            this->button43->Margin = System::Windows::Forms::Padding(0);
            this->button43->Name = L"button43";
            this->button43->Size = System::Drawing::Size(70, 70);
            this->button43->TabIndex = 43;
            this->button43->UseVisualStyleBackColor = false;
            this->button43->Click += gcnew System::EventHandler(this, &Form1::button43_Click);
            // 
            // button44
            // 
            this->button44->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button44->BackColor = System::Drawing::Color::BurlyWood;
            this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button44->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button44->Location = System::Drawing::Point(210, 280);
            this->button44->Margin = System::Windows::Forms::Padding(0);
            this->button44->Name = L"button44";
            this->button44->Size = System::Drawing::Size(70, 70);
            this->button44->TabIndex = 44;
            this->button44->UseVisualStyleBackColor = false;
            this->button44->Click += gcnew System::EventHandler(this, &Form1::button44_Click);
            // 
            // button45
            // 
            this->button45->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button45->BackColor = System::Drawing::Color::BurlyWood;
            this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button45->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button45->Location = System::Drawing::Point(280, 280);
            this->button45->Margin = System::Windows::Forms::Padding(0);
            this->button45->Name = L"button45";
            this->button45->Size = System::Drawing::Size(70, 70);
            this->button45->TabIndex = 45;
            this->button45->UseVisualStyleBackColor = false;
            this->button45->Click += gcnew System::EventHandler(this, &Form1::button45_Click);
            // 
            // button46
            // 
            this->button46->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button46->BackColor = System::Drawing::Color::BurlyWood;
            this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button46->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button46->Location = System::Drawing::Point(350, 280);
            this->button46->Margin = System::Windows::Forms::Padding(0);
            this->button46->Name = L"button46";
            this->button46->Size = System::Drawing::Size(70, 70);
            this->button46->TabIndex = 46;
            this->button46->UseVisualStyleBackColor = false;
            this->button46->Click += gcnew System::EventHandler(this, &Form1::button46_Click);
            // 
            // button47
            // 
            this->button47->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button47->BackColor = System::Drawing::Color::BurlyWood;
            this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button47->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button47->Location = System::Drawing::Point(420, 280);
            this->button47->Margin = System::Windows::Forms::Padding(0);
            this->button47->Name = L"button47";
            this->button47->Size = System::Drawing::Size(70, 70);
            this->button47->TabIndex = 47;
            this->button47->UseVisualStyleBackColor = false;
            this->button47->Click += gcnew System::EventHandler(this, &Form1::button47_Click);
            // 
            // button48
            // 
            this->button48->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button48->BackColor = System::Drawing::Color::BurlyWood;
            this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button48->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button48->Location = System::Drawing::Point(490, 280);
            this->button48->Margin = System::Windows::Forms::Padding(0);
            this->button48->Name = L"button48";
            this->button48->Size = System::Drawing::Size(70, 70);
            this->button48->TabIndex = 48;
            this->button48->UseVisualStyleBackColor = false;
            this->button48->Click += gcnew System::EventHandler(this, &Form1::button48_Click);
            // 
            // button49
            // 
            this->button49->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button49->BackColor = System::Drawing::Color::BurlyWood;
            this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button49->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button49->Location = System::Drawing::Point(560, 280);
            this->button49->Margin = System::Windows::Forms::Padding(0);
            this->button49->Name = L"button49";
            this->button49->Size = System::Drawing::Size(70, 70);
            this->button49->TabIndex = 49;
            this->button49->UseVisualStyleBackColor = false;
            this->button49->Click += gcnew System::EventHandler(this, &Form1::button49_Click);
            // 
            // button50
            // 
            this->button50->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button50->BackColor = System::Drawing::Color::BurlyWood;
            this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button50->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button50->Location = System::Drawing::Point(630, 280);
            this->button50->Margin = System::Windows::Forms::Padding(0);
            this->button50->Name = L"button50";
            this->button50->Size = System::Drawing::Size(70, 70);
            this->button50->TabIndex = 50;
            this->button50->UseVisualStyleBackColor = false;
            this->button50->Click += gcnew System::EventHandler(this, &Form1::button50_Click);
            // 
            // button51
            // 
            this->button51->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button51->BackColor = System::Drawing::Color::BurlyWood;
            this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button51->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button51->Location = System::Drawing::Point(0, 350);
            this->button51->Margin = System::Windows::Forms::Padding(0);
            this->button51->Name = L"button51";
            this->button51->Size = System::Drawing::Size(70, 70);
            this->button51->TabIndex = 51;
            this->button51->UseVisualStyleBackColor = false;
            this->button51->Click += gcnew System::EventHandler(this, &Form1::button51_Click);
            // 
            // button52
            // 
            this->button52->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button52->BackColor = System::Drawing::Color::BurlyWood;
            this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button52->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button52->Location = System::Drawing::Point(70, 350);
            this->button52->Margin = System::Windows::Forms::Padding(0);
            this->button52->Name = L"button52";
            this->button52->Size = System::Drawing::Size(70, 70);
            this->button52->TabIndex = 52;
            this->button52->UseVisualStyleBackColor = false;
            this->button52->Click += gcnew System::EventHandler(this, &Form1::button52_Click);
            // 
            // button53
            // 
            this->button53->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button53->BackColor = System::Drawing::Color::BurlyWood;
            this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button53->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button53->Location = System::Drawing::Point(140, 350);
            this->button53->Margin = System::Windows::Forms::Padding(0);
            this->button53->Name = L"button53";
            this->button53->Size = System::Drawing::Size(70, 70);
            this->button53->TabIndex = 53;
            this->button53->UseVisualStyleBackColor = false;
            this->button53->Click += gcnew System::EventHandler(this, &Form1::button53_Click);
            // 
            // button54
            // 
            this->button54->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button54->BackColor = System::Drawing::Color::BurlyWood;
            this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button54->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button54->Location = System::Drawing::Point(210, 350);
            this->button54->Margin = System::Windows::Forms::Padding(0);
            this->button54->Name = L"button54";
            this->button54->Size = System::Drawing::Size(70, 70);
            this->button54->TabIndex = 54;
            this->button54->UseVisualStyleBackColor = false;
            this->button54->Click += gcnew System::EventHandler(this, &Form1::button54_Click);
            // 
            // button55
            // 
            this->button55->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button55->BackColor = System::Drawing::Color::BurlyWood;
            this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button55->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button55->Location = System::Drawing::Point(280, 350);
            this->button55->Margin = System::Windows::Forms::Padding(0);
            this->button55->Name = L"button55";
            this->button55->Size = System::Drawing::Size(70, 70);
            this->button55->TabIndex = 55;
            this->button55->UseVisualStyleBackColor = false;
            this->button55->Click += gcnew System::EventHandler(this, &Form1::button55_Click);
            // 
            // button56
            // 
            this->button56->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button56->BackColor = System::Drawing::Color::BurlyWood;
            this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button56->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button56->Location = System::Drawing::Point(350, 350);
            this->button56->Margin = System::Windows::Forms::Padding(0);
            this->button56->Name = L"button56";
            this->button56->Size = System::Drawing::Size(70, 70);
            this->button56->TabIndex = 56;
            this->button56->UseVisualStyleBackColor = false;
            this->button56->Click += gcnew System::EventHandler(this, &Form1::button56_Click);
            // 
            // button57
            // 
            this->button57->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button57->BackColor = System::Drawing::Color::BurlyWood;
            this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button57->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button57->Location = System::Drawing::Point(420, 350);
            this->button57->Margin = System::Windows::Forms::Padding(0);
            this->button57->Name = L"button57";
            this->button57->Size = System::Drawing::Size(70, 70);
            this->button57->TabIndex = 57;
            this->button57->UseVisualStyleBackColor = false;
            this->button57->Click += gcnew System::EventHandler(this, &Form1::button57_Click);
            // 
            // button58
            // 
            this->button58->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button58->BackColor = System::Drawing::Color::BurlyWood;
            this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button58->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button58->Location = System::Drawing::Point(490, 350);
            this->button58->Margin = System::Windows::Forms::Padding(0);
            this->button58->Name = L"button58";
            this->button58->Size = System::Drawing::Size(70, 70);
            this->button58->TabIndex = 58;
            this->button58->UseVisualStyleBackColor = false;
            this->button58->Click += gcnew System::EventHandler(this, &Form1::button58_Click);
            // 
            // button59
            // 
            this->button59->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button59->BackColor = System::Drawing::Color::BurlyWood;
            this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button59->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button59->Location = System::Drawing::Point(560, 350);
            this->button59->Margin = System::Windows::Forms::Padding(0);
            this->button59->Name = L"button59";
            this->button59->Size = System::Drawing::Size(70, 70);
            this->button59->TabIndex = 59;
            this->button59->UseVisualStyleBackColor = false;
            this->button59->Click += gcnew System::EventHandler(this, &Form1::button59_Click);
            // 
            // button60
            // 
            this->button60->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button60->BackColor = System::Drawing::Color::BurlyWood;
            this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button60->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button60->Location = System::Drawing::Point(630, 350);
            this->button60->Margin = System::Windows::Forms::Padding(0);
            this->button60->Name = L"button60";
            this->button60->Size = System::Drawing::Size(70, 70);
            this->button60->TabIndex = 60;
            this->button60->UseVisualStyleBackColor = false;
            this->button60->Click += gcnew System::EventHandler(this, &Form1::button60_Click);
            // 
            // button61
            // 
            this->button61->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button61->BackColor = System::Drawing::Color::BurlyWood;
            this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button61->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button61->Location = System::Drawing::Point(0, 420);
            this->button61->Margin = System::Windows::Forms::Padding(0);
            this->button61->Name = L"button61";
            this->button61->Size = System::Drawing::Size(70, 70);
            this->button61->TabIndex = 61;
            this->button61->UseVisualStyleBackColor = false;
            this->button61->Click += gcnew System::EventHandler(this, &Form1::button61_Click);
            // 
            // button62
            // 
            this->button62->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button62->BackColor = System::Drawing::Color::BurlyWood;
            this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button62->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button62->Location = System::Drawing::Point(70, 420);
            this->button62->Margin = System::Windows::Forms::Padding(0);
            this->button62->Name = L"button62";
            this->button62->Size = System::Drawing::Size(70, 70);
            this->button62->TabIndex = 62;
            this->button62->UseVisualStyleBackColor = false;
            this->button62->Click += gcnew System::EventHandler(this, &Form1::button62_Click);
            // 
            // button63
            // 
            this->button63->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button63->BackColor = System::Drawing::Color::BurlyWood;
            this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button63->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button63->Location = System::Drawing::Point(140, 420);
            this->button63->Margin = System::Windows::Forms::Padding(0);
            this->button63->Name = L"button63";
            this->button63->Size = System::Drawing::Size(70, 70);
            this->button63->TabIndex = 63;
            this->button63->UseVisualStyleBackColor = false;
            this->button63->Click += gcnew System::EventHandler(this, &Form1::button63_Click);
            // 
            // button64
            // 
            this->button64->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button64->BackColor = System::Drawing::Color::BurlyWood;
            this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button64->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button64->Location = System::Drawing::Point(210, 420);
            this->button64->Margin = System::Windows::Forms::Padding(0);
            this->button64->Name = L"button64";
            this->button64->Size = System::Drawing::Size(70, 70);
            this->button64->TabIndex = 64;
            this->button64->UseVisualStyleBackColor = false;
            this->button64->Click += gcnew System::EventHandler(this, &Form1::button64_Click);
            // 
            // button65
            // 
            this->button65->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button65->BackColor = System::Drawing::Color::BurlyWood;
            this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button65->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button65->Location = System::Drawing::Point(280, 420);
            this->button65->Margin = System::Windows::Forms::Padding(0);
            this->button65->Name = L"button65";
            this->button65->Size = System::Drawing::Size(70, 70);
            this->button65->TabIndex = 65;
            this->button65->UseVisualStyleBackColor = false;
            this->button65->Click += gcnew System::EventHandler(this, &Form1::button65_Click);
            // 
            // button66
            // 
            this->button66->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button66->BackColor = System::Drawing::Color::BurlyWood;
            this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button66->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button66->Location = System::Drawing::Point(350, 420);
            this->button66->Margin = System::Windows::Forms::Padding(0);
            this->button66->Name = L"button66";
            this->button66->Size = System::Drawing::Size(70, 70);
            this->button66->TabIndex = 66;
            this->button66->UseVisualStyleBackColor = false;
            this->button66->Click += gcnew System::EventHandler(this, &Form1::button66_Click);
            // 
            // button67
            // 
            this->button67->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button67->BackColor = System::Drawing::Color::BurlyWood;
            this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button67->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button67->Location = System::Drawing::Point(420, 420);
            this->button67->Margin = System::Windows::Forms::Padding(0);
            this->button67->Name = L"button67";
            this->button67->Size = System::Drawing::Size(70, 70);
            this->button67->TabIndex = 67;
            this->button67->UseVisualStyleBackColor = false;
            this->button67->Click += gcnew System::EventHandler(this, &Form1::button67_Click);
            // 
            // button68
            // 
            this->button68->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button68->BackColor = System::Drawing::Color::BurlyWood;
            this->button68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button68->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button68->Location = System::Drawing::Point(490, 420);
            this->button68->Margin = System::Windows::Forms::Padding(0);
            this->button68->Name = L"button68";
            this->button68->Size = System::Drawing::Size(70, 70);
            this->button68->TabIndex = 68;
            this->button68->UseVisualStyleBackColor = false;
            this->button68->Click += gcnew System::EventHandler(this, &Form1::button68_Click);
            // 
            // button69
            // 
            this->button69->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button69->BackColor = System::Drawing::Color::BurlyWood;
            this->button69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button69->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button69->Location = System::Drawing::Point(560, 420);
            this->button69->Margin = System::Windows::Forms::Padding(0);
            this->button69->Name = L"button69";
            this->button69->Size = System::Drawing::Size(70, 70);
            this->button69->TabIndex = 69;
            this->button69->UseVisualStyleBackColor = false;
            this->button69->Click += gcnew System::EventHandler(this, &Form1::button69_Click);
            // 
            // button70
            // 
            this->button70->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button70->BackColor = System::Drawing::Color::BurlyWood;
            this->button70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button70->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button70->Location = System::Drawing::Point(630, 420);
            this->button70->Margin = System::Windows::Forms::Padding(0);
            this->button70->Name = L"button70";
            this->button70->Size = System::Drawing::Size(70, 70);
            this->button70->TabIndex = 70;
            this->button70->UseVisualStyleBackColor = false;
            this->button70->Click += gcnew System::EventHandler(this, &Form1::button70_Click);
            // 
            // button71
            // 
            this->button71->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button71->BackColor = System::Drawing::Color::BurlyWood;
            this->button71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button71->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button71->Location = System::Drawing::Point(0, 490);
            this->button71->Margin = System::Windows::Forms::Padding(0);
            this->button71->Name = L"button71";
            this->button71->Size = System::Drawing::Size(70, 70);
            this->button71->TabIndex = 71;
            this->button71->UseVisualStyleBackColor = false;
            this->button71->Click += gcnew System::EventHandler(this, &Form1::button71_Click);
            // 
            // button72
            // 
            this->button72->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button72->BackColor = System::Drawing::Color::BurlyWood;
            this->button72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button72->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button72->Location = System::Drawing::Point(70, 490);
            this->button72->Margin = System::Windows::Forms::Padding(0);
            this->button72->Name = L"button72";
            this->button72->Size = System::Drawing::Size(70, 70);
            this->button72->TabIndex = 72;
            this->button72->UseVisualStyleBackColor = false;
            this->button72->Click += gcnew System::EventHandler(this, &Form1::button72_Click);
            // 
            // button73
            // 
            this->button73->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button73->BackColor = System::Drawing::Color::BurlyWood;
            this->button73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button73->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button73->Location = System::Drawing::Point(140, 490);
            this->button73->Margin = System::Windows::Forms::Padding(0);
            this->button73->Name = L"button73";
            this->button73->Size = System::Drawing::Size(70, 70);
            this->button73->TabIndex = 73;
            this->button73->UseVisualStyleBackColor = false;
            this->button73->Click += gcnew System::EventHandler(this, &Form1::button73_Click);
            // 
            // button74
            // 
            this->button74->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button74->BackColor = System::Drawing::Color::BurlyWood;
            this->button74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button74->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button74->Location = System::Drawing::Point(210, 490);
            this->button74->Margin = System::Windows::Forms::Padding(0);
            this->button74->Name = L"button74";
            this->button74->Size = System::Drawing::Size(70, 70);
            this->button74->TabIndex = 74;
            this->button74->UseVisualStyleBackColor = false;
            this->button74->Click += gcnew System::EventHandler(this, &Form1::button74_Click);
            // 
            // button75
            // 
            this->button75->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button75->BackColor = System::Drawing::Color::BurlyWood;
            this->button75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button75->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button75->Location = System::Drawing::Point(280, 490);
            this->button75->Margin = System::Windows::Forms::Padding(0);
            this->button75->Name = L"button75";
            this->button75->Size = System::Drawing::Size(70, 70);
            this->button75->TabIndex = 75;
            this->button75->UseVisualStyleBackColor = false;
            this->button75->Click += gcnew System::EventHandler(this, &Form1::button75_Click);
            // 
            // button76
            // 
            this->button76->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button76->BackColor = System::Drawing::Color::BurlyWood;
            this->button76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button76->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button76->Location = System::Drawing::Point(350, 490);
            this->button76->Margin = System::Windows::Forms::Padding(0);
            this->button76->Name = L"button76";
            this->button76->Size = System::Drawing::Size(70, 70);
            this->button76->TabIndex = 76;
            this->button76->UseVisualStyleBackColor = false;
            this->button76->Click += gcnew System::EventHandler(this, &Form1::button76_Click);
            // 
            // button77
            // 
            this->button77->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button77->BackColor = System::Drawing::Color::BurlyWood;
            this->button77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button77->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button77->Location = System::Drawing::Point(420, 490);
            this->button77->Margin = System::Windows::Forms::Padding(0);
            this->button77->Name = L"button77";
            this->button77->Size = System::Drawing::Size(70, 70);
            this->button77->TabIndex = 77;
            this->button77->UseVisualStyleBackColor = false;
            this->button77->Click += gcnew System::EventHandler(this, &Form1::button77_Click);
            // 
            // button78
            // 
            this->button78->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button78->BackColor = System::Drawing::Color::BurlyWood;
            this->button78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button78->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button78->Location = System::Drawing::Point(490, 490);
            this->button78->Margin = System::Windows::Forms::Padding(0);
            this->button78->Name = L"button78";
            this->button78->Size = System::Drawing::Size(70, 70);
            this->button78->TabIndex = 78;
            this->button78->UseVisualStyleBackColor = false;
            this->button78->Click += gcnew System::EventHandler(this, &Form1::button78_Click);
            // 
            // button79
            // 
            this->button79->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button79->BackColor = System::Drawing::Color::BurlyWood;
            this->button79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button79->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button79->Location = System::Drawing::Point(560, 490);
            this->button79->Margin = System::Windows::Forms::Padding(0);
            this->button79->Name = L"button79";
            this->button79->Size = System::Drawing::Size(70, 70);
            this->button79->TabIndex = 79;
            this->button79->UseVisualStyleBackColor = false;
            this->button79->Click += gcnew System::EventHandler(this, &Form1::button79_Click);
            // 
            // button80
            // 
            this->button80->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button80->BackColor = System::Drawing::Color::BurlyWood;
            this->button80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button80->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button80->Location = System::Drawing::Point(630, 490);
            this->button80->Margin = System::Windows::Forms::Padding(0);
            this->button80->Name = L"button80";
            this->button80->Size = System::Drawing::Size(70, 70);
            this->button80->TabIndex = 80;
            this->button80->UseVisualStyleBackColor = false;
            this->button80->Click += gcnew System::EventHandler(this, &Form1::button80_Click);
            // 
            // button81
            // 
            this->button81->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button81->BackColor = System::Drawing::Color::BurlyWood;
            this->button81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button81->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button81->Location = System::Drawing::Point(0, 560);
            this->button81->Margin = System::Windows::Forms::Padding(0);
            this->button81->Name = L"button81";
            this->button81->Size = System::Drawing::Size(70, 70);
            this->button81->TabIndex = 81;
            this->button81->UseVisualStyleBackColor = false;
            this->button81->Click += gcnew System::EventHandler(this, &Form1::button81_Click);
            // 
            // button82
            // 
            this->button82->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button82->BackColor = System::Drawing::Color::BurlyWood;
            this->button82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button82->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button82->Location = System::Drawing::Point(70, 560);
            this->button82->Margin = System::Windows::Forms::Padding(0);
            this->button82->Name = L"button82";
            this->button82->Size = System::Drawing::Size(70, 70);
            this->button82->TabIndex = 82;
            this->button82->UseVisualStyleBackColor = false;
            this->button82->Click += gcnew System::EventHandler(this, &Form1::button82_Click);
            // 
            // button83
            // 
            this->button83->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button83->BackColor = System::Drawing::Color::BurlyWood;
            this->button83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button83->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button83->Location = System::Drawing::Point(140, 560);
            this->button83->Margin = System::Windows::Forms::Padding(0);
            this->button83->Name = L"button83";
            this->button83->Size = System::Drawing::Size(70, 70);
            this->button83->TabIndex = 83;
            this->button83->UseVisualStyleBackColor = false;
            this->button83->Click += gcnew System::EventHandler(this, &Form1::button83_Click);
            // 
            // button84
            // 
            this->button84->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button84->BackColor = System::Drawing::Color::BurlyWood;
            this->button84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button84->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button84->Location = System::Drawing::Point(210, 560);
            this->button84->Margin = System::Windows::Forms::Padding(0);
            this->button84->Name = L"button84";
            this->button84->Size = System::Drawing::Size(70, 70);
            this->button84->TabIndex = 84;
            this->button84->UseVisualStyleBackColor = false;
            this->button84->Click += gcnew System::EventHandler(this, &Form1::button84_Click);
            // 
            // button85
            // 
            this->button85->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button85->BackColor = System::Drawing::Color::BurlyWood;
            this->button85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button85->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button85->Location = System::Drawing::Point(280, 560);
            this->button85->Margin = System::Windows::Forms::Padding(0);
            this->button85->Name = L"button85";
            this->button85->Size = System::Drawing::Size(70, 70);
            this->button85->TabIndex = 85;
            this->button85->UseVisualStyleBackColor = false;
            this->button85->Click += gcnew System::EventHandler(this, &Form1::button85_Click);
            // 
            // button86
            // 
            this->button86->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button86->BackColor = System::Drawing::Color::BurlyWood;
            this->button86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button86->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button86->Location = System::Drawing::Point(350, 560);
            this->button86->Margin = System::Windows::Forms::Padding(0);
            this->button86->Name = L"button86";
            this->button86->Size = System::Drawing::Size(70, 70);
            this->button86->TabIndex = 86;
            this->button86->UseVisualStyleBackColor = false;
            this->button86->Click += gcnew System::EventHandler(this, &Form1::button86_Click);
            // 
            // button87
            // 
            this->button87->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button87->BackColor = System::Drawing::Color::BurlyWood;
            this->button87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button87->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button87->Location = System::Drawing::Point(420, 560);
            this->button87->Margin = System::Windows::Forms::Padding(0);
            this->button87->Name = L"button87";
            this->button87->Size = System::Drawing::Size(70, 70);
            this->button87->TabIndex = 87;
            this->button87->UseVisualStyleBackColor = false;
            this->button87->Click += gcnew System::EventHandler(this, &Form1::button87_Click);
            // 
            // button88
            // 
            this->button88->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button88->BackColor = System::Drawing::Color::BurlyWood;
            this->button88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button88->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button88->Location = System::Drawing::Point(490, 560);
            this->button88->Margin = System::Windows::Forms::Padding(0);
            this->button88->Name = L"button88";
            this->button88->Size = System::Drawing::Size(70, 70);
            this->button88->TabIndex = 88;
            this->button88->UseVisualStyleBackColor = false;
            this->button88->Click += gcnew System::EventHandler(this, &Form1::button88_Click);
            // 
            // button89
            // 
            this->button89->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button89->BackColor = System::Drawing::Color::BurlyWood;
            this->button89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button89->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button89->Location = System::Drawing::Point(560, 560);
            this->button89->Margin = System::Windows::Forms::Padding(0);
            this->button89->Name = L"button89";
            this->button89->Size = System::Drawing::Size(70, 70);
            this->button89->TabIndex = 89;
            this->button89->UseVisualStyleBackColor = false;
            this->button89->Click += gcnew System::EventHandler(this, &Form1::button89_Click);
            // 
            // button90
            // 
            this->button90->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button90->BackColor = System::Drawing::Color::BurlyWood;
            this->button90->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button90->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button90->Location = System::Drawing::Point(630, 560);
            this->button90->Margin = System::Windows::Forms::Padding(0);
            this->button90->Name = L"button90";
            this->button90->Size = System::Drawing::Size(70, 70);
            this->button90->TabIndex = 90;
            this->button90->UseVisualStyleBackColor = false;
            this->button90->Click += gcnew System::EventHandler(this, &Form1::button90_Click);
            // 
            // button91
            // 
            this->button91->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button91->BackColor = System::Drawing::Color::BurlyWood;
            this->button91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button91->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button91->Location = System::Drawing::Point(0, 630);
            this->button91->Margin = System::Windows::Forms::Padding(0);
            this->button91->Name = L"button91";
            this->button91->Size = System::Drawing::Size(70, 70);
            this->button91->TabIndex = 91;
            this->button91->UseVisualStyleBackColor = false;
            this->button91->Click += gcnew System::EventHandler(this, &Form1::button91_Click);
            // 
            // button92
            // 
            this->button92->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button92->BackColor = System::Drawing::Color::BurlyWood;
            this->button92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button92->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button92->Location = System::Drawing::Point(70, 630);
            this->button92->Margin = System::Windows::Forms::Padding(0);
            this->button92->Name = L"button92";
            this->button92->Size = System::Drawing::Size(70, 70);
            this->button92->TabIndex = 92;
            this->button92->UseVisualStyleBackColor = false;
            this->button92->Click += gcnew System::EventHandler(this, &Form1::button92_Click);
            // 
            // button93
            // 
            this->button93->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button93->BackColor = System::Drawing::Color::BurlyWood;
            this->button93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button93->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button93->Location = System::Drawing::Point(140, 630);
            this->button93->Margin = System::Windows::Forms::Padding(0);
            this->button93->Name = L"button93";
            this->button93->Size = System::Drawing::Size(70, 70);
            this->button93->TabIndex = 93;
            this->button93->UseVisualStyleBackColor = false;
            this->button93->Click += gcnew System::EventHandler(this, &Form1::button93_Click);
            // 
            // button94
            // 
            this->button94->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button94->BackColor = System::Drawing::Color::BurlyWood;
            this->button94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button94->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button94->Location = System::Drawing::Point(210, 630);
            this->button94->Margin = System::Windows::Forms::Padding(0);
            this->button94->Name = L"button94";
            this->button94->Size = System::Drawing::Size(70, 70);
            this->button94->TabIndex = 94;
            this->button94->UseVisualStyleBackColor = false;
            this->button94->Click += gcnew System::EventHandler(this, &Form1::button94_Click);
            // 
            // button95
            // 
            this->button95->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button95->BackColor = System::Drawing::Color::BurlyWood;
            this->button95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button95->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button95->Location = System::Drawing::Point(280, 630);
            this->button95->Margin = System::Windows::Forms::Padding(0);
            this->button95->Name = L"button95";
            this->button95->Size = System::Drawing::Size(70, 70);
            this->button95->TabIndex = 95;
            this->button95->UseVisualStyleBackColor = false;
            this->button95->Click += gcnew System::EventHandler(this, &Form1::button95_Click);
            // 
            // button96
            // 
            this->button96->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button96->BackColor = System::Drawing::Color::BurlyWood;
            this->button96->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button96->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button96->Location = System::Drawing::Point(350, 630);
            this->button96->Margin = System::Windows::Forms::Padding(0);
            this->button96->Name = L"button96";
            this->button96->Size = System::Drawing::Size(70, 70);
            this->button96->TabIndex = 96;
            this->button96->UseVisualStyleBackColor = false;
            this->button96->Click += gcnew System::EventHandler(this, &Form1::button96_Click);
            // 
            // button97
            // 
            this->button97->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button97->BackColor = System::Drawing::Color::BurlyWood;
            this->button97->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button97->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button97->Location = System::Drawing::Point(420, 630);
            this->button97->Margin = System::Windows::Forms::Padding(0);
            this->button97->Name = L"button97";
            this->button97->Size = System::Drawing::Size(70, 70);
            this->button97->TabIndex = 97;
            this->button97->UseVisualStyleBackColor = false;
            this->button97->Click += gcnew System::EventHandler(this, &Form1::button97_Click);
            // 
            // button98
            // 
            this->button98->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button98->BackColor = System::Drawing::Color::BurlyWood;
            this->button98->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button98->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button98->Location = System::Drawing::Point(490, 630);
            this->button98->Margin = System::Windows::Forms::Padding(0);
            this->button98->Name = L"button98";
            this->button98->Size = System::Drawing::Size(70, 70);
            this->button98->TabIndex = 98;
            this->button98->UseVisualStyleBackColor = false;
            this->button98->Click += gcnew System::EventHandler(this, &Form1::button98_Click);
            // 
            // button99
            // 
            this->button99->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button99->BackColor = System::Drawing::Color::BurlyWood;
            this->button99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button99->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button99->Location = System::Drawing::Point(560, 630);
            this->button99->Margin = System::Windows::Forms::Padding(0);
            this->button99->Name = L"button99";
            this->button99->Size = System::Drawing::Size(70, 70);
            this->button99->TabIndex = 99;
            this->button99->UseVisualStyleBackColor = false;
            this->button99->Click += gcnew System::EventHandler(this, &Form1::button99_Click);
            // 
            // button100
            // 
            this->button100->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button100->BackColor = System::Drawing::Color::BurlyWood;
            this->button100->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button100->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button100->Location = System::Drawing::Point(630, 630);
            this->button100->Margin = System::Windows::Forms::Padding(0);
            this->button100->Name = L"button100";
            this->button100->Size = System::Drawing::Size(70, 70);
            this->button100->TabIndex = 100;
            this->button100->UseVisualStyleBackColor = false;
            this->button100->Click += gcnew System::EventHandler(this, &Form1::button100_Click);
            // 
            // label1
            // 
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Silver;
            this->label1->Location = System::Drawing::Point(790, 69);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(350, 92);
            this->label1->TabIndex = 1;
            this->label1->Text = L"CHOOSE YOUR MARK";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // OMark
            // 
            this->OMark->BackColor = System::Drawing::Color::Silver;
            this->OMark->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->OMark->FlatAppearance->BorderSize = 0;
            this->OMark->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->OMark->Font = (gcnew System::Drawing::Font(L"Impact", 28.2F, System::Drawing::FontStyle::Bold));
            this->OMark->Location = System::Drawing::Point(1016, 175);
            this->OMark->Margin = System::Windows::Forms::Padding(0);
            this->OMark->Name = L"OMark";
            this->OMark->Size = System::Drawing::Size(124, 86);
            this->OMark->TabIndex = 1;
            this->OMark->Text = L"O";
            this->OMark->UseVisualStyleBackColor = false;
            this->OMark->Click += gcnew System::EventHandler(this, &Form1::OMark_Click);
            // 
            // SMark
            // 
            this->SMark->BackColor = System::Drawing::Color::Silver;
            this->SMark->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->SMark->FlatAppearance->BorderSize = 0;
            this->SMark->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->SMark->Font = (gcnew System::Drawing::Font(L"Impact", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(162)));
            this->SMark->Location = System::Drawing::Point(795, 175);
            this->SMark->Margin = System::Windows::Forms::Padding(0);
            this->SMark->Name = L"SMark";
            this->SMark->Size = System::Drawing::Size(124, 86);
            this->SMark->TabIndex = 0;
            this->SMark->Text = L"S";
            this->SMark->UseVisualStyleBackColor = false;
            this->SMark->Click += gcnew System::EventHandler(this, &Form1::SMark_Click);
            // 
            // label2
            // 
            this->label2->BackColor = System::Drawing::Color::Thistle;
            this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(795, 455);
            this->label2->Margin = System::Windows::Forms::Padding(0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(94, 47);
            this->label2->TabIndex = 2;
            this->label2->Text = L"P1: ";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            // 
            // label3
            // 
            this->label3->BackColor = System::Drawing::Color::Thistle;
            this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.2F, System::Drawing::FontStyle::Bold));
            this->label3->Location = System::Drawing::Point(889, 455);
            this->label3->Margin = System::Windows::Forms::Padding(0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(75, 47);
            this->label3->TabIndex = 3;
            this->label3->Text = L"0";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label4
            // 
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(795, 548);
            this->label4->Margin = System::Windows::Forms::Padding(0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(94, 47);
            this->label4->TabIndex = 4;
            this->label4->Text = L"P2: ";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            // 
            // label5
            // 
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.2F, System::Drawing::FontStyle::Bold));
            this->label5->Location = System::Drawing::Point(889, 548);
            this->label5->Margin = System::Windows::Forms::Padding(0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(75, 47);
            this->label5->TabIndex = 5;
            this->label5->Text = L"0";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::DarkSlateGray;
            this->ClientSize = System::Drawing::Size(1187, 857);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->OMark);
            this->Controls->Add(this->SMark);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->flowLayoutPanel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Margin = System::Windows::Forms::Padding(4);
            this->MaximizeBox = false;
            this->Name = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

        // You can call the functions at a button click. If you prefer, 
         // you can call them by clicking a menu item.


    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void SMark_Click(System::Object^ sender, System::EventArgs^ e) {

        if (OMark->FlatAppearance->BorderColor == System::Drawing::Color::Crimson) {
            OMark->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            OMark->FlatAppearance->BorderSize = 0;
        }
        ChosenMark = "S";
        Button^ clickedbutton;
        clickedbutton = dynamic_cast<Button^>(sender);
        clickedbutton->FlatAppearance->BorderColor = System::Drawing::Color::Crimson;
        clickedbutton->FlatAppearance->BorderSize = 9;
    }

    private: System::Void OMark_Click(System::Object^ sender, System::EventArgs^ e) {

        if (SMark->FlatAppearance->BorderColor == System::Drawing::Color::Crimson) {
            SMark->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            SMark->FlatAppearance->BorderSize = 0;
        }

        ChosenMark = "O";
        Button^ clickedbutton;
        clickedbutton = dynamic_cast<Button^>(sender);
        clickedbutton->FlatAppearance->BorderColor = System::Drawing::Color::Crimson;
        clickedbutton->FlatAppearance->BorderSize = 9;
    }


    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;

        //
       // if Mark = S
      //
        if (ChosenMark == "S") {

            button1->Text = "S";
            button1->Enabled = false;
            //
            //
            // Check for points
            if (button2->Text == "O" && button3->Text == "S") {
                button1->BackColor = System::Drawing::Color::Firebrick;
                button2->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button11->Text == "O" && button21->Text == "S") {
                button1->BackColor = System::Drawing::Color::Firebrick;
                button11->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button12->Text == "O" && button23->Text == "S") {
                button1->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        }
        else if (ChosenMark == "O") {
            button1->Text = "O";
            button1->Enabled = false;

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of S Mark if statement 
    } // end of button1_click


    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button2->Text = "S";
            button2->Enabled = false;

            //
            //
            // Check for points
            if (button3->Text == "O" && button4->Text == "S") {
                button2->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button12->Text == "O" && button22->Text == "S") {
                button2->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button13->Text == "O" && button24->Text == "S") {
                button2->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button2->Text = "O";
            button2->Enabled = false;
            //
            //Check for points 
            //
            if (button1->Text == "S" && button3->Text == "S") {
                button2->BackColor = System::Drawing::Color::Firebrick;
                button1->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    } // end of button2 click func

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button3->Text = "S";
            button3->Enabled = false;
            //
            //
            // Check for points
            if (button4->Text == "O" && button5->Text == "S") {
                button3->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
             if (button2->Text == "O" && button1->Text == "S") {
                button3->BackColor = System::Drawing::Color::Firebrick;
                button2->BackColor = System::Drawing::Color::Firebrick;
                button1->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button13->Text == "O" && button23->Text == "S") {
                button3->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
             if (button14->Text == "O" && button25->Text == "S") {
                button3->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button12->Text == "O" && button21->Text == "S") {
                button3->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button3->Text = "O";
            button3->Enabled = false;
            //
            //Check for points 
            //
            if (button2->Text == "S" && button4->Text == "S") {
                button3->BackColor = System::Drawing::Color::Firebrick;
                button2->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of button 3 click func

    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button4->Text = "S";
            button4->Enabled = false;
            //
            //
            // Check for points
            if (button5->Text == "O" && button6->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button3->Text == "O" && button2->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                button2->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
             if (button14->Text == "O" && button24->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button15->Text == "O" && button26->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button13->Text == "O" && button22->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button4->Text = "O";
            button4->Enabled = false;
            //
            //Check for points 
            //
            if (button3->Text == "S" && button5->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    } //end of button4 click func 

    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button5->Text = "S";
            button5->Enabled = false;          
            //
            //
            // Check for points
            if (button6->Text == "O" && button7->Text == "S") {
                button5->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button4->Text == "O" && button3->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button15->Text == "O" && button25->Text == "S") {
                button5->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button16->Text == "O" && button27->Text == "S") {
                button5->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button14->Text == "O" && button23->Text == "S") {
                button5->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button5->Text = "O";
            button5->Enabled = false;
            //
            //Check for points 
            //
            if (button4->Text == "S" && button6->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    } // end of button5 click 
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button6->Text = "S";
            button6->Enabled = false;
            //
            //
            // Check for points
            if (button7->Text == "O" && button8->Text == "S") {
                button6->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button5->Text == "O" && button4->Text == "S") {
                button4->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button16->Text == "O" && button26->Text == "S") {
                button6->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button17->Text == "O" && button28->Text == "S") {
                button6->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button15->Text == "O" && button24->Text == "S") {
                button6->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button6->Text = "O";
            button6->Enabled = false;
            //
            //Check for points 
            //
            if (button5->Text == "S" && button7->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button7->Text = "S";
            button7->Enabled = false;
            //
            //
            // Check for points
            if (button7->Text == "O" && button9->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button6->Text == "O" && button5->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button17->Text == "O" && button27->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button18->Text == "O" && button29->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button16->Text == "O" && button25->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button7->Text = "O";
            button7->Enabled = false;
            //
            //Check for points 
            //
            if (button6->Text == "S" && button8->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button8->Text = "S";
            button8->Enabled = false;
            //
            //
            // Check for points
            if (button9->Text == "O" && button10->Text == "S") {
                button8->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                button10->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button7->Text == "O" && button6->Text == "S") {
                button8->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button18->Text == "O" && button28->Text == "S") {
                button8->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button19->Text == "O" && button30->Text == "S") {
                button8->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button17->Text == "O" && button26->Text == "S") {
                button8->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button8->Text = "O";
            button8->Enabled = false;
            //
            //Check for points 
            //
            if (button7->Text == "S" && button9->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button9->Text = "S";
            button9->Enabled = false;
            //
            //
            // Check for points

            if (button8->Text == "O" && button7->Text == "S") {
                button8->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button19->Text == "O" && button29->Text == "S") {
                button9->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button18->Text == "O" && button27->Text == "S") {
                button9->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button9->Text = "O";
            button9->Enabled = false;
            //
            //Check for points 
            //
            if (button8->Text == "S" && button10->Text == "S") {
                button7->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    } // end of click button9
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button10->Text = "S";
            button10->Enabled = false;
            //
            //
            // Check for points

            if (button9->Text == "O" && button8->Text == "S") {
                button8->BackColor = System::Drawing::Color::Firebrick;
                button10->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button20->Text == "O" && button30->Text == "S") {
                button10->BackColor = System::Drawing::Color::Firebrick;
                button20->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button19->Text == "O" && button28->Text == "S") {
                button10->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button10->Text = "O";
            button10->Enabled = false;

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }

        } //end of Mark O statement
    } // end of button click 10
    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;

        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button11->Text = "S";
            button11->Enabled = false;
            //
            //
            // Check for points

            if (button12->Text == "O" && button13->Text == "S") {
                button11->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button21->Text == "O" && button31->Text == "S") {
                button11->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button22->Text == "O" && button33->Text == "S") {
                button11->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button11->Text = "O";
            button11->Enabled = false;

            if (button1->Text == "S" && button21->Text == "S") {
                button1->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                button11->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    } //end of click 11 
    private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button12->Text = "S";
            button12->Enabled = false;
            //
            //
            // Check for points

            if (button13->Text == "O" && button14->Text == "S") {
                button12->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button22->Text == "O" && button32->Text == "S") {
                button12->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button23->Text == "O" && button34->Text == "S") {
                button12->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button12->Text = "O";
            button12->Enabled = false;
            //
            //Chech points
            //

            if (button2->Text == "S" && button22->Text == "S") {
                button12->BackColor = System::Drawing::Color::Firebrick;
                button2->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button11->Text == "S" && button13->Text == "S") {
                button12->BackColor = System::Drawing::Color::Firebrick;
                button11->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button1->Text == "S" && button23->Text == "S") {
                button1->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button3->Text == "S" && button21->Text == "S") {
                button3->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }//end of click 12
    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button13->Text = "S";
            button13->Enabled = false;
            //
            //
            // Check for points

            if (button14->Text == "O" && button15->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button12->Text == "O" && button11->Text == "S") {
                button11->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button23->Text == "O" && button33->Text == "S") {
                button13->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button24->Text == "O" && button35->Text == "S") {
                button13->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button22->Text == "O" && button31->Text == "S") {
                button13->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button13->Text = "O";
            button13->Enabled = false;
            //
            //Chech points
            //
            if (button3->Text == "S" && button23->Text == "S") {
                button13->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button12->Text == "S" && button14->Text == "S") {
                button12->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button2->Text == "S" && button24->Text == "S") {
                button13->BackColor = System::Drawing::Color::Firebrick;
                button2->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button4->Text == "S" && button22->Text == "S") {
                button13->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 13
    private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button14->Text = "S";
            button14->Enabled = false;
            //
            //
            // Check for points

            if (button15->Text == "O" && button16->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button13->Text == "O" && button12->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button24->Text == "O" && button34->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button25->Text == "O" && button36->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button23->Text == "O" && button32->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button14->Text = "O";
            button14->Enabled = false;

            if (button4->Text == "S" && button24->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button13->Text == "S" && button15->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button3->Text == "S" && button25->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button5->Text == "S" && button23->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 14
    private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button15->Text = "S";
            button15->Enabled = false;
            //
            //
            // Check for points

            if (button16->Text == "O" && button17->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button14->Text == "O" && button13->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button25->Text == "O" && button35->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button26->Text == "O" && button37->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button24->Text == "O" && button33->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button15->Text = "O";
            button15->Enabled = false;

            if (button5->Text == "S" && button25->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button14->Text == "S" && button16->Text == "S") {
                button14->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button4->Text == "S" && button26->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button6->Text == "S" && button24->Text == "S") {
                button15->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 15
    private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button16->Text = "S";
            button16->Enabled = false;
            //
            //
            // Check for points

            if (button17->Text == "O" && button18->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button15->Text == "O" && button14->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button26->Text == "O" && button36->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button27->Text == "O" && button38->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button25->Text == "O" && button34->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button16->Text = "O";
            button16->Enabled = false;

            if (button6->Text == "S" && button26->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button15->Text == "S" && button17->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button5->Text == "S" && button27->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button7->Text == "S" && button25->Text == "S") {
                button16->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 16

    private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button17->Text = "S";
            button17->Enabled = false;
            //
            //
            // Check for points

            if (button18->Text == "O" && button19->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button16->Text == "O" && button15->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button27->Text == "O" && button37->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button28->Text == "O" && button39->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button26->Text == "O" && button35->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button17->Text = "O";
            button17->Enabled = false;

            if (button7->Text == "S" && button27->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button16->Text == "S" && button18->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button6->Text == "S" && button28->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button8->Text == "S" && button26->Text == "S") {
                button17->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 17

    private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button18->Text = "S";
            button18->Enabled = false;
            //
            //
            // Check for points

            if (button19->Text == "O" && button20->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button20->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button17->Text == "O" && button16->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button28->Text == "O" && button38->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button29->Text == "O" && button40->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button27->Text == "O" && button36->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button18->Text = "O";
            button18->Enabled = false;

            if (button8->Text == "S" && button28->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button17->Text == "S" && button19->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button7->Text == "S" && button29->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button9->Text == "S" && button27->Text == "S") {
                button18->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 18

    private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button19->Text = "S";
            button19->Enabled = false;
            //
            //
            // Check for points

            if (button18->Text == "O" && button17->Text == "S") {
                button19->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button29->Text == "O" && button39->Text == "S") {
                button19->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button28->Text == "O" && button37->Text == "S") {
                button19->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button19->Text = "O";
            button19->Enabled = false;

            if (button9->Text == "S" && button29->Text == "S") {
                button19->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button18->Text == "S" && button20->Text == "S") {
                button19->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button20->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button8->Text == "S" && button30->Text == "S") {
                button19->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button10->Text == "S" && button28->Text == "S") {
                button19->BackColor = System::Drawing::Color::Firebrick;
                button10->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 19
    private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button20->Text = "S";
            button20->Enabled = false;
            //
            //
            // Check for points


            if (button19->Text == "O" && button18->Text == "S") {
                button20->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button30->Text == "O" && button40->Text == "S") {
                button20->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button29->Text == "O" && button38->Text == "S") {
                button20->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button20->Text = "O";
            button20->Enabled = false;

            if (button10->Text == "S" && button30->Text == "S") {
                button20->BackColor = System::Drawing::Color::Firebrick;
                button10->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 20
    private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button21->Text = "S";
            button21->Enabled = false;
            //
            //
            // Check for points
            if (button11->Text == "O" && button1->Text == "S") {
                button21->BackColor = System::Drawing::Color::Firebrick;
                button11->BackColor = System::Drawing::Color::Firebrick;
                button1->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button31->Text == "O" && button41->Text == "S") {
                button21->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button22->Text == "O" && button23->Text == "S") {
                button21->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button12->Text == "O" && button3->Text == "S") {
                button21->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button32->Text == "O" && button43->Text == "S") {
                button21->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button21->Text = "O";
            button21->Enabled = false;

            if (button11->Text == "S" && button31->Text == "S") {
                button11->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }

        } //end of Mark O statement
    } // end of click 21
    private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button22->Text = "S";
            button22->Enabled = false;
            //
            //
            // Check for points


            if (button23->Text == "O" && button24->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button12->Text == "O" && button2->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button2->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button32->Text == "O" && button42->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button13->Text == "O" && button4->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button33->Text == "O" && button44->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button22->Text = "O";
            button22->Enabled = false;

            if (button12->Text == "S" && button32->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button21->Text == "S" && button23->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button11->Text == "S" && button33->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button11->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button13->Text == "S" && button31->Text == "S") {
                button22->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    } // end of click 22 
    private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button23->Text = "S";
            button23->Enabled = false;
            //
            //
            // Check for points


            if (button24->Text == "O" && button25->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button22->Text == "O" && button21->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button13->Text == "O" && button3->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button33->Text == "O" && button43->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button14->Text == "O" && button5->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button12->Text == "O" && button1->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button1->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button34->Text == "O" && button45->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button32->Text == "O" && button41->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button23->Text = "O";
            button23->Enabled = false;

            if (button13->Text == "S" && button33->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button22->Text == "S" && button24->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button12->Text == "S" && button34->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button14->Text == "S" && button32->Text == "S") {
                button23->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 23
    private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {

        again = false;

        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button24->Text = "S";
            button24->Enabled = false;
            //
            //
            // Check for points


            if (button25->Text == "O" && button26->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button23->Text == "O" && button22->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button14->Text == "O" && button4->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button34->Text == "O" && button44->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button15->Text == "O" && button6->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button13->Text == "O" && button2->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button2->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button35->Text == "O" && button46->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button33->Text == "O" && button42->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button24->Text = "O";
            button24->Enabled = false;

            if (button14->Text == "S" && button34->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button23->Text == "S" && button25->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button13->Text == "S" && button35->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button15->Text == "S" && button33->Text == "S") {
                button24->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 24
    private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button25->Text = "S";
            button25->Enabled = false;
            //
            //
            // Check for points


            if (button26->Text == "O" && button27->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button24->Text == "O" && button23->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button15->Text == "O" && button5->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button35->Text == "O" && button45->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button16->Text == "O" && button7->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button14->Text == "O" && button3->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button3->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button36->Text == "O" && button47->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button34->Text == "O" && button43->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button25->Text = "O";
            button25->Enabled = false;

            if (button15->Text == "S" && button35->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button24->Text == "S" && button26->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button14->Text == "S" && button36->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button16->Text == "S" && button34->Text == "S") {
                button25->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }   //end of click 25

    private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button26->Text = "S";
            button26->Enabled = false;
            //
            //
            // Check for points


            if (button27->Text == "O" && button28->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button25->Text == "O" && button24->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button16->Text == "O" && button6->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button36->Text == "O" && button46->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button17->Text == "O" && button8->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button15->Text == "O" && button4->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button4->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button37->Text == "O" && button48->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button35->Text == "O" && button44->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button26->Text = "O";
            button26->Enabled = false;

            if (button16->Text == "S" && button36->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button25->Text == "S" && button27->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button15->Text == "S" && button37->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button17->Text == "S" && button35->Text == "S") {
                button26->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }   //end of click 26

    private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button27->Text = "S";
            button27->Enabled = false;
            //
            //
            // Check for points


            if (button28->Text == "O" && button29->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button26->Text == "O" && button25->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button17->Text == "O" && button7->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button37->Text == "O" && button47->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button18->Text == "O" && button9->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button16->Text == "O" && button5->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button5->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button38->Text == "O" && button49->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button36->Text == "O" && button45->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button27->Text = "O";
            button27->Enabled = false;

            if (button17->Text == "S" && button37->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button26->Text == "S" && button28->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button16->Text == "S" && button38->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button18->Text == "S" && button36->Text == "S") {
                button27->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 27
    private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button28->Text = "S";
            button28->Enabled = false;
            //
            //
            // Check for points


            if (button29->Text == "O" && button30->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button27->Text == "O" && button26->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button18->Text == "O" && button8->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button38->Text == "O" && button48->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button19->Text == "O" && button10->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button10->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button17->Text == "O" && button6->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button6->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button39->Text == "O" && button50->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button37->Text == "O" && button46->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button28->Text = "O";
            button28->Enabled = false;

            if (button18->Text == "S" && button38->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button27->Text == "S" && button29->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button17->Text == "S" && button39->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button19->Text == "S" && button37->Text == "S") {
                button28->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 28

    private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button29->Text = "S";
            button29->Enabled = false;
            //
            //
            // Check for points



            if (button28->Text == "O" && button27->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button19->Text == "O" && button9->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button9->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button39->Text == "O" && button49->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button18->Text == "O" && button7->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button7->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button38->Text == "O" && button47->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button29->Text = "O";
            button29->Enabled = false;

            if (button19->Text == "S" && button39->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button28->Text == "S" && button30->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button18->Text == "S" && button40->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button20->Text == "S" && button38->Text == "S") {
                button29->BackColor = System::Drawing::Color::Firebrick;
                button20->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 29

    private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
       // if Mark = S
       //
        if (ChosenMark == "S") {

            button30->Text = "S";
            button30->Enabled = false;
            //
            //
            // Check for points



            if (button29->Text == "O" && button28->Text == "S") {
                button30->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button20->Text == "O" && button10->Text == "S") {
                button30->BackColor = System::Drawing::Color::Firebrick;
                button10->BackColor = System::Drawing::Color::Firebrick;
                button20->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button40->Text == "O" && button50->Text == "S") {
                button30->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button19->Text == "O" && button8->Text == "S") {
                button30->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button8->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button39->Text == "O" && button48->Text == "S") {
                button30->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button30->Text = "O";
            button30->Enabled = false;

            if (button20->Text == "S" && button40->Text == "S") {
                button30->BackColor = System::Drawing::Color::Firebrick;
                button20->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 30

    private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
       // if Mark = S
       //
        if (ChosenMark == "S") {

            button31->Text = "S";
            button31->Enabled = false;
            //
            //
            // Check for points

            if (button21->Text == "O" && button11->Text == "S") {
                button31->BackColor = System::Drawing::Color::Firebrick;
                button11->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button41->Text == "O" && button51->Text == "S") {
                button31->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button32->Text == "O" && button33->Text == "S") {
                button31->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button22->Text == "O" && button13->Text == "S") {
                button31->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button42->Text == "O" && button53->Text == "S") {
                button31->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button31->Text = "O";
            button31->Enabled = false;

            if (button21->Text == "S" && button41->Text == "S") {
                button31->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 31

    private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
       // if Mark = S
       //
        if (ChosenMark == "S") {

            button32->Text = "S";
            button32->Enabled = false;
            //
            //
            // Check for points

            if (button22->Text == "O" && button12->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button42->Text == "O" && button52->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button33->Text == "O" && button34->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button23->Text == "O" && button14->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button43->Text == "O" && button54->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button32->Text = "O";
            button32->Enabled = false;

            if (button22->Text == "S" && button42->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button31->Text == "S" && button33->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button23->Text == "S" && button41->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button21->Text == "S" && button43->Text == "S") {
                button32->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 32

    private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button33->Text = "S";
            button33->Enabled = false;
            //
            //
            // Check for points

            if (button23->Text == "O" && button13->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button43->Text == "O" && button53->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button34->Text == "O" && button35->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button32->Text == "O" && button31->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button24->Text == "O" && button15->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button22->Text == "O" && button11->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button11->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button44->Text == "O" && button55->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button42->Text == "O" && button51->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button33->Text = "O";
            button33->Enabled = false;

            if (button23->Text == "S" && button43->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button32->Text == "S" && button34->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button24->Text == "S" && button42->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button22->Text == "S" && button44->Text == "S") {
                button33->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 33
    private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button34->Text = "S";
            button34->Enabled = false;
            //
            //
            // Check for points

            if (button24->Text == "O" && button14->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button44->Text == "O" && button54->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button35->Text == "O" && button36->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button33->Text == "O" && button32->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button25->Text == "O" && button16->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button23->Text == "O" && button12->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button12->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button45->Text == "O" && button56->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button43->Text == "O" && button52->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button34->Text = "O";
            button34->Enabled = false;

            if (button24->Text == "S" && button44->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button33->Text == "S" && button35->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button25->Text == "S" && button43->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button23->Text == "S" && button45->Text == "S") {
                button34->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 34
    private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button35->Text = "S";
            button35->Enabled = false;
            //
            //
            // Check for points

            if (button25->Text == "O" && button15->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button45->Text == "O" && button55->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button36->Text == "O" && button37->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button34->Text == "O" && button33->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button26->Text == "O" && button17->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button24->Text == "O" && button13->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button13->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button46->Text == "O" && button57->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button44->Text == "O" && button53->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button35->Text = "O";
            button35->Enabled = false;

            if (button25->Text == "S" && button45->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button34->Text == "S" && button36->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button26->Text == "S" && button44->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button24->Text == "S" && button46->Text == "S") {
                button35->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 35
    private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button36->Text = "S";
            button36->Enabled = false;
            //
            //
            // Check for points

            if (button26->Text == "O" && button16->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button46->Text == "O" && button56->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button37->Text == "O" && button38->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button35->Text == "O" && button34->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button27->Text == "O" && button18->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button25->Text == "O" && button14->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button14->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button47->Text == "O" && button58->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button45->Text == "O" && button54->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button36->Text = "O";
            button36->Enabled = false;

            if (button26->Text == "S" && button46->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button35->Text == "S" && button37->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button27->Text == "S" && button45->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button25->Text == "S" && button47->Text == "S") {
                button36->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 36

    private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button37->Text = "S";
            button37->Enabled = false;
            //
            //
            // Check for points

            if (button27->Text == "O" && button17->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button47->Text == "O" && button57->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button38->Text == "O" && button39->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button36->Text == "O" && button35->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button28->Text == "O" && button19->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button26->Text == "O" && button15->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button15->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button48->Text == "O" && button59->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button46->Text == "O" && button55->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button37->Text = "O";
            button37->Enabled = false;

            if (button27->Text == "S" && button47->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button36->Text == "S" && button38->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button28->Text == "S" && button46->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button26->Text == "S" && button48->Text == "S") {
                button37->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 37
    private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button38->Text = "S";
            button38->Enabled = false;
            //
            //
            // Check for points

            if (button28->Text == "O" && button18->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button48->Text == "O" && button58->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button39->Text == "O" && button40->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button37->Text == "O" && button36->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button29->Text == "O" && button20->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button20->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button27->Text == "O" && button16->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button16->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button49->Text == "O" && button60->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button47->Text == "O" && button56->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button38->Text = "O";
            button38->Enabled = false;

            if (button28->Text == "S" && button48->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button37->Text == "S" && button39->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button29->Text == "S" && button47->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button27->Text == "S" && button49->Text == "S") {
                button38->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 38
    private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button39->Text = "S";
            button39->Enabled = false;
            //
            //
            // Check for points

            if (button29->Text == "O" && button19->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button19->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button49->Text == "O" && button59->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button38->Text == "O" && button37->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button28->Text == "O" && button17->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button17->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button48->Text == "O" && button57->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button39->Text = "O";
            button39->Enabled = false;

            if (button29->Text == "S" && button49->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button38->Text == "S" && button40->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button30->Text == "S" && button48->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button28->Text == "S" && button50->Text == "S") {
                button39->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 39
    private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button40->Text = "S";
            button40->Enabled = false;
            //
            //
            // Check for points

            if (button30->Text == "O" && button20->Text == "S") {
                button40->BackColor = System::Drawing::Color::Firebrick;
                button20->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button50->Text == "O" && button60->Text == "S") {
                button40->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button39->Text == "O" && button38->Text == "S") {
                button40->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button29->Text == "O" && button18->Text == "S") {
                button40->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button18->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button49->Text == "O" && button58->Text == "S") {
                button40->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button40->Text = "O";
            button40->Enabled = false;

            if (button30->Text == "S" && button50->Text == "S") {
                button30->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button39->Text == "S" && button41->Text == "S") {
                button40->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button31->Text == "S" && button49->Text == "S") {
                button40->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button29->Text == "S" && button51->Text == "S") {
                button40->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 40
    private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button41->Text = "S";
            button41->Enabled = false;
            //
            //
            // Check for points

            if (button31->Text == "O" && button21->Text == "S") {
                button41->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button51->Text == "O" && button61->Text == "S") {
                button41->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button42->Text == "O" && button43->Text == "S") {
                button41->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button32->Text == "O" && button23->Text == "S") {
                button41->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button52->Text == "O" && button63->Text == "S") {
                button41->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button41->Text = "O";
            button41->Enabled = false;

            if (button31->Text == "S" && button51->Text == "S") {
                button41->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 41
    private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button42->Text = "S";
            button42->Enabled = false;
            //
            //
            // Check for points

            if (button32->Text == "O" && button22->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button52->Text == "O" && button62->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button43->Text == "O" && button44->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button33->Text == "O" && button24->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button53->Text == "O" && button64->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button42->Text = "O";
            button42->Enabled = false;

            if (button32->Text == "S" && button52->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button41->Text == "S" && button43->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button31->Text == "S" && button53->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button33->Text == "S" && button51->Text == "S") {
                button42->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 42
    private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button43->Text = "S";
            button43->Enabled = false;
            //
            //
            // Check for points

            if (button33->Text == "O" && button23->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button53->Text == "O" && button63->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button44->Text == "O" && button45->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button42->Text == "O" && button41->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button34->Text == "O" && button25->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button32->Text == "O" && button21->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button21->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button52->Text == "O" && button61->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button54->Text == "O" && button65->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button43->Text = "O";
            button43->Enabled = false;

            if (button33->Text == "S" && button53->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button42->Text == "S" && button44->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button32->Text == "S" && button54->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button34->Text == "S" && button52->Text == "S") {
                button43->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 43

    private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button44->Text = "S";
            button44->Enabled = false;
            //
            //
            // Check for points

            if (button34->Text == "O" && button24->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button54->Text == "O" && button64->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button45->Text == "O" && button46->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button43->Text == "O" && button42->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button35->Text == "O" && button26->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button33->Text == "O" && button22->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button22->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button53->Text == "O" && button62->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button55->Text == "O" && button66->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button44->Text = "O";
            button44->Enabled = false;

            if (button34->Text == "S" && button54->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button43->Text == "S" && button45->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button33->Text == "S" && button55->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button35->Text == "S" && button53->Text == "S") {
                button44->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 44
    private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button45->Text = "S";
            button45->Enabled = false;
            //
            //
            // Check for points

            if (button35->Text == "O" && button25->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button55->Text == "O" && button65->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button46->Text == "O" && button47->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button44->Text == "O" && button43->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button36->Text == "O" && button27->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button34->Text == "O" && button23->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button23->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button54->Text == "O" && button63->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button56->Text == "O" && button67->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button45->Text = "O";
            button45->Enabled = false;

            if (button35->Text == "S" && button55->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button44->Text == "S" && button46->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button34->Text == "S" && button56->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button36->Text == "S" && button54->Text == "S") {
                button45->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 45
    private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button46->Text = "S";
            button46->Enabled = false;
            //
            //
            // Check for points

            if (button36->Text == "O" && button26->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button56->Text == "O" && button66->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button47->Text == "O" && button48->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button45->Text == "O" && button44->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button37->Text == "O" && button28->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button35->Text == "O" && button24->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button24->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button55->Text == "O" && button64->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button57->Text == "O" && button68->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button46->Text = "O";
            button46->Enabled = false;

            if (button36->Text == "S" && button56->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button45->Text == "S" && button47->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button35->Text == "S" && button57->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button37->Text == "S" && button55->Text == "S") {
                button46->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 46
    private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button47->Text = "S";
            button47->Enabled = false;
            //
            //
            // Check for points

            if (button37->Text == "O" && button27->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button57->Text == "O" && button67->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button48->Text == "O" && button49->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button46->Text == "O" && button45->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button38->Text == "O" && button29->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button36->Text == "O" && button25->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button25->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button56->Text == "O" && button65->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button58->Text == "O" && button69->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button47->Text = "O";
            button47->Enabled = false;

            if (button37->Text == "S" && button57->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button46->Text == "S" && button48->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button36->Text == "S" && button58->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button38->Text == "S" && button56->Text == "S") {
                button47->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 47
    private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button48->Text = "S";
            button48->Enabled = false;
            //
            //
            // Check for points

            if (button38->Text == "O" && button28->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button58->Text == "O" && button68->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button49->Text == "O" && button50->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button47->Text == "O" && button46->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button39->Text == "O" && button30->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button37->Text == "O" && button26->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button26->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button57->Text == "O" && button66->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button59->Text == "O" && button70->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button48->Text = "O";
            button48->Enabled = false;

            if (button38->Text == "S" && button58->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button47->Text == "S" && button49->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button37->Text == "S" && button59->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button39->Text == "S" && button57->Text == "S") {
                button48->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 48
    private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button49->Text = "S";
            button49->Enabled = false;
            //
            //
            // Check for points

            if (button39->Text == "O" && button29->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button29->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button59->Text == "O" && button69->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button48->Text == "O" && button47->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button38->Text == "O" && button27->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button27->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button58->Text == "O" && button67->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button49->Text = "O";
            button49->Enabled = false;

            if (button39->Text == "S" && button59->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button48->Text == "S" && button50->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button38->Text == "S" && button60->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button40->Text == "S" && button58->Text == "S") {
                button49->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 49
    private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button50->Text = "S";
            button50->Enabled = false;
            //
            //
            // Check for points

            if (button40->Text == "O" && button30->Text == "S") {
                button50->BackColor = System::Drawing::Color::Firebrick;
                button30->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button60->Text == "O" && button70->Text == "S") {
                button50->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button49->Text == "O" && button48->Text == "S") {
                button50->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button39->Text == "O" && button28->Text == "S") {
                button50->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button28->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button59->Text == "O" && button68->Text == "S") {
                button50->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button50->Text = "O";
            button50->Enabled = false;

            if (button40->Text == "S" && button60->Text == "S") {
                button50->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 50
    private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button51->Text = "S";
            button51->Enabled = false;
            //
            //
            // Check for points

            if (button41->Text == "O" && button31->Text == "S") {
                button51->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button61->Text == "O" && button71->Text == "S") {
                button51->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button52->Text == "O" && button53->Text == "S") {
                button51->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button42->Text == "O" && button33->Text == "S") {
                button51->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button62->Text == "O" && button73->Text == "S") {
                button51->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button51->Text = "O";
            button51->Enabled = false;

            if (button41->Text == "S" && button61->Text == "S") {
                button51->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 51
    private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button52->Text = "S";
            button52->Enabled = false;
            //
            //
            // Check for points

            if (button42->Text == "O" && button32->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button62->Text == "O" && button72->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button53->Text == "O" && button54->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button43->Text == "O" && button34->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button63->Text == "O" && button74->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button52->Text = "O";
            button52->Enabled = false;

            if (button42->Text == "S" && button62->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button51->Text == "S" && button53->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button41->Text == "S" && button63->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button43->Text == "S" && button61->Text == "S") {
                button52->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 52
    private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button53->Text = "S";
            button53->Enabled = false;
            //
            //
            // Check for points

            if (button43->Text == "O" && button33->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button63->Text == "O" && button73->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button54->Text == "O" && button55->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button52->Text == "O" && button51->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button44->Text == "O" && button35->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button42->Text == "O" && button31->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button31->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button64->Text == "O" && button75->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button62->Text == "O" && button71->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button53->Text = "O";
            button53->Enabled = false;

            if (button43->Text == "S" && button63->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button52->Text == "S" && button54->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button42->Text == "S" && button64->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button44->Text == "S" && button62->Text == "S") {
                button53->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 53
    private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button54->Text = "S";
            button54->Enabled = false;
            //
            //
            // Check for points

            if (button44->Text == "O" && button34->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button64->Text == "O" && button74->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button55->Text == "O" && button56->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button53->Text == "O" && button52->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button45->Text == "O" && button36->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button43->Text == "O" && button32->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button32->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button65->Text == "O" && button76->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button63->Text == "O" && button72->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button54->Text = "O";
            button54->Enabled = false;

            if (button44->Text == "S" && button64->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button53->Text == "S" && button55->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button43->Text == "S" && button65->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button45->Text == "S" && button63->Text == "S") {
                button54->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 54
    private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button55->Text = "S";
            button55->Enabled = false;
            //
            //
            // Check for points

            if (button45->Text == "O" && button35->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button65->Text == "O" && button75->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button56->Text == "O" && button57->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button54->Text == "O" && button53->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button46->Text == "O" && button37->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button44->Text == "O" && button33->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button33->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button66->Text == "O" && button77->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button64->Text == "O" && button73->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button55->Text = "O";
            button55->Enabled = false;

            if (button45->Text == "S" && button65->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button54->Text == "S" && button56->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button44->Text == "S" && button66->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button46->Text == "S" && button64->Text == "S") {
                button55->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 55
    private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button56->Text = "S";
            button56->Enabled = false;
            //
            //
            // Check for points

            if (button46->Text == "O" && button36->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button66->Text == "O" && button76->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button57->Text == "O" && button58->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button55->Text == "O" && button54->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button47->Text == "O" && button38->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button45->Text == "O" && button34->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button34->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button67->Text == "O" && button78->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button65->Text == "O" && button74->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button56->Text = "O";
            button56->Enabled = false;

            if (button46->Text == "S" && button66->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button55->Text == "S" && button57->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button45->Text == "S" && button67->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button47->Text == "S" && button65->Text == "S") {
                button56->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 56
    private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button57->Text = "S";
            button57->Enabled = false;
            //
            //
            // Check for points

            if (button47->Text == "O" && button37->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button67->Text == "O" && button77->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button58->Text == "O" && button59->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button56->Text == "O" && button55->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button48->Text == "O" && button39->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button46->Text == "O" && button35->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button35->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button68->Text == "O" && button79->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button66->Text == "O" && button75->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button57->Text = "O";
            button57->Enabled = false;

            if (button47->Text == "S" && button67->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button56->Text == "S" && button58->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button46->Text == "S" && button68->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button48->Text == "S" && button66->Text == "S") {
                button57->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 57
    private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button58->Text = "S";
            button58->Enabled = false;
            //
            //
            // Check for points

            if (button48->Text == "O" && button38->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button68->Text == "O" && button78->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button59->Text == "O" && button60->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button57->Text == "O" && button56->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button49->Text == "O" && button40->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button47->Text == "O" && button36->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button36->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button69->Text == "O" && button80->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button67->Text == "O" && button76->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button58->Text = "O";
            button58->Enabled = false;

            if (button48->Text == "S" && button68->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button57->Text == "S" && button59->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button47->Text == "S" && button69->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button49->Text == "S" && button67->Text == "S") {
                button58->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 58
    private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button59->Text = "S";
            button59->Enabled = false;
            //
            //
            // Check for points

            if (button49->Text == "O" && button39->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button39->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button69->Text == "O" && button79->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button58->Text == "O" && button57->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button48->Text == "O" && button37->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button37->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button68->Text == "O" && button77->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button59->Text = "O";
            button59->Enabled = false;

            if (button49->Text == "S" && button69->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button58->Text == "S" && button60->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button48->Text == "S" && button70->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button50->Text == "S" && button68->Text == "S") {
                button59->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 59
    private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button60->Text = "S";
            button60->Enabled = false;
            //
            //
            // Check for points

            if (button50->Text == "O" && button40->Text == "S") {
                button60->BackColor = System::Drawing::Color::Firebrick;
                button40->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button70->Text == "O" && button80->Text == "S") {
                button60->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button59->Text == "O" && button58->Text == "S") {
                button60->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button49->Text == "O" && button38->Text == "S") {
                button60->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button38->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button69->Text == "O" && button78->Text == "S") {
                button60->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button60->Text = "O";
            button60->Enabled = false;

            if (button50->Text == "S" && button70->Text == "S") {
                button60->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 60
    private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button61->Text = "S";
            button61->Enabled = false;
            //
            //
            // Check for points

            if (button51->Text == "O" && button41->Text == "S") {
                button61->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button71->Text == "O" && button81->Text == "S") {
                button61->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                button81->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button62->Text == "O" && button63->Text == "S") {
                button61->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button52->Text == "O" && button43->Text == "S") {
                button61->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button72->Text == "O" && button83->Text == "S") {
                button61->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button61->Text = "O";
            button61->Enabled = false;

            if (button51->Text == "S" && button71->Text == "S") {
                button61->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 61
    private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button62->Text = "S";
            button62->Enabled = false;
            //
            //
            // Check for points

            if (button52->Text == "O" && button42->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button72->Text == "O" && button82->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button63->Text == "O" && button64->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button53->Text == "O" && button44->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button73->Text == "O" && button84->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button62->Text = "O";
            button62->Enabled = false;

            if (button52->Text == "S" && button72->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button61->Text == "S" && button63->Text == "S") {
                button61->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button53->Text == "S" && button71->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button51->Text == "S" && button73->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 62
    private: System::Void button63_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button63->Text = "S";
            button63->Enabled = false;
            //
            //
            // Check for points

            if (button53->Text == "O" && button43->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button73->Text == "O" && button83->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button64->Text == "O" && button65->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button62->Text == "O" && button61->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button54->Text == "O" && button45->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button52->Text == "O" && button41->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button41->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button74->Text == "O" && button85->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button72->Text == "O" && button81->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button81->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button63->Text = "O";
            button63->Enabled = false;

            if (button53->Text == "S" && button73->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button62->Text == "S" && button64->Text == "S") {
                button62->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button54->Text == "S" && button72->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button52->Text == "S" && button74->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 63
    private: System::Void button64_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button64->Text = "S";
            button64->Enabled = false;
            //
            //
            // Check for points

            if (button54->Text == "O" && button44->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button74->Text == "O" && button84->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button65->Text == "O" && button66->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button63->Text == "O" && button62->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button55->Text == "O" && button46->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button53->Text == "O" && button42->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button42->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button75->Text == "O" && button86->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button73->Text == "O" && button82->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button64->Text = "O";
            button64->Enabled = false;

            if (button54->Text == "S" && button74->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button63->Text == "S" && button65->Text == "S") {
                button63->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button55->Text == "S" && button73->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button53->Text == "S" && button75->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 64
    private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button65->Text = "S";
            button65->Enabled = false;
            //
            //
            // Check for points

            if (button55->Text == "O" && button45->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button75->Text == "O" && button85->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button66->Text == "O" && button67->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button64->Text == "O" && button63->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button56->Text == "O" && button47->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button54->Text == "O" && button43->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button43->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button76->Text == "O" && button87->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button74->Text == "O" && button83->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button65->Text = "O";
            button65->Enabled = false;
            
            if (button55->Text == "S" && button75->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button64->Text == "S" && button66->Text == "S") {
                button64->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button56->Text == "S" && button74->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button54->Text == "S" && button76->Text == "S") {
                button65->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 65
    private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button66->Text = "S";
            button66->Enabled = false;
            //
            //
            // Check for points

            if (button56->Text == "O" && button46->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button76->Text == "O" && button86->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button67->Text == "O" && button68->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button65->Text == "O" && button64->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button57->Text == "O" && button48->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button55->Text == "O" && button44->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button44->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button77->Text == "O" && button88->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button75->Text == "O" && button84->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button66->Text = "O";
            button66->Enabled = false;

            if (button56->Text == "S" && button76->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button65->Text == "S" && button67->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button57->Text == "S" && button75->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button55->Text == "S" && button77->Text == "S") {
                button66->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 66
    private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button67->Text = "S";
            button67->Enabled = false;
            //
            //
            // Check for points

            if (button57->Text == "O" && button47->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button77->Text == "O" && button87->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button68->Text == "O" && button69->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button66->Text == "O" && button65->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button58->Text == "O" && button49->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button56->Text == "O" && button45->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button45->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button78->Text == "O" && button89->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button76->Text == "O" && button85->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button67->Text = "O";
            button67->Enabled = false;

            if (button57->Text == "S" && button77->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button66->Text == "S" && button68->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button58->Text == "S" && button76->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button56->Text == "S" && button78->Text == "S") {
                button67->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 67
    private: System::Void button68_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button68->Text = "S";
            button68->Enabled = false;
            //
            //
            // Check for points

            if (button58->Text == "O" && button48->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button78->Text == "O" && button88->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button69->Text == "O" && button70->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button67->Text == "O" && button66->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button59->Text == "O" && button50->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button57->Text == "O" && button46->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button46->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button79->Text == "O" && button90->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button90->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button77->Text == "O" && button86->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button68->Text = "O";
            button68->Enabled = false;

            if (button58->Text == "S" && button78->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button67->Text == "S" && button69->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button59->Text == "S" && button77->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button57->Text == "S" && button79->Text == "S") {
                button68->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 68
    private: System::Void button69_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button69->Text = "S";
            button69->Enabled = false;
            //
            //
            // Check for points

            if (button59->Text == "O" && button49->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button49->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button79->Text == "O" && button89->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button68->Text == "O" && button67->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button58->Text == "O" && button47->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button47->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button78->Text == "O" && button87->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button69->Text = "O";
            button69->Enabled = false;

            if (button59->Text == "S" && button79->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button68->Text == "S" && button70->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button60->Text == "S" && button78->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button58->Text == "S" && button80->Text == "S") {
                button69->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 69
    private: System::Void button70_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button70->Text = "S";
            button70->Enabled = false;
            //
            //
            // Check for points

            if (button60->Text == "O" && button50->Text == "S") {
                button70->BackColor = System::Drawing::Color::Firebrick;
                button50->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button80->Text == "O" && button90->Text == "S") {
                button70->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                button90->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button69->Text == "O" && button68->Text == "S") {
                button70->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button59->Text == "O" && button48->Text == "S") {
                button70->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button48->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button79->Text == "O" && button88->Text == "S") {
                button70->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button70->Text = "O";
            button70->Enabled = false;

            if (button60->Text == "S" && button80->Text == "S") {
                button70->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 70
    private: System::Void button71_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button71->Text = "S";
            button71->Enabled = false;
            //
            //
            // Check for points

            if (button61->Text == "O" && button51->Text == "S") {
                button71->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button81->Text == "O" && button91->Text == "S") {
                button71->BackColor = System::Drawing::Color::Firebrick;
                button81->BackColor = System::Drawing::Color::Firebrick;
                button91->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button72->Text == "O" && button73->Text == "S") {
                button71->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button62->Text == "O" && button53->Text == "S") {
                button71->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button82->Text == "O" && button93->Text == "S") {
                button71->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button71->Text = "O";
            button71->Enabled = false;

            if (button61->Text == "S" && button81->Text == "S") {
                button71->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                button81->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 71
    private: System::Void button72_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button72->Text = "S";
            button72->Enabled = false;
            //
            //
            // Check for points

            if (button62->Text == "O" && button52->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button82->Text == "O" && button92->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button92->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button73->Text == "O" && button74->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button63->Text == "O" && button54->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button83->Text == "O" && button94->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button72->Text = "O";
            button72->Enabled = false;

            if (button62->Text == "S" && button82->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button71->Text == "S" && button73->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button63->Text == "S" && button81->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button81->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button61->Text == "S" && button83->Text == "S") {
                button72->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 72
    private: System::Void button73_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button73->Text = "S";
            button73->Enabled = false;
            //
            //
            // Check for points

            if (button63->Text == "O" && button53->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button83->Text == "O" && button93->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button72->Text == "O" && button71->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button74->Text == "O" && button75->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button64->Text == "O" && button55->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button62->Text == "O" && button51->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button51->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button84->Text == "O" && button95->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button82->Text == "O" && button91->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button91->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button73->Text = "O";
            button73->Enabled = false;

            if (button63->Text == "S" && button83->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button72->Text == "S" && button74->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button64->Text == "S" && button82->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button62->Text == "S" && button84->Text == "S") {
                button73->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 73
    private: System::Void button74_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button74->Text = "S";
            button74->Enabled = false;
            //
            //
            // Check for points

            if (button64->Text == "O" && button54->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button84->Text == "O" && button94->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button73->Text == "O" && button72->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button75->Text == "O" && button76->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button65->Text == "O" && button56->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button63->Text == "O" && button52->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button52->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button85->Text == "O" && button96->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button83->Text == "O" && button92->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button92->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button74->Text = "O";
            button74->Enabled = false;

            if (button64->Text == "S" && button84->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button73->Text == "S" && button75->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button65->Text == "S" && button83->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button63->Text == "S" && button85->Text == "S") {
                button74->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 74
    private: System::Void button75_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button75->Text = "S";
            button75->Enabled = false;
            //
            //
            // Check for points

            if (button65->Text == "O" && button55->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button85->Text == "O" && button95->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button74->Text == "O" && button73->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button76->Text == "O" && button77->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button66->Text == "O" && button57->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button64->Text == "O" && button53->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button53->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button86->Text == "O" && button97->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button84->Text == "O" && button93->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button75->Text = "O";
            button75->Enabled = false;

            if (button65->Text == "S" && button85->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button74->Text == "S" && button76->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button66->Text == "S" && button84->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button64->Text == "S" && button86->Text == "S") {
                button75->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 75
    private: System::Void button76_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button76->Text = "S";
            button76->Enabled = false;
            //
            //
            // Check for points

            if (button66->Text == "O" && button56->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button86->Text == "O" && button96->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button75->Text == "O" && button74->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button77->Text == "O" && button78->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button67->Text == "O" && button58->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button65->Text == "O" && button54->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button54->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button87->Text == "O" && button98->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button85->Text == "O" && button94->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button76->Text = "O";
            button76->Enabled = false;

            if (button66->Text == "S" && button86->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button75->Text == "S" && button77->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button67->Text == "S" && button85->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button65->Text == "S" && button87->Text == "S") {
                button76->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 76
    private: System::Void button77_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button77->Text = "S";
            button77->Enabled = false;
            //
            //
            // Check for points

            if (button67->Text == "O" && button57->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button87->Text == "O" && button97->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button76->Text == "O" && button75->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button78->Text == "O" && button79->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button68->Text == "O" && button59->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button66->Text == "O" && button55->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button55->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button88->Text == "O" && button99->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button99->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button86->Text == "O" && button95->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button77->Text = "O";
            button77->Enabled = false;

            if (button67->Text == "S" && button87->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button76->Text == "S" && button78->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button68->Text == "S" && button86->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button66->Text == "S" && button88->Text == "S") {
                button77->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 77
    private: System::Void button78_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button78->Text = "S";
            button78->Enabled = false;
            //
            //
            // Check for points

            if (button68->Text == "O" && button58->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button88->Text == "O" && button98->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button77->Text == "O" && button76->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button79->Text == "O" && button80->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button69->Text == "O" && button60->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button67->Text == "O" && button56->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button56->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button89->Text == "O" && button100->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                button100->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button87->Text == "O" && button96->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button78->Text = "O";
            button78->Enabled = false;

            if (button68->Text == "S" && button88->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button77->Text == "S" && button79->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button69->Text == "S" && button87->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button67->Text == "S" && button89->Text == "S") {
                button78->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 78
    private: System::Void button79_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button79->Text = "S";
            button79->Enabled = false;
            //
            //
            // Check for points

            if (button69->Text == "O" && button59->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button59->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button89->Text == "O" && button99->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                button99->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button78->Text == "O" && button77->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button68->Text == "O" && button57->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button57->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button88->Text == "O" && button97->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button79->Text = "O";
            button79->Enabled = false;

            if (button69->Text == "S" && button89->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button78->Text == "S" && button80->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button70->Text == "S" && button88->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }
            if (button68->Text == "S" && button90->Text == "S") {
                button79->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                button90->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 79
    private: System::Void button80_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button80->Text = "S";
            button80->Enabled = false;
            //
            //
            // Check for points

            if (button70->Text == "O" && button60->Text == "S") {
                button80->BackColor = System::Drawing::Color::Firebrick;
                button60->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }


            if (button90->Text == "O" && button100->Text == "S") {
                button80->BackColor = System::Drawing::Color::Firebrick;
                button90->BackColor = System::Drawing::Color::Firebrick;
                button100->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button79->Text == "O" && button78->Text == "S") {
                button80->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button69->Text == "O" && button58->Text == "S") {
                button80->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                button58->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button89->Text == "O" && button98->Text == "S") {
                button80->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button80->Text = "O";
            button80->Enabled = false;

            if (button70->Text == "S" && button90->Text == "S") {
                button80->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                button90->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 80

    private: System::Void button81_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button81->Text = "S";
            button81->Enabled = false;
            //
            //
            // Check for points

            if (button71->Text == "O" && button61->Text == "S") {
                button81->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button82->Text == "O" && button83->Text == "S") {
                button81->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button72->Text == "O" && button63->Text == "S") {
                button81->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button81->Text = "O";
            button81->Enabled = false;

            if (button71->Text == "S" && button91->Text == "S") {
                button81->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                button91->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 81
    private: System::Void button82_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button82->Text = "S";
            button82->Enabled = false;
            //
            //
            // Check for points

            if (button72->Text == "O" && button62->Text == "S") {
                button82->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button83->Text == "O" && button84->Text == "S") {
                button82->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button73->Text == "O" && button64->Text == "S") {
                button82->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button82->Text = "O";
            button82->Enabled = false;

            if (button72->Text == "S" && button92->Text == "S") {
                button82->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button92->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button81->Text == "S" && button83->Text == "S") {
                button82->BackColor = System::Drawing::Color::Firebrick;
                button81->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button91->Text == "S" && button73->Text == "S") {
                button82->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button91->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button71->Text == "S" && button93->Text == "S") {
                button82->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 82
    private: System::Void button83_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
       // if Mark = S
       //
        if (ChosenMark == "S") {

            button83->Text = "S";
            button83->Enabled = false;
            //
            //
            // Check for points

            if (button73->Text == "O" && button63->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button84->Text == "O" && button85->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button82->Text == "O" && button81->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button81->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button74->Text == "O" && button65->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button72->Text == "O" && button61->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button61->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button83->Text = "O";
            button83->Enabled = false;

            if (button73->Text == "S" && button93->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button82->Text == "S" && button84->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button92->Text == "S" && button74->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button92->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button72->Text == "S" && button94->Text == "S") {
                button83->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 83
    private: System::Void button84_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button84->Text = "S";
            button84->Enabled = false;
            //
            //
            // Check for points

            if (button74->Text == "O" && button64->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button85->Text == "O" && button86->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button83->Text == "O" && button82->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button75->Text == "O" && button66->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button73->Text == "O" && button62->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button62->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button84->Text = "O";
            button84->Enabled = false;

            if (button74->Text == "S" && button94->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button83->Text == "S" && button85->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button93->Text == "S" && button75->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button73->Text == "S" && button95->Text == "S") {
                button84->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 84
    private: System::Void button85_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
       // if Mark = S
      //
        if (ChosenMark == "S") {

            button85->Text = "S";
            button85->Enabled = false;
            //
            //
            // Check for points

            if (button75->Text == "O" && button65->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button86->Text == "O" && button87->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button84->Text == "O" && button83->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button76->Text == "O" && button67->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button74->Text == "O" && button63->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button63->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button85->Text = "O";
            button85->Enabled = false;

            if (button75->Text == "S" && button95->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button84->Text == "S" && button86->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button94->Text == "S" && button76->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button74->Text == "S" && button96->Text == "S") {
                button85->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 85

    private: System::Void button86_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
         // if Mark = S
         //
        if (ChosenMark == "S") {

            button86->Text = "S";
            button86->Enabled = false;
            //
            //
            // Check for points

            if (button76->Text == "O" && button66->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button87->Text == "O" && button88->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button85->Text == "O" && button84->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button77->Text == "O" && button68->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button75->Text == "O" && button64->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button64->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button86->Text = "O";
            button86->Enabled = false;

            if (button76->Text == "S" && button96->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button85->Text == "S" && button87->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button95->Text == "S" && button77->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button75->Text == "S" && button97->Text == "S") {
                button86->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 86

    private: System::Void button87_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
         // if Mark = S
         //
        if (ChosenMark == "S") {

            button87->Text = "S";
            button87->Enabled = false;
            //
            //
            // Check for points

            if (button77->Text == "O" && button67->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button88->Text == "O" && button89->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button86->Text == "O" && button85->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button78->Text == "O" && button69->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button76->Text == "O" && button65->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button65->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button87->Text = "O";
            button87->Enabled = false;

            if (button77->Text == "S" && button97->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button86->Text == "S" && button88->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button96->Text == "S" && button78->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button76->Text == "S" && button98->Text == "S") {
                button87->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 87

    private: System::Void button88_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button88->Text = "S";
            button88->Enabled = false;
            //
            //
            // Check for points

            if (button78->Text == "O" && button68->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button89->Text == "O" && button90->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                button90->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button87->Text == "O" && button86->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button79->Text == "O" && button70->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button77->Text == "O" && button66->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button66->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button88->Text = "O";
            button88->Enabled = false;

            if (button78->Text == "S" && button98->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button87->Text == "S" && button89->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button97->Text == "S" && button79->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button77->Text == "S" && button99->Text == "S") {
                button88->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                button99->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 88
    private: System::Void button89_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
       // if Mark = S
       //
        if (ChosenMark == "S") {

            button89->Text = "S";
            button89->Enabled = false;
            //
            //
            // Check for points

            if (button79->Text == "O" && button69->Text == "S") {
                button89->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button69->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button88->Text == "O" && button87->Text == "S") {
                button89->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button78->Text == "O" && button67->Text == "S") {
                button89->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button67->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button89->Text = "O";
            button89->Enabled = false;

            if (button79->Text == "S" && button99->Text == "S") {
                button89->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button99->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button88->Text == "S" && button90->Text == "S") {
                button89->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button90->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button98->Text == "S" && button80->Text == "S") {
                button89->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button78->Text == "S" && button100->Text == "S") {
                button89->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                button100->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 89
    private: System::Void button90_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
      // if Mark = S
      //
        if (ChosenMark == "S") {

            button90->Text = "S";
            button90->Enabled = false;
            //
            //
            // Check for points

            if (button80->Text == "O" && button70->Text == "S") {
                button90->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                button70->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button89->Text == "O" && button88->Text == "S") {
                button90->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button79->Text == "O" && button68->Text == "S") {
                button90->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                button68->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button90->Text = "O";
            button90->Enabled = false;

            if (button80->Text == "S" && button100->Text == "S") {
                button90->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                button100->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 90

    private: System::Void button91_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button91->Text = "S";
            button91->Enabled = false;
            //
            //
            // Check for points

            if (button81->Text == "O" && button71->Text == "S") {
                button91->BackColor = System::Drawing::Color::Firebrick;
                button81->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button92->Text == "O" && button93->Text == "S") {
                button91->BackColor = System::Drawing::Color::Firebrick;
                button92->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button82->Text == "O" && button73->Text == "S") {
                button91->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button91->Text = "O";
            button91->Enabled = false;

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }

        } //end of Mark O statement
    }// end of click 91
    private: System::Void button92_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button92->Text = "S";
            button92->Enabled = false;
            //
            //
            // Check for points

            if (button82->Text == "O" && button72->Text == "S") {
                button92->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button93->Text == "O" && button94->Text == "S") {
                button92->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button83->Text == "O" && button74->Text == "S") {
                button92->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button92->Text = "O";
            button92->Enabled = false;

            if (button91->Text == "S" && button93->Text == "S") {
                button92->BackColor = System::Drawing::Color::Firebrick;
                button91->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 92
    private: System::Void button93_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button93->Text = "S";
            button93->Enabled = false;
            //
            //
            // Check for points

            if (button83->Text == "O" && button73->Text == "S") {
                button93->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button94->Text == "O" && button95->Text == "S") {
                button93->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button92->Text == "O" && button91->Text == "S") {
                button93->BackColor = System::Drawing::Color::Firebrick;
                button92->BackColor = System::Drawing::Color::Firebrick;
                button91->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button84->Text == "O" && button75->Text == "S") {
                button93->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button82->Text == "O" && button71->Text == "S") {
                button93->BackColor = System::Drawing::Color::Firebrick;
                button82->BackColor = System::Drawing::Color::Firebrick;
                button71->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button93->Text = "O";
            button93->Enabled = false;

            if (button92->Text == "S" && button94->Text == "S") {
                button93->BackColor = System::Drawing::Color::Firebrick;
                button92->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 93
    private: System::Void button94_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
            // if Mark = S
            //
        if (ChosenMark == "S") {

            button94->Text = "S";
            button94->Enabled = false;
            //
            //
            // Check for points

            if (button84->Text == "O" && button74->Text == "S") {
                button94->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button95->Text == "O" && button96->Text == "S") {
                button94->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button93->Text == "O" && button92->Text == "S") {
                button94->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                button92->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button85->Text == "O" && button76->Text == "S") {
                button94->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button83->Text == "O" && button72->Text == "S") {
                button94->BackColor = System::Drawing::Color::Firebrick;
                button83->BackColor = System::Drawing::Color::Firebrick;
                button72->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button94->Text = "O";
            button94->Enabled = false;

            if (button93->Text == "S" && button95->Text == "S") {
                button94->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 94
    private: System::Void button95_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button95->Text = "S";
            button95->Enabled = false;
            //
            //
            // Check for points

            if (button85->Text == "O" && button75->Text == "S") {
                button95->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button96->Text == "O" && button97->Text == "S") {
                button95->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button94->Text == "O" && button93->Text == "S") {
                button95->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                button93->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button86->Text == "O" && button77->Text == "S") {
                button95->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button84->Text == "O" && button73->Text == "S") {
                button95->BackColor = System::Drawing::Color::Firebrick;
                button84->BackColor = System::Drawing::Color::Firebrick;
                button73->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button95->Text = "O";
            button95->Enabled = false;

            if (button94->Text == "S" && button96->Text == "S") {
                button95->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 95
    private: System::Void button96_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button96->Text = "S";
            button96->Enabled = false;
            //
            //
            // Check for points

            if (button86->Text == "O" && button76->Text == "S") {
                button96->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button97->Text == "O" && button98->Text == "S") {
                button96->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button95->Text == "O" && button94->Text == "S") {
                button96->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                button94->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button87->Text == "O" && button78->Text == "S") {
                button96->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button85->Text == "O" && button74->Text == "S") {
                button96->BackColor = System::Drawing::Color::Firebrick;
                button85->BackColor = System::Drawing::Color::Firebrick;
                button74->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button96->Text = "O";
            button96->Enabled = false;

            if (button95->Text == "S" && button97->Text == "S") {
                button96->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 96

    private: System::Void button97_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button97->Text = "S";
            button97->Enabled = false;
            //
            //
            // Check for points

            if (button87->Text == "O" && button77->Text == "S") {
                button97->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button98->Text == "O" && button99->Text == "S") {
                button97->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                button99->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button96->Text == "O" && button95->Text == "S") {
                button97->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                button95->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button88->Text == "O" && button79->Text == "S") {
                button97->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button86->Text == "O" && button75->Text == "S") {
                button97->BackColor = System::Drawing::Color::Firebrick;
                button86->BackColor = System::Drawing::Color::Firebrick;
                button75->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button97->Text = "O";
            button97->Enabled = false;

            if (button96->Text == "S" && button98->Text == "S") {
                button97->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 97


    private: System::Void button98_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button98->Text = "S";
            button98->Enabled = false;
            //
            //
            // Check for points

            if (button88->Text == "O" && button78->Text == "S") {
                button98->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button99->Text == "O" && button100->Text == "S") {
                button98->BackColor = System::Drawing::Color::Firebrick;
                button99->BackColor = System::Drawing::Color::Firebrick;
                button100->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button97->Text == "O" && button96->Text == "S") {
                button98->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                button96->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button89->Text == "O" && button80->Text == "S") {
                button98->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button87->Text == "O" && button76->Text == "S") {
                button98->BackColor = System::Drawing::Color::Firebrick;
                button87->BackColor = System::Drawing::Color::Firebrick;
                button76->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button98->Text = "O";
            button98->Enabled = false;

            if (button97->Text == "S" && button99->Text == "S") {
                button98->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                button99->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 98


    private: System::Void button99_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
        // if Mark = S
        //
        if (ChosenMark == "S") {

            button99->Text = "S";
            button99->Enabled = false;
            //
            //
            // Check for points

            if (button89->Text == "O" && button79->Text == "S") {
                button99->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                button79->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button98->Text == "O" && button97->Text == "S") {
                button99->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                button97->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button88->Text == "O" && button77->Text == "S") {
                button99->BackColor = System::Drawing::Color::Firebrick;
                button88->BackColor = System::Drawing::Color::Firebrick;
                button77->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button99->Text = "O";
            button99->Enabled = false;

            if (button98->Text == "S" && button100->Text == "S") {
                button99->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                button100->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } //end of Mark O statement
    }// end of click 99

    private: System::Void button100_Click(System::Object^ sender, System::EventArgs^ e) {
        again = false;
        //
            // if Mark = S
            //
        if (ChosenMark == "S") {

            button100->Text = "S";
            button100->Enabled = false;
            //
            //
            // Check for points

            if (button90->Text == "O" && button80->Text == "S") {
                button100->BackColor = System::Drawing::Color::Firebrick;
                button90->BackColor = System::Drawing::Color::Firebrick;
                button80->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button99->Text == "O" && button98->Text == "S") {
                button100->BackColor = System::Drawing::Color::Firebrick;
                button99->BackColor = System::Drawing::Color::Firebrick;
                button98->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (button89->Text == "O" && button78->Text == "S") {
                button100->BackColor = System::Drawing::Color::Firebrick;
                button89->BackColor = System::Drawing::Color::Firebrick;
                button78->BackColor = System::Drawing::Color::Firebrick;
                Check_Points();
            }

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }
        } // end of Mark S if 

        else if (ChosenMark == "O") {
            button100->Text = "O";
            button100->Enabled = false;

            if (again == false) {
                if (Player == First) {
                    Player = Second;
                    label5->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Transparent;
                    label2->BackColor = System::Drawing::Color::Transparent;
                }
                else {
                    Player = First;
                    label2->BackColor = System::Drawing::Color::Thistle;
                    label3->BackColor = System::Drawing::Color::Thistle;
                    label4->BackColor = System::Drawing::Color::Transparent;
                    label5->BackColor = System::Drawing::Color::Transparent;
                }
            }

        } //end of Mark O statement
    }// end of click 100

    }; // end of class Form1
} // end of namespace CppCLRWinFormsProject

