#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame(void *, int, AppId_t *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32);
extern void cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyList(void *);
extern void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter(void *, const char *, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter(void *, const char *, int, int);
extern void cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter(void *);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex(void *, int);
extern void cppISteamMatchmaking_SteamMatchMaking004_CreateLobby(void *, bool);
extern void cppISteamMatchmaking_SteamMatchMaking004_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking004_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking004_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking004_SetLobbyData(void *, CSteamID, const char *, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyData(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer(void *, CSteamID, uint32, uint16, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer(void *, CSteamID, uint32 *, uint16 *, CSteamID *);
extern bool cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit(void *, CSteamID, int);
extern int cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies(void *);
#ifdef __cplusplus
}
#endif