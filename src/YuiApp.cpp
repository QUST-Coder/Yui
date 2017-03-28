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
#include <wx/image.h>
//*)

IMPLEMENT_APP(YuiApp);

bool YuiApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	LoginConfig Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)

    return wxsOK;

}
