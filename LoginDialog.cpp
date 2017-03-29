#include "LoginDialog.h"

//(*InternalHeaders(LoginDialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(LoginDialog)
const long LoginDialog::ID_BUTTON_Login = wxNewId();
const long LoginDialog::ID_TEXTCTRL_Username = wxNewId();
const long LoginDialog::ID_TEXTCTRL_Password = wxNewId();
const long LoginDialog::ID_STATICTEXT1 = wxNewId();
const long LoginDialog::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(LoginDialog,wxDialog)
	//(*EventTable(LoginDialog)
	//*)
END_EVENT_TABLE()

LoginDialog::LoginDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(LoginDialog)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(323,130));
	Move(wxDefaultPosition);
	wxFont thisFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Microsoft YaHei UI"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	LoginButton = new wxButton(this, ID_BUTTON_Login, _("µÇÂ¼"), wxPoint(248,72), wxSize(60,32), 0, wxDefaultValidator, _T("ID_BUTTON_Login"));
	UserName = new wxTextCtrl(this, ID_TEXTCTRL_Username, wxEmptyString, wxPoint(80,24), wxSize(150,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL_Username"));
	Password = new wxTextCtrl(this, ID_TEXTCTRL_Password, wxEmptyString, wxPoint(80,72), wxSize(150,32), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL_Password"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("ÓÃ»§Ãû"), wxPoint(24,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("ÃÜÂë"), wxPoint(32,72), wxDefaultSize, 0, _T("ID_STATICTEXT2"));

	Connect(ID_BUTTON_Login,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginDialog::OnLoginButtonClick);
	//*)
}

LoginDialog::~LoginDialog()
{
	//(*Destroy(LoginDialog)
	//*)
}



void LoginDialog::OnLoginButtonClick(wxCommandEvent& event)
{
    if(UserName->GetLineText(0)=="123456"&&Password->GetLineText(0)=="123456")
    {
        Close();
    }
}
