#ifndef __RESOURCE_H__
#define __RESOURCE_H__

#ifndef IDC_STATIC
#define IDC_STATIC (-1)
#endif

// Menu Id
#define IDM_MAIN 100
#define IDM_TRAY 101

// Dialogs
#define IDD_MAIN 100
#define IDD_SETTINGS 101
#define IDD_SETTINGS_GENERAL 102
#define IDD_SETTINGS_MEMORY 103
#define IDD_SETTINGS_APPEARANCE 104
#define IDD_SETTINGS_TRAY 105

// Main Dlg
#define IDC_LISTVIEW 1000
#define IDC_CLEAN 1001

// Settings Dlg
#define IDC_NAV 1000
#define IDC_CLOSE 1001

#define IDC_TITLE_1 1003
#define IDC_TITLE_2 1004
#define IDC_TITLE_3 1005
#define IDC_TITLE_4 1006
#define IDC_TITLE_5 1007
#define IDC_TITLE_6 1008
#define IDC_TITLE_7 1009
#define IDC_TITLE_8 1010
#define IDC_TITLE_9 1011

#define IDC_ALWAYSONTOP_CHK 100
#define IDC_LOADONSTARTUP_CHK 101
#define IDC_SKIPUACWARNING_CHK 103
#define IDC_REDUCTCONFIRMATION_CHK 104
#define IDC_CHECKUPDATES_CHK 105

#define IDC_LANGUAGE_HINT 106
#define IDC_LANGUAGE 107

#define IDC_WORKINGSET_CHK 108
#define IDC_SYSTEMWORKINGSET_CHK 109
#define IDC_STANDBYLISTPRIORITY0_CHK 110
#define IDC_STANDBYLIST_CHK 111
#define IDC_MODIFIEDLIST_CHK 112
#define IDC_COMBINEMEMORYLISTS_CHK 113

#define IDC_AUTOREDUCTENABLE_CHK 114
#define IDC_AUTOREDUCTVALUE_CTRL 115
#define IDC_AUTOREDUCTVALUE 116

#define IDC_AUTOREDUCTINTERVALENABLE_CHK 117
#define IDC_AUTOREDUCTINTERVALVALUE_CTRL 118
#define IDC_AUTOREDUCTINTERVALVALUE 119

#define IDC_HOTKEY_CLEAN_CHK 120
#define IDC_HOTKEY_CLEAN 121

#define IDC_TRAYUSETRANSPARENCY_CHK 122
#define IDC_TRAYSHOWBORDER_CHK 123
#define IDC_TRAYROUNDCORNERS_CHK 124
#define IDC_TRAYCHANGEBG_CHK 125
#define IDC_TRAYUSEANTIALIASING_CHK 126

#define IDC_FONT_HINT 127
#define IDC_FONT 128

#define IDC_COLOR_TEXT_HINT 129
#define IDC_COLOR_TEXT 130

#define IDC_COLOR_BACKGROUND_HINT 131
#define IDC_COLOR_BACKGROUND 132

#define IDC_COLOR_WARNING_HINT 133
#define IDC_COLOR_WARNING 134

#define IDC_COLOR_DANGER_HINT 135
#define IDC_COLOR_DANGER 136

#define IDC_TRAYLEVELWARNING_HINT 137
#define IDC_TRAYLEVELWARNING_CTRL 138
#define IDC_TRAYLEVELWARNING 139

#define IDC_TRAYLEVELDANGER_HINT 140
#define IDC_TRAYLEVELDANGER_CTRL 141
#define IDC_TRAYLEVELDANGER 142

#define IDC_TRAYACTIONDC_HINT 143
#define IDC_TRAYACTIONDC 144

#define IDC_TRAYACTIONMC_HINT 145
#define IDC_TRAYACTIONMC 146

#define IDC_SHOW_CLEAN_RESULT_CHK 147

// Main Menu
#define IDM_SETTINGS 2000
#define IDM_EXIT 2001
#define IDM_WEBSITE 2002
#define IDM_DONATE 2003
#define IDM_CHECKUPDATES 2004
#define IDM_ABOUT 2005

// Tray Menu
#define IDM_TRAY_SHOW 3000
#define IDM_TRAY_CLEAN 3001
#define IDM_TRAY_DISABLE_1 3002
#define IDM_TRAY_DISABLE_2 3003
#define IDM_TRAY_SETTINGS 3004
#define IDM_TRAY_WEBSITE 3005
#define IDM_TRAY_ABOUT 3006
#define IDM_TRAY_EXIT 3007

#define IDM_WORKINGSET_CHK 3008
#define IDM_SYSTEMWORKINGSET_CHK 3009
#define IDM_STANDBYLISTPRIORITY0_CHK 3010
#define IDM_STANDBYLIST_CHK 3011
#define IDM_MODIFIEDLIST_CHK 3012
#define IDM_COMBINEMEMORYLISTS_CHK 3014

#define IDM_TRAY_POPUP_1 4000
#define IDM_TRAY_POPUP_2 5000

// Strings
#define IDS_UPDATE_NO 1001
#define IDS_UPDATE_YES 1002

#define IDS_DONATE 1003
#define IDS_DONATE_TEXT 1004
#define IDS_SHOWATSTARTUP_CHK 1005

#define IDS_FILE 1006
#define IDS_SETTINGS 1007
#define IDS_EXIT 1008
#define IDS_HELP 1009
#define IDS_WEBSITE 1010
#define IDS_CHECKUPDATES 1011
#define IDS_ABOUT 1012

#define IDS_TRAY_SHOW 2000
#define IDS_TRAY_DISABLE 2001
#define IDS_TRAY_POPUP_1 2002
#define IDS_TRAY_POPUP_2 2003
#define IDS_TRAY_POPUP_3 2004

#define IDS_CLEAN 3000

#define IDS_GROUP_1 3001
#define IDS_GROUP_2 3002
#define IDS_GROUP_3 3003

#define IDS_ITEM_1 3004
#define IDS_ITEM_2 3005
#define IDS_ITEM_3 3006

#define IDS_SETTINGS_GENERAL 4000
#define IDS_SETTINGS_MEMORY 4001
#define IDS_SETTINGS_APPEARANCE 4002
#define IDS_SETTINGS_TRAY 4003

#define IDS_CLOSE 4004

#define IDS_TITLE_1 4006
#define IDS_TITLE_2 4007
#define IDS_TITLE_3 4008
#define IDS_TITLE_4 4009
#define IDS_TITLE_5 4010
#define IDS_TITLE_6 4011
#define IDS_TITLE_7 4012
#define IDS_TITLE_8 4013
#define IDS_TITLE_9 4014

#define IDS_ALWAYSONTOP_CHK 5000
#define IDS_LOADONSTARTUP_CHK 5001
#define IDS_REDUCTCONFIRMATION_CHK 5003
#define IDS_SKIPUACWARNING_CHK 5004
#define IDS_CHECKUPDATES_CHK 5005

#define IDS_LANGUAGE_HINT 5006

#define IDS_WORKINGSET_CHK 5007
#define IDS_SYSTEMWORKINGSET_CHK 5008
#define IDS_STANDBYLISTPRIORITY0_CHK 5009
#define IDS_STANDBYLIST_CHK 5010
#define IDS_MODIFIEDLIST_CHK 5011
#define IDS_COMBINEMEMORYLISTS_CHK 5012

#define IDS_AUTOREDUCTENABLE_CHK 5013
#define IDS_AUTOREDUCTINTERVALENABLE_CHK 5014

#define IDS_HOTKEY_CLEAN_CHK 5015

#define IDS_TRAYUSETRANSPARENCY_CHK 5016
#define IDS_TRAYSHOWBORDER_CHK 5017
#define IDS_TRAYROUNDCORNERS_CHK 5018
#define IDS_TRAYCHANGEBG_CHK 5019
#define IDS_TRAYUSEANTIALIASING_CHK 5020

#define IDS_FONT_HINT 5021
#define IDS_COLOR_TEXT_HINT 5022
#define IDS_COLOR_BACKGROUND_HINT 5023
#define IDS_COLOR_WARNING_HINT 5024
#define IDS_COLOR_DANGER_HINT 5025

#define IDS_TRAYLEVELWARNING_HINT 5026
#define IDS_TRAYLEVELDANGER_HINT 5027

#define IDS_TRAYACTIONDC_HINT 5028
#define IDS_TRAYACTIONMC_HINT 5029

#define IDS_TRAY_ACTION_1 5030
#define IDS_TRAY_ACTION_2 5031
#define IDS_TRAY_ACTION_3 5032

#define IDS_SHOW_CLEAN_RESULT_CHK 5033

#define IDS_QUESTION 5034
#define IDS_QUESTION_WARNING_TITLE 5035
#define IDS_QUESTION_WARNING 5036
#define IDS_QUESTION_FLAG_CHK 5037

#define IDS_STATUS_CLEANED 5038
#define IDS_STATUS_NOPRIVILEGES 5039

// Icons
#define IDI_MAIN 100

#endif // __RESOURCE_H__
