請記得在連結器內加入 "-lwsock32"
如果要執行檔可以跨電腦執行請再加入 "-static"
然後使用了Jtol的namespace
結構:
    Time 存時間
    Pos 存座標(f,s)
    Net 網路連線用指針
    Color 存顏色(R,G,B,A)
    Node Html_DOM節點
    Thread 執行緒指針
    DLL DLL檔案指針
    rwlock 讀寫鎖, read_lock(), write_lock() ,unlock()
    Pic 圖片結構=vector<vector<Color>>
函式:
    Setup()
        初始化
    GetTime():Time
        取得時間
    Delay()
        精確等待時間(毫秒)
    GetPos():Pos
        取得滑鼠座標
    GetCol(int x,int y):Color
        取得座標顏色
    GetColFast(int x,int y):Color
        快速取得螢幕顏色，但是嚴重消耗CPU
    GetColFastStop
        停止GetColFast的背景運作
    GetCol(Pos p):Color
        取得座標顏色
    Click()
        按下滑鼠左鍵
    Press()
        按住滑鼠左鍵
    Release()
        放開滑鼠左鍵
    Move(int x,int y,int t=0)
        滑鼠平滑移動(t是移動時間)
    MoveEX(int x,int y,int t=0)
        滑鼠平滑移動(t是移動時間)，且不會程式不會停在這裡
    Clear()
        清除Console畫面
    ChkKey(int key):bool
        按鈕是否是按住的
    Key(int key):bool
        是否按了某個按鈕
    WaitKey(int key)
        等待按下某按鈕
    PressKey(int key)
        按住某按鈕
    ReleaseKey(int key)
        放開某按鈕
    ClickKey(int key)
        按下某按鈕
    NetCreat(char ip[],int port=23,int mode=1):Net
        建立網路連線
    NetClose(Net sock)
        關閉網路連線
    NetGet(Net sock):char*
        取得網路訊息
    NetSend(NET sock,char *s)
        送出網路訊息
    FileToStr(const char *file_name):string
        將字串寫入檔案
    StrToFile(string s,const char *file_name)
        把檔案中全部字元放入字串
    UTCTime()
        印出現在時間之標準格式
    IntToStr(int x):string
        int->string
    StrToInt(string x):int
        string->int
    HtmlToNode(string s):Node*
        把一個html字串轉換為DOM節點
    HttpDecode(string s):Node
        解析http header
    ThreadCreate(function,args...):Thread
        建立新執行緒
    Wait(Thread thr)
        等待thr結束
    Alert(const char *content="",const char *titile="")
        彈出一個小視窗
    HideConsole()
        隱藏Console
    LoadDLL(string dll_name):DLL
        讀取DLL檔
    FreeDLL(DLL LinstLib)
        釋放DLL檔
    GetDLLFunc(DLL hinstLib,string s):function<Signature>
        取得DLL檔中的函式指標
    WinCreat(HINSTANCE hInstance,T WndProc):Hand
        建立視窗
    ReadBMP(string file_name):Pic
        讀取bmp檔案
    WriteBMP(string out,Pic pic)
        寫入bmp檔案
    ReadPNG(string file_name):Pic
        讀取png檔案
    WritePNG(string out,Pic pic)
        寫入png檔案
    Dir(string s):vector<string>
        列出某目錄下的檔案
    FileExists(const char * file):int
        檢查檔案是否存在
    FileFullName(string s):string
        取得檔案完整名稱
    SetConsoleTitle(const char* title)
        設定Console Title
    GetConsoleTitle(char* title, DWORD nSize)
        取得Console Title
    GoToxy(int x,int  y)
        移動Console上的游標位置
    Getxy(int &x,int  &y)
        取得Console上的游標位置
    SetColor(int color=-1)
        設定Console顏色
    GetConsoleWindowSize(DWORD &W, DWORD &H)
        取得Console視窗大小
    SetConsoleWindowSize(SHORT x, SHORT y)
        設定Console視窗大小
    SetTransparenty(HWND hWnd,int alpah=127)
        設定視窗透明度
    SetTransparentyColor(HWND hWnd,int color,int alpah=255)
        設定某顏色透明
    GetHwndFromPoint(Pos p)
        取得某點所對應到的視窗的指針
    EncodeBase64(string const& decoded_string):string
        編碼成base64
    DecodeBase64(string const& encoded_string):string
        以base64解碼
    md5(string const& encoded_string):string
        編碼成md5
鍵盤對應表
    $Rmouse_BUTTON_L = 0x01        # left mouse button
    $Rmouse_BUTTON_R = 0x02        # right mouse button
    $Rmouse_BUTTON_M = 0x04        # middle mouse button
    $Rmouse_BUTTON_4 = 0x05        # 4th mouse button
    $Rmouse_BUTTON_5 = 0x06        # 5th mouse button
    $R_Key_BACK      = 0x08        # BACKSPACE key
    $R_Key_TAB       = 0x09        # TAB key
    $R_Key_RETURN    = 0x0D        # ENTER key
    $R_Key_SHIFT     = 0x10        # SHIFT key
    $R_Key_CTRL      = 0x11        # CTLR key
    $R_Key_CTLR      = 0x11        # CTLR key
    $R_Key_ALT       = 0x12        # ALT key
    $R_Key_PAUSE     = 0x13        # PAUSE key
    $R_Key_CAPITAL   = 0x14        # CAPS LOCK key
    $R_Key_ESCAPE    = 0x1B        # ESC key
    $R_Key_SPACE     = 0x20        # SPACEBAR
    $R_Key_PRIOR     = 0x21        # PAGE UP key
    $R_Key_NEXT      = 0x22        # PAGE DOWN key
    $R_Key_END       = 0x23        # END key
    $R_Key_HOME      = 0x24        # HOME key
    $R_Key_LEFT      = 0x25        # LEFT ARROW key
    $R_Key_UP        = 0x26        # UP ARROW key
    $R_Key_RIGHT     = 0x27        # RIGHT ARROW key
    $R_Key_DOWN      = 0x28        # DOWN ARROW key
    $R_Key_SELECT    = 0x29        # SELECT key
    $R_Key_PRINT     = 0x2A        # PRINT key
    $R_Key_SNAPSHOT  = 0x2C        # PRINT SCREEN key
    $R_Key_INSERT    = 0x2D        # INS key
    $R_Key_DELETE    = 0x2E        # DEL key
    $R_Key_0         = 0x30        # 0 key
    $R_Key_1         = 0x31        # 1 key
    $R_Key_2         = 0x32        # 2 key
    $R_Key_3         = 0x33        # 3 key
    $R_Key_4         = 0x34        # 4 key
    $R_Key_5         = 0x35        # 5 key
    $R_Key_6         = 0x36        # 6 key
    $R_Key_7         = 0x37        # 7 key
    $R_Key_8         = 0x38        # 8 key
    $R_Key_9         = 0x39        # 9 key
    $R_Key_A         = 0x41        # A key
    $R_Key_B         = 0x42        # B key
    $R_Key_C         = 0x43        # C key
    $R_Key_D         = 0x44        # D key
    $R_Key_E         = 0x45        # E key
    $R_Key_F         = 0x46        # F key
    $R_Key_G         = 0x47        # G key
    $R_Key_H         = 0x48        # H key
    $R_Key_I         = 0x49        # I key
    $R_Key_J         = 0x4A        # J key
    $R_Key_K         = 0x4B        # K key
    $R_Key_L         = 0x4C        # L key
    $R_Key_M         = 0x4D        # M key
    $R_Key_N         = 0x4E        # N key
    $R_Key_O         = 0x4F        # O key
    $R_Key_P         = 0x50        # P key
    $R_Key_Q         = 0x51        # Q key
    $R_Key_R         = 0x52        # R key
    $R_Key_S         = 0x53        # S key
    $R_Key_T         = 0x54        # T key
    $R_Key_U         = 0x55        # U key
    $R_Key_V         = 0x56        # V key
    $R_Key_W         = 0x57        # W key
    $R_Key_X         = 0x58        # X key
    $R_Key_Y         = 0x59        # Y key
    $R_Key_Z         = 0x5A        # Z key
    $R_Key_LWIN      = 0x5B        # Left Windows key (Microsoft Natural keyboard)
    $R_Key_RWIN      = 0x5C        # Right Windows key (Natural keyboard)
    $R_Key_APPS      = 0x5D        # Applications key (Natural keyboard)
    $R_Key_NUMPAD0   = 0x60        # Numeric keypad 0 key
    $R_Key_NUMPAD1   = 0x61        # Numeric keypad 1 key
    $R_Key_NUMPAD2   = 0x62        # Numeric keypad 2 key
    $R_Key_NUMPAD3   = 0x63        # Numeric keypad 3 key
    $R_Key_NUMPAD4   = 0x64        # Numeric keypad 4 key
    $R_Key_NUMPAD5   = 0x65        # Numeric keypad 5 key
    $R_Key_NUMPAD6   = 0x66        # Numeric keypad 6 key
    $R_Key_NUMPAD7   = 0x67        # Numeric keypad 7 key
    $R_Key_NUMPAD8   = 0x68        # Numeric keypad 8 key
    $R_Key_NUMPAD9   = 0x69        # Numeric keypad 9 key
    $R_Key_MULTIPLY  = 0x6A        # Multiply key (*)
    $R_Key_ADD       = 0x6B        # Add key (+)
    $R_Key_SEPARATOR = 0x6C        # Separator key
    $R_Key_SUBTRACT  = 0x6D        # Subtract key (-)
    $R_Key_DECIMAL   = 0x6E        # Decimal key
    $R_Key_DIVIDE    = 0x6F        # Divide key (/)
    $R_Key_F1        = 0x70        # F1 key
    $R_Key_F2        = 0x71        # F2 key
    $R_Key_F3        = 0x72        # F3 key
    $R_Key_F4        = 0x73        # F4 key
    $R_Key_F5        = 0x74        # F5 key
    $R_Key_F6        = 0x75        # F6 key
    $R_Key_F7        = 0x76        # F7 key
    $R_Key_F8        = 0x77        # F8 key
    $R_Key_F9        = 0x78        # F9 key
    $R_Key_F10       = 0x79        # F10 key
    $R_Key_F11       = 0x7A        # F11 key
    $R_Key_F12       = 0x7B        # F12 key
    $R_Key_NUMLOCK   = 0x90        # NUM LOCK key
    $R_Key_SCROLL    = 0x91        # SCROLL LOCK key
    $R_Key_LSHIFT    = 0xA0        # Left SHIFT key
    $R_Key_RSHIFT    = 0xA1        # Right SHIFT key
    $R_Key_LCONTROL  = 0xA2        # Left CONTROL key
    $R_Key_RCONTROL  = 0xA3        # Right CONTROL key
    $R_Key_L_ALT     = 0xA4        # Left ALT key
    $R_Key_R_ALT     = 0xA5        # Right ALT key
    $R_Key_SEP       = 0xBC        # , key
    $R_Key_DASH      = 0xBD        # - key
    $R_Key_DOTT      = 0xBE        # . Key
