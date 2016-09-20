#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
#include"Jtol.h"
using namespace Jtol;
using namespace std;
void HtmlExample();
void NetExample();
void SNetExample();
void ColExample();
void CheatExample();
void Control();
void ControlServer();
int WinExample(HINSTANCE hInstance);
/*int main(int argc,char** argv){
    return 0;
    }*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
    int argc=__argc; char** argv=__argv;
#pragma GCC diagnostic pop
    cout<<md5("1234");
    //HideConsole();
    //Wait(ThreadCreate(WinExample,hInstance));
    //system("pause");
    return 0;
    }
int WinExample(HINSTANCE hInstance){
    WinCreat(hInstance,
        [](HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)->LRESULT{
            PAINTSTRUCT ps;
            if(msg==WM_PAINT){
                /*HDC hDC = */BeginPaint(hWnd, &ps);
                EndPaint(hWnd, &ps);
                return 0;
                }
            else if(msg==WM_PAINT){
                PostQuitMessage(0);
                return 0;
                }
            return DefWindowProc(hWnd, msg, wParam, lParam);
            }
        );
    MSG msg;
	while(GetMessage(&msg,NULL,0,0)){
	    TranslateMessage(&msg);
		DispatchMessage(&msg);
        }
	return (int)msg.wParam;
    }
void Control(){
    char s[100];
    printf("ip://");
    scanf("%s",s);
    Net net=NetCreat(s,23);
    while(1){
        string str;
        sprintf(s,"5491 %d %d ",GetPos().f,GetPos().s);
        str=s;
        for(int i=0;i<256;i++){
            if(ChkKey(i)){
                sprintf(s,"%d ",i);
                str+=s;
                }
            if(Key(i)){
                sprintf(s,"%d ",-i);
                str+=s;
                }
            }
        NetSend(net,str.c_str());
        Sleep(20);
        }
    }

void ControlServer(){
    HideConsole();
    set<Net> *snet=SNetCreat(23);
    if(snet==NULL)return;
    puts("SNet Started!");
    while(1){
        set<Net> snet_c=*snet;
        for(auto sock:snet_c){
            const char *buf=NetGet(sock);
            if(strlen(buf)){
                stringstream str;
                str<<buf;
                //puts(buf);
                int tmp;
                str>>tmp;
                //printf("%d\n",tmp);
                //Time t;
                while(tmp==5491){
                    int x,y;
                    str>>x>>y;
                    Move(x,y);
                    //printf("M %d %d\n",x,y);
                    tmp=-1;
                    while(str>>tmp){
                        if(tmp==5491){
                            break;
                            }
                        if(tmp>=0){
                            if(tmp==1)
                                Press();
                            else if(tmp==2)
                                Press(1);
                            else
                                PressKey(tmp);
                            //printf("P %d\n",tmp);
                            }
                        else{
                            if(tmp==-1)
                                Release();
                            else if(tmp==-2)
                                Release(1);
                            else
                                ReleaseKey(-tmp);
                            //printf("R %d\n",-tmp);
                            }
                        tmp=-1;
                        }
                    }
                //sscanf(buf,"~%d %d\n",&x,&y);
                //Move(x,y);
                }
            }
        Sleep(20);
        }
    }
void HtmlExample(){
    string html = "<html><body>hey<link href=\"http://www.apple.com\" /><a href=\"yahoo.com.tw\">haha</a></body></html>";
    HtmlToNode(html)->Print();
    }
void NetExample(){
    Net net=NetCreat("web.ck.tp.edu.tw",80);
    string str;
    str+="GET /ann/ HTTP/1.1\n";
    str+="Accept: text/html, application/xhtml+xml, */*\n";
    str+="Accept-Language: zh-Hant-TW,zh-Hant\n";
    str+="User-Agent: Jtol/1.0 (Windows NT 6.3; WOW64;)\n";
    str+="Accept-Encoding: identity\n";
    str+="Host: ck10227.twbbs.org\n";
    str+="Connection: Keep-Alive\n\n";
    NetSend(net,&str[0]);
    //Sleep(3000);
    Time tim=GetTime();
    string get;
    while(GetTime()-tim<500){
        const char *buf=NetGet(net);
        if(strlen(buf)){
            get+=buf;
            //printf("~$~");
            //for(int i=0;buf[i];i++)
                //printf("%c %d\n",buf[i],buf[i]);
            //printf("%s",buf);
            tim=GetTime();
            }
        }
    Node http=HttpDecode(get);
    if(http.Type["Transfer-Encoding"]=="chunked"){
        crope cont=http.Type["HTML"].c_str();
        http.Type["HTML"]="";
        while(cont.size()){
            string code;
            int i=0;
            for(;cont[i];i++){
                if(cont[i]=='\n'){
                    i++;
                    break;
                    }
                }
            int num;
            sscanf(cont.substr(0,i).c_str(),"%x",&num);
            //printf("~~~\n",cont.substr(0,i).c_str());
            http.Type["HTML"]+=cont.substr(i,num).c_str();
            cont.erase(0,i+num+2);
            }
        }
    //http.Print();
    HtmlToNode(http.Type["HTML"].c_str())->Print();
    //HtmlToNode(get)->Print();
    }
void SNetExample(){
    set<Net> *snet=SNetCreat(80);
    if(snet==NULL)return;
    puts("SNet Started!");
    while(1){
        set<Net> snet_c=*snet;
        for(auto sock:snet_c){
            const char *buf=NetGet(sock);
            if(strlen(buf)){
                //printf("%s",buf);
                string s=FileToStr("a.html");
                string str;
                str+="HTTP/1.1 200 OK\n";
                str+="Content-Length: "+IntToStr(s.length())+"\n";
                str+="Content-Type: text/html\n";
                str+="Server: Jtol/1.0 (Win) (Windows8.1/WindowsNT)\n";
                str+="Last-Modified: "+UTCTime()+"\n";
                str+="Accept-Ranges: bytes\n";
                str+="Date: "+UTCTime()+"\n";
                str+="\n";
                str+=s;
                //cout<<str;
                NetSend(sock,&str[0]);
                NetClose(sock);
                snet->erase(sock);
                }
            }
        if(Key('E'))break;
        Sleep(20);
        }
    }

void ColExample(){
    int go=0;
    while(1){
        if(go){
            if(Key(0x01)){
                par pos=GetPos();
                Color col=GetCol(pos);
                printf("%d %d %d (%d %d)\n",col.R,col.G,col.B,pos.f,pos.s);
                }
            if(Key('C'))
                Clear();
            if(Key('M'))
                Move(0,0,1000);
            if(ChkKey('P'))
                PressKey(0x01);
            else if(!ChkKey(0x01))
                ReleaseKey(0x01);
            }
        if(Key('G')){
            go=!go;
            if(go)puts("On");
            else puts("Off");
            }
        if(Key('E'))break;
        Sleep(20);
        }
    }

void CheatExample(){
    Setup();
    int go=0;
    while(1){
        if(go){
            //Pos p=GetPos();
            //Color coll=GetCol(p);
            //printf("%d %d %d %d %d\n",p.f,p.s,coll.R,coll.G,coll.B);
            Color col=GetCol(Pos(1885,557));
            if(col.R==255&&col.G==255&&col.B==255){
                ClickKey('X');
                puts("Click!");
                }
            }
        if(Key('G')){
            go=!go;
            if(go)puts("On");
            else puts("Off");
            }
        if(Key('E'))break;
        Sleep(20);
        }
    }
