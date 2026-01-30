#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_Platform.h"
namespace Facepunch_Steamworks::SteamNative { struct Platform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "SteamNative_CSteamID.h"
namespace Facepunch_Steamworks::SteamNative { struct CSteamID; };
namespace mscorlib::System { struct String; };
#include "SteamNative_FriendRelationship.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_PersonaState.h"
namespace Facepunch_Steamworks::SteamNative { struct FriendGameInfo_t; };
namespace Facepunch_Steamworks::SteamNative { struct FriendGameInfo_t; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_ChatEntryType.h"
#include "SteamNative_Result.h"
#include "SteamNative_SteamAPICall_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamAPICall_t; };
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct UInt16; };
#include "SteamNative_VoiceResult.h"
#include "SteamNative_HAuthTicket.h"
namespace Facepunch_Steamworks::SteamNative { struct HAuthTicket; };
#include "SteamNative_HSteamUser.h"
namespace Facepunch_Steamworks::SteamNative { struct HSteamUser; };
#include "SteamNative_HSteamPipe.h"
namespace Facepunch_Steamworks::SteamNative { struct HSteamPipe; };

namespace Facepunch_Steamworks::SteamNative
{
	struct Platform_Interface
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_IsValid();
		intptr_t ISteamApps_GetCurrentGameLanguage();
		intptr_t ISteamApps_GetAvailableGameLanguages();
		bool ISteamApps_GetCurrentBetaName(mscorlib::System::Text::StringBuilder* pchName, int32_t cchNameBufferSize);
		uint32_t ISteamApps_GetAppInstallDir(uint32_t appID, mscorlib::System::Text::StringBuilder* pchFolder, uint32_t cchFolderBufferSize);
		Facepunch_Steamworks::SteamNative::CSteamID ISteamApps_GetAppOwner();
		int32_t ISteamApps_GetAppBuildId();
		intptr_t ISteamClient_GetISteamUser(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamGameServer(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamFriends(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamUtils(int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamMatchmaking(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamMatchmakingServers(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamUserStats(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamGameServerStats(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamApps(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamNetworking(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamRemoteStorage(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamScreenshots(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamHTTP(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamUGC(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamAppList(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamClient_GetISteamInventory(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion);
		intptr_t ISteamFriends_GetPersonaName();
		int32_t ISteamFriends_GetFriendCount(int32_t iFriendFlags);
		Facepunch_Steamworks::SteamNative::CSteamID ISteamFriends_GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags);
		Facepunch_Steamworks::SteamNative::FriendRelationship ISteamFriends_GetFriendRelationship(uint64_t steamIDFriend);
		Facepunch_Steamworks::SteamNative::PersonaState ISteamFriends_GetFriendPersonaState(uint64_t steamIDFriend);
		intptr_t ISteamFriends_GetFriendPersonaName(uint64_t steamIDFriend);
		bool ISteamFriends_GetFriendGamePlayed(uint64_t steamIDFriend, Facepunch_Steamworks::SteamNative::FriendGameInfo_t& pFriendGameInfo);
		int32_t ISteamFriends_GetSmallFriendAvatar(uint64_t steamIDFriend);
		int32_t ISteamFriends_GetMediumFriendAvatar(uint64_t steamIDFriend);
		int32_t ISteamFriends_GetLargeFriendAvatar(uint64_t steamIDFriend);
		bool ISteamFriends_RequestUserInformation(uint64_t steamIDUser, bool bRequireNameOnly);
		void ISteamFriends_RequestFriendRichPresence(uint64_t steamIDFriend);
		int32_t ISteamFriends_GetFriendMessage(uint64_t steamIDFriend, int32_t iMessageID, intptr_t pvData, int32_t cubData, Facepunch_Steamworks::SteamNative::ChatEntryType& peChatEntryType);
		Facepunch_Steamworks::SteamNative::Result ISteamInventory_GetResultStatus(int32_t resultHandle);
		bool ISteamInventory_GetResultItems(int32_t resultHandle, intptr_t pOutItemsArray, uint32_t& punOutItemsArraySize);
		bool ISteamInventory_GetResultItemProperty(int32_t resultHandle, uint32_t unItemIndex, mscorlib::System::String* pchPropertyName, mscorlib::System::Text::StringBuilder* pchValueBuffer, uint32_t& punValueBufferSizeOut);
		uint32_t ISteamInventory_GetResultTimestamp(int32_t resultHandle);
		void ISteamInventory_DestroyResult(int32_t resultHandle);
		bool ISteamInventory_GetAllItems(int32_t& pResultHandle);
		bool ISteamInventory_SerializeResult(int32_t resultHandle, intptr_t pOutBuffer, uint32_t& punOutBufferSize);
		bool ISteamInventory_LoadItemDefinitions();
		bool ISteamInventory_GetItemDefinitionIDs(intptr_t pItemDefIDs, uint32_t& punItemDefIDsArraySize);
		bool ISteamInventory_GetItemDefinitionProperty(int32_t iDefinition, mscorlib::System::String* pchPropertyName, mscorlib::System::Text::StringBuilder* pchValueBuffer, uint32_t& punValueBufferSizeOut);
		Facepunch_Steamworks::SteamNative::SteamAPICall_t ISteamInventory_RequestPrices();
		bool ISteamInventory_GetItemPrice(int32_t iDefinition, uint64_t& pPrice);
		int32_t ISteamMatchmaking_GetFavoriteGameCount();
		bool ISteamMatchmaking_GetFavoriteGame(int32_t iGame, uint32_t& pnAppID, uint32_t& pnIP, uint16_t& pnConnPort, uint16_t& pnQueryPort, uint32_t& punFlags, uint32_t& pRTime32LastPlayedOnServer);
		bool ISteamNetworking_IsP2PPacketAvailable(uint32_t& pcubMsgSize, int32_t nChannel);
		bool ISteamNetworking_ReadP2PPacket(intptr_t pubDest, uint32_t cubDest, uint32_t& pcubMsgSize, uint64_t& psteamIDRemote, int32_t nChannel);
		bool ISteamNetworking_AcceptP2PSessionWithUser(uint64_t steamIDRemote);
		bool ISteamNetworking_CloseP2PSessionWithUser(uint64_t steamIDRemote);
		Facepunch_Steamworks::SteamNative::CSteamID ISteamUser_GetSteamID();
		Facepunch_Steamworks::SteamNative::VoiceResult ISteamUser_GetAvailableVoice(uint32_t& pcbCompressed, uint32_t& pcbUncompressed_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated);
		Facepunch_Steamworks::SteamNative::VoiceResult ISteamUser_GetVoice(bool bWantCompressed, intptr_t pDestBuffer, uint32_t cbDestBufferSize, uint32_t& nBytesWritten, bool bWantUncompressed_Deprecated, intptr_t pUncompressedDestBuffer_Deprecated, uint32_t cbUncompressedDestBufferSize_Deprecated, uint32_t& nUncompressBytesWritten_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated);
		uint32_t ISteamUser_GetVoiceOptimalSampleRate();
		Facepunch_Steamworks::SteamNative::HAuthTicket ISteamUser_GetAuthSessionTicket(intptr_t pTicket, int32_t cbMaxTicket, uint32_t& pcbTicket);
		void ISteamUser_CancelAuthTicket(uint32_t hAuthTicket);
		bool ISteamUserStats_RequestCurrentStats();
		bool ISteamUserStats_GetAchievementAndUnlockTime(mscorlib::System::String* pchName, bool& pbAchieved, uint32_t& punUnlockTime);
		int32_t ISteamUserStats_GetAchievementIcon(mscorlib::System::String* pchName);
		intptr_t ISteamUserStats_GetAchievementDisplayAttribute(mscorlib::System::String* pchName, mscorlib::System::String* pchKey);
		uint32_t ISteamUserStats_GetNumAchievements();
		intptr_t ISteamUserStats_GetAchievementName(uint32_t iAchievement);
		bool ISteamUtils_GetImageSize(int32_t iImage, uint32_t& pnWidth, uint32_t& pnHeight);
		bool ISteamUtils_GetImageRGBA(int32_t iImage, intptr_t pubDest, int32_t nDestBufferSize);
		bool ISteamUtils_IsAPICallCompleted(uint64_t hSteamAPICall, bool& pbFailed);
		bool ISteamUtils_GetAPICallResult(uint64_t hSteamAPICall, intptr_t pCallback, int32_t cubCallback, int32_t iCallbackExpected, bool& pbFailed);
		bool SteamApi_SteamAPI_Init();
		void SteamApi_SteamAPI_RunCallbacks();
		void SteamApi_SteamAPI_RegisterCallback(intptr_t pCallback, int32_t callback);
		void SteamApi_SteamAPI_UnregisterCallback(intptr_t pCallback);
		void SteamApi_SteamAPI_Shutdown();
		void SteamApi_SteamGameServer_Shutdown();
		Facepunch_Steamworks::SteamNative::HSteamUser SteamApi_SteamAPI_GetHSteamUser();
		Facepunch_Steamworks::SteamNative::HSteamPipe SteamApi_SteamAPI_GetHSteamPipe();
		intptr_t SteamApi_SteamInternal_CreateInterface(mscorlib::System::String* version);
	};
}

