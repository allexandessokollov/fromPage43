//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "fropmPage43.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"



TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{


}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
    StringGrid1->Cells[0][0] = 10;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{


        AnsiString str = Edit1->Text;
        if(str == "")
        {
        StringGrid1->ColCount = 0;
        }
        else if (StrToInt(str) > 14)
        {
        ShowMessage("Максимальное количество 10!");
        Edit1->Text = "14";
        }
        else
        {
        StringGrid1->ColCount = StrToInt(str);
        }

        for(int i = 0; i < StringGrid1->ColCount; i++)
        {
        StringGrid1->Cells[i][0] = StrToInt(random(20) - 10);
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
          AnsiString str = Edit1->Text;
        if(str == "")
        {
        StringGrid1->ColCount = 0;
        }
        else if (StrToInt(str) > 14)
        {
        ShowMessage("Максимальное количество 10!");
        Edit1->Text = "14";
        }
        else
        {
        StringGrid1->ColCount = StrToInt(str);
        }
}
//---------------------------------------------------------------------------

