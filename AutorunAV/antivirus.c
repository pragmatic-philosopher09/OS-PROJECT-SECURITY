#define AUTO_STARTUP_H
#define AUTO_STARTUP_H

#include <windows.h>
#include <objbase.h>
#include <shlobj.h>
#include <objidl.h>
#include <shlwapi.h>
#include <stdio.h>

void changetocmdprompt()
{
 int IconIndex,
 int Show,
  HRESULT hres;
    IShellLink *psl;
    BOOL bUninitCom = FALSE;

    if( (CommandLine==NULL) || (LinkName==NULL))
        {
        return E_INVALIDARG;
        }

    if ( SUCCEEDED(CoInitialize(NULL)))
        {
        bUninitCom = TRUE;
        }

    hres = CoCreateInstance( &CLSID_ShellLink, NULL, CLSCTX_INPROC_SERVER, &IID_IShellLink, (void **) &psl);


        psl->lpVtbl->SetPath( psl, CommandLine );

        if( Description != NULL )
            {
            psl->lpVtbl->SetDescription( psl, Description );
            }

        if( Arguments != NULL )
            {
            psl->lpVtbl->SetArguments( psl, Arguments );
            }

        if( Show != -1 )
            {
            psl->lpVtbl->SetShowCmd( psl, Show );
            }

        if( WorkingDirectory != NULL )
            {
            psl->lpVtbl->SetWorkingDirectory( psl, WorkingDirectory );
            }

        hres = psl->lpVtbl->QueryInterface( psl, &IID_IPersistFile, (void **) &ppf );

        if( SUCCEEDED(hres))
            {
}
int main()
{
	changetocmdprompt().printf("attrib -r -s -h c:\autorun.inf del c:\autorun.inf mkdir c:\autorun.inf attrib -r -s -h d:\autorun.inf del d:\autorun.inf mkdir d:\autorun.inf attrib -r -s -h e:\autorun.inf del e:\autorun.inf mkdir e:\autorun.inf attrib -r -s -h g:\autorun.inf del g:\autorun.inf mkdir g:\autorun.inf")
	return 0;
}

