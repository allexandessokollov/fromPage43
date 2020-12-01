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


void __fastcall TForm1::CountClick(TObject *Sender)
{

    int arrSize, numOfMaxElem, numOfMinElem;

    AnsiString str = EditSizeOfArr->Text;

    if(str == "")
    {
        arrSize = 0;
    }
    else
    {
        arrSize = StrToInt(str);
    }

    int *arr = new int[arrSize];

    numOfMaxElem =  maxOfArray(arr[], arrSize);

    numOfMinElem =  minOfArray(arr[], arrSize);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::fillArrayClick(TObject *Sender)
{

    AnsiString str = EditSizeOfArr->Text;

    if(str == "")
    {
        StringGrid1->ColCount = 0;
    }
    else if(StrToInt(str) > 14)
    {
        ShowMessage("Максимальное количество 10!");
        EditSizeOfArr->Text = "14";
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


void __fastcall TForm1::changeSizeClick(TObject *Sender)
{
    AnsiString str = EditSizeOfArr->Text;

    if(str == "")
    {
        StringGrid1->ColCount = 0;
    }
    else if (StrToInt(str) > 14)
    {
        ShowMessage("Максимальное количество 10!");
        EditSizeOfArr->Text = "14";
    }
    else
    {
        StringGrid1->ColCount = StrToInt(str);
    }
}


int maxOfArray(int arr[], int arrLength)
{
    int max = arr[0];
    
    for(int i = 1; i < arrLength; i++)
    {
        if(arr[i] > arr[i - 1])
        {
            max = arr[i];
        }
    }
    
    return max;
}

int minOfArray(int arr[], int arrLength)
{
    int min = arr[0];

    for(int i = 1; i < arrLength; i++)
    {
        if(arr[i] < arr[i - 1])
        {
            min = arr[i];
        }
    }

    return min;
}
//---------------------------------------------------------------------------





