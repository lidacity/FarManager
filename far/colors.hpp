#ifndef __COLORS_HPP__
#define __COLORS_HPP__
/*
colors.hpp

����

*/

/* Revision: 1.00 25.06.2000 $ */

/*
Modify:
  25.06.2000 SVS
    ! �����⮢�� Master Copy
    ! �뤥����� � ����⢥ ᠬ����⥫쭮�� �����
  29.06.2000 SVS
    + ���⮢� ��ਡ��� ��� Menu ScrollBar
*/

enum {
    F_BLACK=0,
    F_BLUE=FOREGROUND_BLUE,
    F_GREEN=FOREGROUND_GREEN,
    F_CYAN=FOREGROUND_BLUE|FOREGROUND_GREEN,
    F_RED=FOREGROUND_RED,
    F_MAGENTA=FOREGROUND_BLUE|FOREGROUND_RED,
    F_BROWN=FOREGROUND_GREEN|FOREGROUND_RED,
    F_LIGHTGRAY=FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED,
    F_DARKGRAY=FOREGROUND_INTENSITY,
    F_LIGHTBLUE=FOREGROUND_BLUE|FOREGROUND_INTENSITY,
    F_LIGHTGREEN=FOREGROUND_GREEN|FOREGROUND_INTENSITY,
    F_LIGHTCYAN=FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY,
    F_LIGHTRED=FOREGROUND_RED|FOREGROUND_INTENSITY,
    F_LIGHTMAGENTA=FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY,
    F_YELLOW=FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY,
    F_WHITE=FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY,
    B_BLACK=0,
    B_BLUE=BACKGROUND_BLUE,
    B_GREEN=BACKGROUND_GREEN,
    B_CYAN=BACKGROUND_BLUE|BACKGROUND_GREEN,
    B_RED=BACKGROUND_RED,
    B_MAGENTA=BACKGROUND_BLUE|BACKGROUND_RED,
    B_BROWN=BACKGROUND_GREEN|BACKGROUND_RED,
    B_LIGHTGRAY=BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED,
    B_DARKGRAY=BACKGROUND_INTENSITY,
    B_LIGHTBLUE=BACKGROUND_BLUE|BACKGROUND_INTENSITY,
    B_LIGHTGREEN=BACKGROUND_GREEN|BACKGROUND_INTENSITY,
    B_LIGHTCYAN=BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY,
    B_LIGHTRED=BACKGROUND_RED|BACKGROUND_INTENSITY,
    B_LIGHTMAGENTA=BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY,
    B_YELLOW=BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY,
    B_WHITE=BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY,
    F_MASK=F_WHITE,
    B_MASK=B_WHITE
};


enum PaletteColors
{
  COL_FIRSTPALETTECOLOR=1000,

  COL_MENUTEXT=COL_FIRSTPALETTECOLOR,
  COL_MENUSELECTEDTEXT,
  COL_MENUHIGHLIGHT,
  COL_MENUSELECTEDHIGHLIGHT,
  COL_MENUBOX,
  COL_MENUTITLE,

  COL_HMENUTEXT,
  COL_HMENUSELECTEDTEXT,
  COL_HMENUHIGHLIGHT,
  COL_HMENUSELECTEDHIGHLIGHT,

  COL_PANELTEXT,
  COL_PANELSELECTEDTEXT,
  COL_PANELHIGHLIGHTTEXT,
  COL_PANELINFOTEXT,
  COL_PANELCURSOR,
  COL_PANELSELECTEDCURSOR,
  COL_PANELTITLE,
  COL_PANELSELECTEDTITLE,
  COL_PANELCOLUMNTITLE,
  COL_PANELTOTALINFO,
  COL_PANELSELECTEDINFO,

  COL_DIALOGTEXT,
  COL_DIALOGHIGHLIGHTTEXT,
  COL_DIALOGBOX,
  COL_DIALOGBOXTITLE,
  COL_DIALOGHIGHLIGHTBOXTITLE,
  COL_DIALOGEDIT,
  COL_DIALOGBUTTON,
  COL_DIALOGSELECTEDBUTTON,
  COL_DIALOGHIGHLIGHTBUTTON,
  COL_DIALOGHIGHLIGHTSELECTEDBUTTON,

  COL_DIALOGMENUTEXT,
  COL_DIALOGMENUSELECTEDTEXT,
  COL_DIALOGMENUHIGHLIGHT,
  COL_DIALOGMENUSELECTEDHIGHLIGHT,

  COL_WARNDIALOGTEXT,
  COL_WARNDIALOGHIGHLIGHTTEXT,
  COL_WARNDIALOGBOX,
  COL_WARNDIALOGBOXTITLE,
  COL_WARNDIALOGHIGHLIGHTBOXTITLE,
  COL_WARNDIALOGEDIT,
  COL_WARNDIALOGBUTTON,
  COL_WARNDIALOGSELECTEDBUTTON,
  COL_WARNDIALOGHIGHLIGHTBUTTON,
  COL_WARNDIALOGHIGHLIGHTSELECTEDBUTTON,

  COL_KEYBARNUM,
  COL_KEYBARTEXT,
  COL_KEYBARBACKGROUND,

  COL_COMMANDLINE,

  COL_CLOCK,

  COL_VIEWERTEXT,
  COL_VIEWERSELECTEDTEXT,
  COL_VIEWERSTATUS,

  COL_EDITORTEXT,
  COL_EDITORSELECTEDTEXT,
  COL_EDITORSTATUS,

  COL_HELPTEXT,
  COL_HELPHIGHLIGHTTEXT,
  COL_HELPTOPIC,
  COL_HELPSELECTEDTOPIC,
  COL_HELPBOX,
  COL_HELPBOXTITLE,

  COL_PANELDRAGTEXT,
  COL_DIALOGEDITUNCHANGED,
  COL_PANELSCROLLBAR,
  COL_HELPSCROLLBAR,
  COL_PANELBOX,
  COL_PANELSCREENSNUMBER,
  COL_DIALOGEDITSELECTED,
  COL_COMMANDLINESELECTED,
  COL_VIEWERARROWS,

  /* 29.06.2000 SVS
    ���⮢� ��ਡ��� ��� Menu ScrollBar
  */
  COL_DIALOGMENUSCROLLBAR,	// ��� ���� History
  COL_MENUSCROLLBAR,            // ��� ���筮�� ����
  /* SVS $ */
};

#endif	// __COLORS_HPP__
