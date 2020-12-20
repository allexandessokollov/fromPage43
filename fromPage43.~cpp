#include <vcl.h>

#pragma hdrstop

#include "fromPage43.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

const int MAX_ARRAY_SIZE = 14;
int const MAX_RANDOM_VALUE = 15;
int const MIN_RANDOM_VALUE = -5;

int  TForm1::numMaxOfArray(int arr[], int arrLength)
{
    int maxPos = 0,
    maxValue = arr[0];
    
    for(int i = 1; i < arrLength; i++)
    {
        if(arr[i] > maxValue)
        {
            maxPos = i;
            maxValue = arr[i];
        }
    }
    
    return maxPos;
}

int  TForm1::numMinOfArray(int arr[], int arrLength)
{
    int minPos = 0,
    minValue = arr[0];

    for(int i = 1; i < arrLength; i++)
    {
        if(arr[i] < minValue)
        {
            minPos= i;
            minValue = arr[i];
        }
    }

    return minPos;
}


bool  TForm1::isStringGridFilled(int colCount)
{
    bool ret = true;

    for(int i = 0; i < colCount; i++)
    {
        AnsiString str = StringGrid1->Cells[i][0];
        if(str == "")
        {
            return false;
        }
    }

    return ret;
}

int  TForm1::countAnswer(int arr[], int minIndex, int maxIndex)
{
    int answer = 1;


    for(int i = minIndex + 1; i < maxIndex; i++)
    {
        answer *= arr[i];
    }

    return answer;
}


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
    bool checkStringGrid;

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

    checkStringGrid = isStringGridFilled(arrSize);

    if(checkStringGrid)
    {
        for(int i = 0; i < arrSize; i++)
        {
            arr[i] = StrToInt(StringGrid1->Cells[i][0]);
        }
    }
    else
    {
        ShowMessage("you should Fill array");
    }

    numOfMaxElem =  numMaxOfArray(arr, arrSize);

    numOfMinElem =  numMinOfArray(arr, arrSize);

    if(numOfMaxElem < numOfMinElem)
    {
        int tmp = numOfMaxElem;
        numOfMaxElem = numOfMinElem;
        numOfMinElem = tmp;
    }

    if((numOfMaxElem - numOfMinElem) <= 1)
    {
        Label1->Caption = "there is no elements between";
        ShowMessage("there is no elements between");
    }
    else
    {
        AnsiString str = IntToStr(countAnswer(arr, numOfMinElem, numOfMaxElem));
        Label1->Caption = str;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::fillArrayClick(TObject *Sender)
{
    AnsiString str = EditSizeOfArr->Text;

    if(str == "")
    {
        StringGrid1->ColCount = 0;
    }
    else if(StrToInt(str) > MAX_ARRAY_SIZE)
    {
        ShowMessage("maximum quantity is 14");
        EditSizeOfArr->Text = "14";
    }
    else
    {
        StringGrid1->ColCount = StrToInt(str);
    }

    for(int i = 0; i < StringGrid1->ColCount; i++)
    {
        StringGrid1->Cells[i][0] = StrToInt(random(MAX_RANDOM_VALUE - MIN_RANDOM_VALUE) + MIN_RANDOM_VALUE);
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
    else if (StrToInt(str) > MAX_ARRAY_SIZE)
    {
        ShowMessage("maximum quantity is 14");
        EditSizeOfArr->Text = "14";
        StringGrid1->ColCount = StrToInt(MAX_ARRAY_SIZE);
    }
    else
    {
        StringGrid1->ColCount = StrToInt(str);
    }
}


