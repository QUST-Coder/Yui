#include "LoginDialog.h"
#include "LoginConfig.h"
#include <wx/msgdlg.h>
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
const long LoginDialog::ID_BUTTON_Exit = wxNewId();
const long LoginDialog::ID_STATICTEXT3 = wxNewId();
const long LoginDialog::ID_STATICTEXT4 = wxNewId();
const long LoginDialog::ID_STATICTEXT5 = wxNewId();
const long LoginDialog::ID_STATICTEXT_RaceStatu = wxNewId();
const long LoginDialog::ID_BUTTON_Reset = wxNewId();
//*)

BEGIN_EVENT_TABLE(LoginDialog,wxDialog)
	//(*EventTable(LoginDialog)
	//*)
END_EVENT_TABLE()

LoginDialog::LoginDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(LoginDialog)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSTAY_ON_TOP, _T("id"));
	SetClientSize(wxSize(340,198));
	Move(wxPoint(-1,-1));
	wxFont thisFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Microsoft YaHei UI"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	LoginButton = new wxButton(this, ID_BUTTON_Login, _("登录"), wxPoint(264,88), wxSize(60,32), 0, wxDefaultValidator, _T("ID_BUTTON_Login"));
	LoginButton->SetDefault();
	UserName = new wxTextCtrl(this, ID_TEXTCTRL_Username, wxEmptyString, wxPoint(80,88), wxSize(168,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL_Username"));
	Password = new wxTextCtrl(this, ID_TEXTCTRL_Password, wxEmptyString, wxPoint(80,136), wxSize(168,30), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL_Password"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("用户名"), wxPoint(24,88), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("密码"), wxPoint(32,136), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	ButtonExit = new wxButton(this, ID_BUTTON_Exit, _("退出"), wxPoint(264,136), wxSize(60,32), 0, wxDefaultValidator, _T("ID_BUTTON_Exit"));
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Yui Version alpha 0.0.1"), wxPoint(192,176), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Microsoft YaHei UI"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("请登录您的比赛账号"), wxPoint(72,16), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Microsoft YaHei UI"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("当前竞赛状态："), wxPoint(56,56), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	RaceStatu = new wxStaticText(this, ID_STATICTEXT_RaceStatu, _("未搜索到比赛"), wxPoint(176,56), wxDefaultSize, 0, _T("ID_STATICTEXT_RaceStatu"));
	Reset = new wxButton(this, ID_BUTTON_Reset, _("！"), wxPoint(304,8), wxSize(27,32), 0, wxDefaultValidator, _T("ID_BUTTON_Reset"));
	Center();

	Connect(ID_BUTTON_Login,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginDialog::OnLoginButtonClick);
	Connect(ID_BUTTON_Exit,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginDialog::OnButtonExitClick);
	Connect(ID_BUTTON_Reset,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginDialog::OnResetClick);
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
    else
        wxMessageBox(_("账户或密码错误，无法登录"),_("警告"), wxOK | wxICON_WARNING, this);
}

void LoginDialog::OnButtonExitClick(wxCommandEvent& event)
{
    if(1)//如果现在有正在开始的竞赛，则不允许退出锁屏
    {
        wxMessageBox(_("比赛正在进行，无法退出锁定!"), _("警告"), wxOK | wxICON_WARNING, this);
    }
    else//如果现在没有竞赛，则可以退出锁屏
    {
        Close();
    }
}

void LoginDialog::OnResetClick(wxCommandEvent& event)
{
    LoginConfig ResetDlg(0);
    ResetDlg.ShowModal();
}
