/***************************************************************
 * Name:      YuiApp.cpp
 * Purpose:
 * Author:    Richard (x7536110@outlook.com)
 * Created:   2017-03-28
 * Copyright: Richard ()
 * License:
 **************************************************************/
#include "YuiApp.h"


//(*AppHeaders
#include "../LoginConfig.h"
#include "../LoginDialog.h"
#include "../UserFrame.h"
#include <wx/image.h>
#include <wx/file.h>
//*)

IMPLEMENT_APP(YuiApp);

bool YuiApp::OnInit()
{

    bool wxsOK = true;
    wxString ConfigDir=wxT("netconfig.cfg");

    //检测是否存在本地配置文件，若不存在本地配置文件则需首先配置server地址
    while(!wxFile::Exists(ConfigDir))
    {
        wxInitAllImageHandlers();
        if (wxsOK)
        {
            LoginConfig ConfigDlg(0);
            SetTopWindow(&ConfigDlg);
            ConfigDlg.ShowModal();
        }
    }
    //如果存在本地配置文件，则检测ip地址的正确性，不正确依旧重新配置
    //while(0)
    if(1)
    {
        wxInitAllImageHandlers();
        if (wxsOK)
        {
            LoginConfig ConfigDlg(0);
            SetTopWindow(&ConfigDlg);
            ConfigDlg.ShowModal();
        }
    }
    //服务器配置正确，进入登录界面并检测是否有比赛
    {
        wxInitAllImageHandlers();
        if(wxsOK)
        {
            LoginDialog LoginDlg(0);
            SetTopWindow(&LoginDlg);
            LoginDlg.ShowModal();
        }
    }
    //选手登陆完成，进入参赛界面
    {
        wxInitAllImageHandlers();
        if(wxsOK)
        {
            UserFrame* userframe=new UserFrame(0);
            userframe->Show();
            SetTopWindow(userframe);
        }
    }
    return wxsOK;

}
