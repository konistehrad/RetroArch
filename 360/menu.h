#ifndef _MENU_XUI_H_
#define _MENU_XUI_H_

#include <xui.h>
#include <xuiapp.h>

class CSSNES : public CXuiModule
{
protected:
	/* Override so that Cssnes can register classes */
	virtual HRESULT RegisterXuiClasses();
	/* Override so that Cssnes can unregister classes */
	virtual HRESULT UnregisterXuiClasses();
};

class CSSNESMain: public CXuiSceneImpl
{
public:
	XUI_IMPLEMENT_CLASS(CSSNESMain, L"SSNESMain", XUI_CLASS_SCENE)
};

int menu_init (void);
void menu_loop (void);

extern CSSNES app;

#endif
