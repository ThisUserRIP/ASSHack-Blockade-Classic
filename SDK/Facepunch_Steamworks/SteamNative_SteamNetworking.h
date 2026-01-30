#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::SteamNative { struct Platform_Interface; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_CSteamID.h"
namespace Facepunch_Steamworks::SteamNative { struct CSteamID; };
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamNetworking : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Platform_Interface* platform;
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer);
		void Dispose();
		bool AcceptP2PSessionWithUser(Facepunch_Steamworks::SteamNative::CSteamID steamIDRemote);
		bool CloseP2PSessionWithUser(Facepunch_Steamworks::SteamNative::CSteamID steamIDRemote);
		bool IsP2PPacketAvailable(uint32_t& pcubMsgSize, int32_t nChannel);
		bool ReadP2PPacket(intptr_t pubDest, uint32_t cubDest, uint32_t& pcubMsgSize, Facepunch_Steamworks::SteamNative::CSteamID& psteamIDRemote, int32_t nChannel);
	};
}

