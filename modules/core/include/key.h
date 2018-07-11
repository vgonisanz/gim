#ifndef KEY_H
#define KEY_H

#include "qxtglobalshortcut.h"
#include <QMainWindow>

struct KeyElement {
    std::shared_ptr<QKeySequence> seq;
    std::shared_ptr<QxtGlobalShortcut> gshortcut;
};

/* All Key-enum supported */
static const Qt::Key key_list[] = {
    Qt::Key_Escape,
     Qt::Key_Tab,
     Qt::Key_Backtab,
     Qt::Key_Backspace,
     Qt::Key_Return,
     Qt::Key_Enter,
     Qt::Key_Insert,
     Qt::Key_Delete,
     Qt::Key_Pause,
     Qt::Key_Print,
     Qt::Key_SysReq,
     Qt::Key_Clear,
     Qt::Key_Home,
     Qt::Key_End,
     Qt::Key_Left,
     Qt::Key_Up,
     Qt::Key_Right,
     Qt::Key_Down,
     Qt::Key_PageUp,
     Qt::Key_PageDown,
     Qt::Key_Shift,
     Qt::Key_Control,
     Qt::Key_Meta,
     Qt::Key_Alt,
     Qt::Key_AltGr,
     Qt::Key_CapsLock,
     Qt::Key_NumLock,
     Qt::Key_ScrollLock,
     Qt::Key_F1,
     Qt::Key_F2,
     Qt::Key_F3,
     Qt::Key_F4,
     Qt::Key_F5,
     Qt::Key_F6,
    Qt::Key_F7,
    Qt::Key_F8,
    Qt::Key_F9,
    Qt::Key_F10,
    Qt::Key_F11,
    Qt::Key_F12,
    Qt::Key_F13,
    Qt::Key_F14,
    Qt::Key_F15,
    Qt::Key_F16,
    Qt::Key_F17,
    Qt::Key_F18,
    Qt::Key_F19,
    Qt::Key_F20, //
    Qt::Key_F21, //
    Qt::Key_F22, //
    Qt::Key_F23, //
    Qt::Key_F24, //
    Qt::Key_F25, //
    Qt::Key_F26, //
    Qt::Key_F27, //
    Qt::Key_F28, //
    Qt::Key_F29, //
    Qt::Key_F30, //
    Qt::Key_F31, //
    Qt::Key_F32, //
    Qt::Key_F33, //
    Qt::Key_F34, //
    Qt::Key_F35, //
    Qt::Key_Super_L, //
    Qt::Key_Super_R, //
    Qt::Key_Menu, //
    Qt::Key_Hyper_L, //
    Qt::Key_Hyper_R, //
    Qt::Key_Help, //
    Qt::Key_Direction_L, //
    Qt::Key_Direction_R, //
    Qt::Key_Space, //
    Qt::Key_Any,
    Qt::Key_Exclam, //
    Qt::Key_QuoteDbl, //
    Qt::Key_NumberSign, //
    Qt::Key_Dollar, //
    Qt::Key_Percent, //
    Qt::Key_Ampersand, //
    Qt::Key_Apostrophe, //
    Qt::Key_ParenLeft, //
    Qt::Key_ParenRight, //
    Qt::Key_Asterisk, //
    Qt::Key_Plus, //
    Qt::Key_Comma, //
    Qt::Key_Minus, //
    Qt::Key_Period, //
    Qt::Key_Slash, //
    Qt::Key_0, //
    Qt::Key_1, //
    Qt::Key_2, //
    Qt::Key_3, //
    Qt::Key_4, //
    Qt::Key_5, //
    Qt::Key_6, //
    Qt::Key_7, //
    Qt::Key_8, //
    Qt::Key_9, //
    Qt::Key_Colon, //
    Qt::Key_Semicolon, //
    Qt::Key_Less, //
    Qt::Key_Equal, //
    Qt::Key_Greater, //
    Qt::Key_Question, //
    //Qt::Key_At, //
    Qt::Key_A, //
    Qt::Key_B, //
    Qt::Key_C, //
    Qt::Key_D, //
    Qt::Key_E, //
    Qt::Key_F, //
    Qt::Key_G, //
    Qt::Key_H, //
    Qt::Key_I, //
    Qt::Key_J, //
    Qt::Key_K, //
    Qt::Key_L, //
    Qt::Key_M, //
    Qt::Key_N, //
    Qt::Key_O, //
    Qt::Key_P, //
    Qt::Key_Q, //
    Qt::Key_R, //
    Qt::Key_S, //
    Qt::Key_T, //
    Qt::Key_U, //
    Qt::Key_V, //
    Qt::Key_W, //
    Qt::Key_X, //
    Qt::Key_Y, //
    Qt::Key_Z, //
    // Qt::Key_BracketLeft, //
    // Qt::Key_Backslash, //
    // Qt::Key_BracketRight, //
    // Qt::Key_AsciiCircum, //
    // Qt::Key_Underscore, //
    // Qt::Key_QuoteLeft, //
    // Qt::Key_BraceLeft, //
    // Qt::Key_Bar, //
    // Qt::Key_BraceRight, //
    // Qt::Key_AsciiTilde, //
    // Qt::Key_nobreakspace, //
    // Qt::Key_exclamdown, //
    // Qt::Key_cent, //
    // Qt::Key_sterling, //
    // Qt::Key_currency, //
    // Qt::Key_yen, //
    // Qt::Key_brokenbar, //
    // Qt::Key_section, //
    // Qt::Key_diaeresis, //
    // Qt::Key_copyright, //
    // Qt::Key_ordfeminine, //
    // Qt::Key_guillemotleft, //
    // Qt::Key_notsign, //
    // Qt::Key_hyphen, //
    // Qt::Key_registered, //
    // Qt::Key_macron, //
    // Qt::Key_degree, //
    // Qt::Key_plusminus, //
    // Qt::Key_twosuperior, //
    // Qt::Key_threesuperior, //
    // Qt::Key_acute, //
    // Qt::Key_mu, //
    // Qt::Key_paragraph, //
    // Qt::Key_periodcentered, //
    // Qt::Key_cedilla, //
    // Qt::Key_onesuperior, //
    // Qt::Key_masculine, //
    // Qt::Key_guillemotright, //
    // Qt::Key_onequarter, //
    // Qt::Key_onehalf, //
    // Qt::Key_threequarters, //
    // Qt::Key_questiondown, //
    // Qt::Key_Agrave, //
    // Qt::Key_Aacute, //
    // Qt::Key_Acircumflex, //
    // Qt::Key_Atilde, //
    // Qt::Key_Adiaeresis, //
    // Qt::Key_Aring, //
    // Qt::Key_AE, //
    // Qt::Key_Ccedilla, //
    // Qt::Key_Egrave, //
    // Qt::Key_Eacute, //
    // Qt::Key_Ecircumflex, //
    // Qt::Key_Ediaeresis, //
    // Qt::Key_Igrave, //
    // Qt::Key_Iacute, //
    // Qt::Key_Icircumflex, //
    // Qt::Key_Idiaeresis, //
    // Qt::Key_ETH, //
    // Qt::Key_Ntilde, //
    // Qt::Key_Ograve, //
    // Qt::Key_Oacute, //
    // Qt::Key_Ocircumflex, //
    // Qt::Key_Otilde, //
    // Qt::Key_Odiaeresis, //
    // Qt::Key_multiply, //
    // Qt::Key_Ooblique, //
    // Qt::Key_Ugrave, //
    // Qt::Key_Uacute, //
    // Qt::Key_Ucircumflex, //
    // Qt::Key_Udiaeresis, //
    // Qt::Key_Yacute, //
    // Qt::Key_THORN, //
    // Qt::Key_ssharp, //
    // Qt::Key_division, //
    // Qt::Key_ydiaeresis, //
    // Qt::Key_Multi_key, //
    // Qt::Key_Codeinput, //
    // Qt::Key_SingleCandidate, //
    // Qt::Key_MultipleCandidate, //
    // Qt::Key_PreviousCandidate, //
    // Qt::Key_Mode_switch, //
    // Qt::Key_Kanji, //
    // Qt::Key_Muhenkan, //
    // Qt::Key_Henkan, //
    // Qt::Key_Romaji, //
    // Qt::Key_Hiragana, //
    // Qt::Key_Katakana, //
    // Qt::Key_Hiragana_Katakana, //
    // Qt::Key_Zenkaku, //
    // Qt::Key_Hankaku, //
    // Qt::Key_Zenkaku_Hankaku, //
    // Qt::Key_Touroku, //
    // Qt::Key_Massyo, //
    // Qt::Key_Kana_Lock, //
    // Qt::Key_Kana_Shift, //
    // Qt::Key_Eisu_Shift, //
    // Qt::Key_Eisu_toggle, //
    // Qt::Key_Hangul, //
    // Qt::Key_Hangul_Start, //
    // Qt::Key_Hangul_End, //
    // Qt::Key_Hangul_Hanja, //
    // Qt::Key_Hangul_Jamo, //
    // Qt::Key_Hangul_Romaja, //
    // Qt::Key_Hangul_Jeonja, //
    // Qt::Key_Hangul_Banja, //
    // Qt::Key_Hangul_PreHanja, //
    // Qt::Key_Hangul_PostHanja, //
    // Qt::Key_Hangul_Special, //
    // Qt::Key_Dead_Grave, //
    // Qt::Key_Dead_Acute, //
    // Qt::Key_Dead_Circumflex, //
    // Qt::Key_Dead_Tilde, //
    // Qt::Key_Dead_Macron, //
    // Qt::Key_Dead_Breve, //
    // Qt::Key_Dead_Abovedot, //
    // Qt::Key_Dead_Diaeresis, //
    // Qt::Key_Dead_Abovering, //
    // Qt::Key_Dead_Doubleacute, //
    // Qt::Key_Dead_Caron, //
    // Qt::Key_Dead_Cedilla, //
    // Qt::Key_Dead_Ogonek, //
    // Qt::Key_Dead_Iota, //
    // Qt::Key_Dead_Voiced_Sound, //
    // Qt::Key_Dead_Semivoiced_Sound, //
    // Qt::Key_Dead_Belowdot, //
    // Qt::Key_Dead_Hook, //
    // Qt::Key_Dead_Horn, //
    // Qt::Key_Back, //
    // Qt::Key_Forward, //
    // Qt::Key_Stop, //
    // Qt::Key_Refresh, //
    // Qt::Key_VolumeDown, //
    // Qt::Key_VolumeMute, //
    // Qt::Key_VolumeUp, //
    // Qt::Key_BassBoost, //
    // Qt::Key_BassUp, //
    // Qt::Key_BassDown, //
    // Qt::Key_TrebleUp, //
    // Qt::Key_TrebleDown, //
    // Qt::Key_MediaPlay, //A key setting the state of the media player to play
    // Qt::Key_MediaStop, //A key setting the state of the media player to stop
    // Qt::Key_MediaPrevious, //
    // Qt::Key_MediaNext, //
    // Qt::Key_MediaRecord, //
    // Qt::Key_MediaPause, //A key setting the state of the media player to pause (Note: not the pause/break key)
    // Qt::Key_MediaTogglePlayPause, //A key to toggle the play/pause state in the media player (rather than setting an absolute state)
    // Qt::Key_HomePage, //
    // Qt::Key_Favorites, //
    // Qt::Key_Search, //
    // Qt::Key_Standby, //
    // Qt::Key_OpenUrl, //
    // Qt::Key_LaunchMail, //
    // Qt::Key_LaunchMedia, //
    // Qt::Key_Launch0, //On X11 this key is mapped to "My Computer" (XF86XK_MyComputer) key for legacy reasons.
    // Qt::Key_Launch1, //On X11 this key is mapped to "Calculator" (XF86XK_Calculator) key for legacy reasons.
    // Qt::Key_Launch2, //On X11 this key is mapped to XF86XK_Launch0 key for legacy reasons.
    // Qt::Key_Launch3, //On X11 this key is mapped to XF86XK_Launch1 key for legacy reasons.
    // Qt::Key_Launch4, //On X11 this key is mapped to XF86XK_Launch2 key for legacy reasons.
    // Qt::Key_Launch5, //On X11 this key is mapped to XF86XK_Launch3 key for legacy reasons.
    // Qt::Key_Launch6, //On X11 this key is mapped to XF86XK_Launch4 key for legacy reasons.
    // Qt::Key_Launch7, //On X11 this key is mapped to XF86XK_Launch5 key for legacy reasons.
    // Qt::Key_Launch8, //On X11 this key is mapped to XF86XK_Launch6 key for legacy reasons.
    // Qt::Key_Launch9, //On X11 this key is mapped to XF86XK_Launch7 key for legacy reasons.
    // Qt::Key_LaunchA, //On X11 this key is mapped to XF86XK_Launch8 key for legacy reasons.
    // Qt::Key_LaunchB, //On X11 this key is mapped to XF86XK_Launch9 key for legacy reasons.
    // Qt::Key_LaunchC, //On X11 this key is mapped to XF86XK_LaunchA key for legacy reasons.
    // Qt::Key_LaunchD, //On X11 this key is mapped to XF86XK_LaunchB key for legacy reasons.
    // Qt::Key_LaunchE, //On X11 this key is mapped to XF86XK_LaunchC key for legacy reasons.
    // Qt::Key_LaunchF, //On X11 this key is mapped to XF86XK_LaunchD key for legacy reasons.
    // Qt::Key_LaunchG, //On X11 this key is mapped to XF86XK_LaunchE key for legacy reasons.
    // Qt::Key_LaunchH, //On X11 this key is mapped to XF86XK_LaunchF key for legacy reasons.
    // Qt::Key_MonBrightnessUp, //
    // Qt::Key_MonBrightnessDown, //
    // Qt::Key_KeyboardLightOnOff, //
    // Qt::Key_KeyboardBrightnessUp, //
    // Qt::Key_KeyboardBrightnessDown, //
    // Qt::Key_PowerOff, //
    // Qt::Key_WakeUp, //
    // Qt::Key_Eject, //
    // Qt::Key_ScreenSaver, //
    // Qt::Key_WWW, //
    // Qt::Key_Memo, //
    // Qt::Key_LightBulb, //
    // Qt::Key_Shop, //
    // Qt::Key_History, //
    // Qt::Key_AddFavorite, //
    // Qt::Key_HotLinks, //
    // Qt::Key_BrightnessAdjust, //
    // Qt::Key_Finance, //
    // Qt::Key_Community, //
    // Qt::Key_AudioRewind, //
    // Qt::Key_BackForward, //
    // Qt::Key_ApplicationLeft, //
    // Qt::Key_ApplicationRight, //
    // Qt::Key_Book, //
    // Qt::Key_CD, //
    // Qt::Key_Calculator, //On X11 this key is not mapped for legacy reasons. Use Qt::Key_Launch1 instead.
    // Qt::Key_ToDoList, //
    // Qt::Key_ClearGrab, //
    // Qt::Key_Close, //
    // Qt::Key_Copy, //
    // Qt::Key_Cut, //
    // Qt::Key_Display, //
    // Qt::Key_DOS, //
    // Qt::Key_Documents, //
    // Qt::Key_Excel, //
    // Qt::Key_Explorer, //
    // Qt::Key_Game, //
    // Qt::Key_Go, //
    // Qt::Key_iTouch, //
    // Qt::Key_LogOff, //
    // Qt::Key_Market, //
    // Qt::Key_Meeting, //
    // Qt::Key_MenuKB, //
    // Qt::Key_MenuPB, //
    // Qt::Key_MySites, //
    // Qt::Key_News, //
    // Qt::Key_OfficeHome, //
    // Qt::Key_Option, //
    // Qt::Key_Paste, //
    // Qt::Key_Phone, //
    // Qt::Key_Calendar, //
    // Qt::Key_Reply, //
    // Qt::Key_Reload, //
    // Qt::Key_RotateWindows, //
    // Qt::Key_RotationPB, //
    // Qt::Key_RotationKB, //
    // Qt::Key_Save, //
    // Qt::Key_Send, //
    // Qt::Key_Spell, //
    // Qt::Key_SplitScreen, //
    // Qt::Key_Support, //
    // Qt::Key_TaskPane, //
    // Qt::Key_Terminal, //
    // Qt::Key_Tools, //
    // Qt::Key_Travel, //
    // Qt::Key_Video, //
    // Qt::Key_Word, //
    // Qt::Key_Xfer, //
    // Qt::Key_ZoomIn, //
    // Qt::Key_ZoomOut, //
    // Qt::Key_Away, //
    // Qt::Key_Messenger, //
    // Qt::Key_WebCam, //
    // Qt::Key_MailForward, //
    // Qt::Key_Pictures, //
    // Qt::Key_Music, //
    // Qt::Key_Battery, //
    // Qt::Key_Bluetooth, //
    // Qt::Key_WLAN, //
    // Qt::Key_UWB, //
    // Qt::Key_AudioForward, //
    // Qt::Key_AudioRepeat, //
    // Qt::Key_AudioRandomPlay, //
    // Qt::Key_Subtitle, //
    // Qt::Key_AudioCycleTrack, //
    // Qt::Key_Time, //
    // Qt::Key_Hibernate, //
    // Qt::Key_View, //
    // Qt::Key_TopMenu, //
    // Qt::Key_PowerDown, //
    // Qt::Key_Suspend, //
    // Qt::Key_ContrastAdjust, //
    // Qt::Key_TouchpadToggle, //
    // Qt::Key_TouchpadOn, //
    // Qt::Key_TouchpadOff, //
    // Qt::Key_MicMute, //
    // Qt::Key_Red, //
    // Qt::Key_Green, //
    // Qt::Key_Yellow, //
    // Qt::Key_Blue, //
    // Qt::Key_ChannelUp, //
    // Qt::Key_ChannelDown, //
    // Qt::Key_Guide, //
    // Qt::Key_Info, //
    // Qt::Key_Settings, //
    // Qt::Key_MicVolumeUp, //
    // Qt::Key_MicVolumeDown, //
    // Qt::Key_New, //
    // Qt::Key_Open, //
    // Qt::Key_Find, //
    // Qt::Key_Undo, //
    // Qt::Key_Redo, //
    // Qt::Key_MediaLast, //
    // Qt::Key_unknown, //
    // Qt::Key_Call, //A key to answer or initiate a call (see Qt::Key_ToggleCallHangup for a key to toggle current call state)
    // Qt::Key_Camera, //A key to activate the camera shutter. On Windows Runtime, the environment variable QT_QPA_ENABLE_CAMERA_KEYS must be set to receive the event.
    // Qt::Key_CameraFocus, //A key to focus the camera. On Windows Runtime, the environment variable QT_QPA_ENABLE_CAMERA_KEYS must be set to receive the event.
    // Qt::Key_Context1, //
    // Qt::Key_Context2, //
    // Qt::Key_Context3, //
    // Qt::Key_Context4, //
    // Qt::Key_Flip, //
    // Qt::Key_Hangup, //A key to end an ongoing call (see Qt::Key_ToggleCallHangup for a key to toggle current call state)
    // Qt::Key_No, //
    // Qt::Key_Select, //
    // Qt::Key_Yes, //
    // Qt::Key_ToggleCallHangup, //A key to toggle the current call state (ie. either answer, or hangup) depending on current call state
    // Qt::Key_VoiceDial, //
    // Qt::Key_LastNumberRedial, //
    // Qt::Key_Execute, //
    // Qt::Key_Printer, //
    // Qt::Key_Play, //
    // Qt::Key_Sleep, //
    // Qt::Key_Zoom, //
    // Qt::Key_Exit, //
    // Qt::Key_Cancel, //
};

#endif // KEY_H
