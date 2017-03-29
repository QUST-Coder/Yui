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
    if(!wxFile::Exists(ConfigDir))
    {

        wxInitAllImageHandlers();
        if ( wxsOK )
        {
            LoginConfig ConfigDlg(0);
            SetTopWindow(&ConfigDlg);
            ConfigDlg.ShowModal();
        }
    }
    {
        wxInitAllImageHandlers();
        if(wxsOK)
        {
            LoginDialog LoginDlg(0);
            SetTopWindow(&LoginDlg);
            LoginDlg.ShowModal();
        }
    }
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
