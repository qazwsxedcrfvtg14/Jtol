�аO�o�b�s�������[�J "-lwsock32"
�M��ϥΤFJtol��namespace
���c:
    Time �s�ɶ�
    Pos �s�y��(f,s)
    Net �^�Ǻ����s�u�Ϋ��w
    Color �s�C��(R,G,B)
�禡:
    GetTime():Time
        ���o�ɶ�
    Delay()
        ��T���ݮɶ�(�@��)�A�|�Y������CPU
    GetPos():Pos
        ���o�ƹ��y��
    GetCol(int x,int y):Color
        ���o�y���C��
    GetCol(Pos p):Color
        ���o�y���C��
    Click()
        ���U�ƹ�����
    Press()
        ����ƹ�����
    Release()
        ��}�ƹ�����
    Move(int x,int y,int t=0)
        �ƹ����Ʋ���(t�O���ʮɶ�)
    MoveEX(int x,int y,int t=0)
        �ƹ����Ʋ���(t�O���ʮɶ�)�A�B���|�{�����|���b�o��
    Clear()
        �M���e��
    ChkKey(int key):bool
        ���s�O�_�O����
    Key(int key):bool
        �O�_���F�Y�ӫ��s
    WaitKey(int key)
        ���ݫ��U�Y���s
    PressKey(int key)
        ����Y���s
    ReleaseKey(int key)
        ��}�Y���s
    ClickKey(int key)
        ���U�Y���s
    NetCreat(char ip[],int port=23,int mode=1):Net
        �إߺ����s�u
    NetClose(Net sock)
        ���������s�u
    NetGet(Net sock):char*
        ���o�����T��
    NetSend(NET sock,char *s)
        �e�X�����T��
    Setup()
        ��l��
��L������
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
