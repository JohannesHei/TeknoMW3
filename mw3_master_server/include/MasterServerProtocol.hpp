#ifndef __MW3_MASTERSERVER_MASTERSERVERPROTOCOL_HPP__
#define __MW3_MASTERSERVER_MASTERSERVERPROTOCOL_HPP__

#define MW3_MS_SERVER_MAGIC4CC	'BOOB'
#define MW3_MS_CLIENT_MAGIC4CC	'COKE'
#define MW3_MS_LISTEN_PORT		27017
#define MW3_MS_CLEANUP_RATE		30000

#pragma pack(1)
typedef struct _MW3_MS_SERVER_ENTRY {
	DWORD	IpAddress;
	USHORT	QPort;
} MW3_MS_SERVER_ENTRY, *PMW3_MS_SERVER_ENTRY;

typedef struct _MW3_MS_SERVER_REQUEST {
	DWORD	Magic4CC;
	DWORD	Version;
	USHORT	QPort;
} MW3_MS_SERVER_REQUEST, *PMW3_MS_SERVER_REQUEST;

typedef struct _MW3_MS_CLIENT_REQUEST {
	DWORD	Magic4CC;
	DWORD	Version;
} MW3_MS_CLIENT_REQUEST, *PMW3_MS_CLIENT_REQUEST;

typedef struct _MW3_MS_CLIENT_RESPONSE {
	DWORD				NumberOfEntries;
	MW3_MS_SERVER_ENTRY	Entries[0];
} MW3_MS_CLIENT_RESPONSE, *PMW3_MS_CLIENT_RESPONSE;
#pragma pack()

#endif //__MW3_MASTERSERVER_MASTERSERVERPROTOCOL_HPP__