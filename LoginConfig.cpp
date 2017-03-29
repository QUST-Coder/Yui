#include "LoginConfig.h"
#include "wx/file.h"
//(*InternalHeaders(LoginConfig)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(LoginConfig)
const long LoginConfig::ID_TEXTCTRL_ServerAddress = wxNewId();
const long LoginConfig::ID_BUTTON_Confirm = wxNewId();
const long LoginConfig::ID_STATICTEXT_Warning = wxNewId();
//*)

BEGIN_EVENT_TABLE(LoginConfig,wxDialog)
	//(*EventTable(LoginConfig)
	//*)
END_EVENT_TABLE()

LoginConfig::LoginConfig(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(LoginConfig)
	Create(parent, id, _("请输入服务器地址"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(423,115));
	Move(wxDefaultPosition);
	wxFont thisFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Microsoft YaHei UI"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	ServerAddress = new wxTextCtrl(this, ID_TEXTCTRL_ServerAddress, wxEmptyString, wxPoint(32,24), wxSize(248,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL_ServerAddress"));
	ServerAddressConfirm = new wxButton(this, ID_BUTTON_Confirm, _("确定"), wxPoint(304,24), wxSize(60,32), 0, wxDefaultValidator, _T("ID_BUTTON_Confirm"));
	WarningText = new wxStaticText(this, ID_STATICTEXT_Warning, _("请填写正确的IP地址"), wxPoint(88,72), wxSize(152,32), 0, _T("ID_STATICTEXT_Warning"));
	WarningText->Hide();
	Connect(ID_BUTTON_Confirm,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginConfig::OnServerAddressConfirmClick);
	//*)
}

LoginConfig::~LoginConfig()
{
	//(*Destroy(LoginConfig)
	//*)
}


void LoginConfig::OnServerAddressConfirmClick(wxCommandEvent& event)
{
    wxFile ConfigFile;
    YuiUtil util;
    ConfigFile.Create(wxT("netconfig.cfg"),true);
    //ConfigFile.Open(wxT("netconfig.cfg"));
    if(util.is_ipaddress(ServerAddress->GetLineText(0)))
    {
        wxString ServerIP=ServerAddress->GetLineText(0);
        ConfigFile.Write(ServerIP);
        ConfigFile.Close();
    }
    else
    {
        WarningText->Show();
    }
}
