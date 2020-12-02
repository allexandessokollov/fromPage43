//---------------------------------------------------------------------------

#ifndef fromPage43H
#define fromPage43H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Count;
        TStringGrid *StringGrid1;
        TLabel *sixzeOfArrLabel;
        TEdit *EditSizeOfArr;
        TButton *fillArray;
        TButton *changeSize;
        TEdit *answerEdit;
        TLabel *answer;
        void __fastcall CountClick(TObject *Sender);
        void __fastcall fillArrayClick(TObject *Sender);
        void __fastcall changeSizeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
