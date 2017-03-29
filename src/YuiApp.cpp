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
    //(

    //)
    bool wxsOK = true;
    wxString ConfigDir=wxT("netconfig.cfg");
    if(!wxFile::Exists(ConfigDir))
    {

        wxInitAllImageHandlers();
        if ( wxsOK )
        {
            LoginConfig Dlg(0);
            SetTopWindow(&Dlg);
            Dlg.ShowModal();
            wxsOK = false;
        }
    }
    else
    {
        wxInitAllImageHandlers();
        if(wxsOK)
        {
            LoginDialog Dlg(0);
            SetTopWindow(&Dlg);
            Dlg.ShowModal();
            wxsOK = false;
        }
    }
    #ifdef WINDOWS

    #endif // WINDOWS
    #ifdef LINUX

    #endif // LINUX
    return wxsOK;

}
