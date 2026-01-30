#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "SteamNative_Platform_Win32.h"
namespace Facepunch_Steamworks::SteamNative { struct Platform_Win32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "SteamNative_CSteamID.h"
namespace Facepunch_Steamworks::SteamNative { struct CSteamID; };
#include "SteamNative_VoiceResult.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt32.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_HAuthTicket.h"
namespace Facepunch_Steamworks::SteamNative { struct HAuthTicket; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_FriendRelationship.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_PersonaState.h"
namespace Facepunch_Steamworks::SteamNative { struct FriendGameInfo_t; };
namespace Facepunch_Steamworks::SteamNative { struct FriendGameInfo_t; };
#include "SteamNative_ChatEntryType.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "SteamNative_Result.h"
#include "SteamNative_SteamAPICall_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamAPICall_t; };
#include "SteamNative_HSteamUser.h"
namespace Facepunch_Steamworks::SteamNative { struct HSteamUser; };
#include "SteamNative_HSteamPipe.h"
namespace Facepunch_Steamworks::SteamNative { struct HSteamPipe; };

namespace Facepunch_Steamworks::SteamNative
{
	struct Platform_Win32_Native : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static intptr_t SteamAPI_ISteamClient_GetISteamUser(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamGameServer(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamFriends(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamUtils(intptr_t ISteamClient, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamMatchmaking(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamMatchmakingServers(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamUserStats(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamGameServerStats(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamApps(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamNetworking(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamRemoteStorage(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamScreenshots(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamHTTP(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamUGC(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamAppList(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static intptr_t SteamAPI_ISteamClient_GetISteamInventory(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		static Facepunch_Steamworks::SteamNative::CSteamID SteamAPI_ISteamUser_GetSteamID(intptr_t ISteamUser);
		static Facepunch_Steamworks::SteamNative::VoiceResult SteamAPI_ISteamUser_GetAvailableVoice(intptr_t ISteamUser, uint32_t& pcbCompressed, uint32_t& pcbUncompressed_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated);
		static Facepunch_Steamworks::SteamNative::VoiceResult SteamAPI_ISteamUser_GetVoice(intptr_t ISteamUser, bool bWantCompressed, intptr_t pDestBuffer, uint32_t cbDestBufferSize, uint32_t& nBytesWritten, bool bWantUncompressed_Deprecated, intptr_t pUncompressedDestBuffer_Deprecated, uint32_t cbUncompressedDestBufferSize_Deprecated, uint32_t& nUncompressBytesWritten_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated);
		static uint32_t SteamAPI_ISteamUser_GetVoiceOptimalSampleRate(intptr_t ISteamUser);
		static Facepunch_Steamworks::SteamNative::HAuthTicket SteamAPI_ISteamUser_GetAuthSessionTicket(intptr_t ISteamUser, intptr_t pTicket, int32_t cbMaxTicket, uint32_t& pcbTicket);
		static void SteamAPI_ISteamUser_CancelAuthTicket(intptr_t ISteamUser, uint32_t hAuthTicket);
		static intptr_t SteamAPI_ISteamFriends_GetPersonaName(intptr_t ISteamFriends);
		static int32_t SteamAPI_ISteamFriends_GetFriendCount(intptr_t ISteamFriends, int32_t iFriendFlags);
		static Facepunch_Steamworks::SteamNative::CSteamID SteamAPI_ISteamFriends_GetFriendByIndex(intptr_t ISteamFriends, int32_t iFriend, int32_t iFriendFlags);
		static Facepunch_Steamworks::SteamNative::FriendRelationship SteamAPI_ISteamFriends_GetFriendRelationship(intptr_t ISteamFriends, uint64_t steamIDFriend);
		static Facepunch_Steamworks::SteamNative::PersonaState SteamAPI_ISteamFriends_GetFriendPersonaState(intptr_t ISteamFriends, uint64_t steamIDFriend);
		static intptr_t SteamAPI_ISteamFriends_GetFriendPersonaName(intptr_t ISteamFriends, uint64_t steamIDFriend);
		static bool SteamAPI_ISteamFriends_GetFriendGamePlayed(intptr_t ISteamFriends, uint64_t steamIDFriend, Facepunch_Steamworks::SteamNative::FriendGameInfo_t& pFriendGameInfo);
		static int32_t SteamAPI_ISteamFriends_GetSmallFriendAvatar(intptr_t ISteamFriends, uint64_t steamIDFriend);
		static int32_t SteamAPI_ISteamFriends_GetMediumFriendAvatar(intptr_t ISteamFriends, uint64_t steamIDFriend);
		static int32_t SteamAPI_ISteamFriends_GetLargeFriendAvatar(intptr_t ISteamFriends, uint64_t steamIDFriend);
		static bool SteamAPI_ISteamFriends_RequestUserInformation(intptr_t ISteamFriends, uint64_t steamIDUser, bool bRequireNameOnly);
		static void SteamAPI_ISteamFriends_RequestFriendRichPresence(intptr_t ISteamFriends, uint64_t steamIDFriend);
		static int32_t SteamAPI_ISteamFriends_GetFriendMessage(intptr_t ISteamFriends, uint64_t steamIDFriend, int32_t iMessageID, intptr_t pvData, int32_t cubData, Facepunch_Steamworks::SteamNative::ChatEntryType& peChatEntryType);
		static bool SteamAPI_ISteamUtils_GetImageSize(intptr_t ISteamUtils, int32_t iImage, uint32_t& pnWidth, uint32_t& pnHeight);
		static bool SteamAPI_ISteamUtils_GetImageRGBA(intptr_t ISteamUtils, int32_t iImage, intptr_t pubDest, int32_t nDestBufferSize);
		static bool SteamAPI_ISteamUtils_IsAPICallCompleted(intptr_t ISteamUtils, uint64_t hSteamAPICall, bool& pbFailed);
		static bool SteamAPI_ISteamUtils_GetAPICallResult(intptr_t ISteamUtils, uint64_t hSteamAPICall, intptr_t pCallback, int32_t cubCallback, int32_t iCallbackExpected, bool& pbFailed);
		static int32_t SteamAPI_ISteamMatchmaking_GetFavoriteGameCount(intptr_t ISteamMatchmaking);
		static bool SteamAPI_ISteamMatchmaking_GetFavoriteGame(intptr_t ISteamMatchmaking, int32_t iGame, uint32_t& pnAppID, uint32_t& pnIP, uint16_t& pnConnPort, uint16_t& pnQueryPort, uint32_t& punFlags, uint32_t& pRTime32LastPlayedOnServer);
		static bool SteamAPI_ISteamUserStats_RequestCurrentStats(intptr_t ISteamUserStats);
		static bool SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime(intptr_t ISteamUserStats, mscorlib::System::String* pchName, bool& pbAchieved, uint32_t& punUnlockTime);
		static int32_t SteamAPI_ISteamUserStats_GetAchievementIcon(intptr_t ISteamUserStats, mscorlib::System::String* pchName);
		static intptr_t SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute(intptr_t ISteamUserStats, mscorlib::System::String* pchName, mscorlib::System::String* pchKey);
		static uint32_t SteamAPI_ISteamUserStats_GetNumAchievements(intptr_t ISteamUserStats);
		static intptr_t SteamAPI_ISteamUserStats_GetAchievementName(intptr_t ISteamUserStats, uint32_t iAchievement);
		static intptr_t SteamAPI_ISteamApps_GetCurrentGameLanguage(intptr_t ISteamApps);
		static intptr_t SteamAPI_ISteamApps_GetAvailableGameLanguages(intptr_t ISteamApps);
		static bool SteamAPI_ISteamApps_GetCurrentBetaName(intptr_t ISteamApps, mscorlib::System::Text::StringBuilder* pchName, int32_t cchNameBufferSize);
		static uint32_t SteamAPI_ISteamApps_GetAppInstallDir(intptr_t ISteamApps, uint32_t appID, mscorlib::System::Text::StringBuilder* pchFolder, uint32_t cchFolderBufferSize);
		static Facepunch_Steamworks::SteamNative::CSteamID SteamAPI_ISteamApps_GetAppOwner(intptr_t ISteamApps);
		static int32_t SteamAPI_ISteamApps_GetAppBuildId(intptr_t ISteamApps);
		static bool SteamAPI_ISteamNetworking_IsP2PPacketAvailable(intptr_t ISteamNetworking, uint32_t& pcubMsgSize, int32_t nChannel);
		static bool SteamAPI_ISteamNetworking_ReadP2PPacket(intptr_t ISteamNetworking, intptr_t pubDest, uint32_t cubDest, uint32_t& pcubMsgSize, uint64_t& psteamIDRemote, int32_t nChannel);
		static bool SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser(intptr_t ISteamNetworking, uint64_t steamIDRemote);
		static bool SteamAPI_ISteamNetworking_CloseP2PSessionWithUser(intptr_t ISteamNetworking, uint64_t steamIDRemote);
		static Facepunch_Steamworks::SteamNative::Result SteamAPI_ISteamInventory_GetResultStatus(intptr_t ISteamInventory, int32_t resultHandle);
		static bool SteamAPI_ISteamInventory_GetResultItems(intptr_t ISteamInventory, int32_t resultHandle, intptr_t pOutItemsArray, uint32_t& punOutItemsArraySize);
		static bool SteamAPI_ISteamInventory_GetResultItemProperty(intptr_t ISteamInventory, int32_t resultHandle, uint32_t unItemIndex, mscorlib::System::String* pchPropertyName, mscorlib::System::Text::StringBuilder* pchValueBuffer, uint32_t& punValueBufferSizeOut);
		static uint32_t SteamAPI_ISteamInventory_GetResultTimestamp(intptr_t ISteamInventory, int32_t resultHandle);
		static void SteamAPI_ISteamInventory_DestroyResult(intptr_t ISteamInventory, int32_t resultHandle);
		static bool SteamAPI_ISteamInventory_GetAllItems(intptr_t ISteamInventory, int32_t& pResultHandle);
		static bool SteamAPI_ISteamInventory_SerializeResult(intptr_t ISteamInventory, int32_t resultHandle, intptr_t pOutBuffer, uint32_t& punOutBufferSize);
		static bool SteamAPI_ISteamInventory_LoadItemDefinitions(intptr_t ISteamInventory);
		static bool SteamAPI_ISteamInventory_GetItemDefinitionIDs(intptr_t ISteamInventory, intptr_t pItemDefIDs, uint32_t& punItemDefIDsArraySize);
		static bool SteamAPI_ISteamInventory_GetItemDefinitionProperty(intptr_t ISteamInventory, int32_t iDefinition, mscorlib::System::String* pchPropertyName, mscorlib::System::Text::StringBuilder* pchValueBuffer, uint32_t& punValueBufferSizeOut);
		static Facepunch_Steamworks::SteamNative::SteamAPICall_t SteamAPI_ISteamInventory_RequestPrices(intptr_t ISteamInventory);
		static bool SteamAPI_ISteamInventory_GetItemPrice(intptr_t ISteamInventory, int32_t iDefinition, uint64_t& pPrice);
		static bool SteamAPI_Init();
		static void SteamAPI_RunCallbacks();
		static void SteamAPI_RegisterCallback(intptr_t pCallback, int32_t callback);
		static void SteamAPI_UnregisterCallback(intptr_t pCallback);
		static void SteamAPI_Shutdown();
		static void SteamGameServer_Shutdown();
		static Facepunch_Steamworks::SteamNative::HSteamUser SteamAPI_GetHSteamUser();
		static Facepunch_Steamworks::SteamNative::HSteamPipe SteamAPI_GetHSteamPipe();
		static intptr_t SteamInternal_CreateInterface(mscorlib::System::String* version);
	};
}

