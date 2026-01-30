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
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamUserStats : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Platform_Interface* platform;
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer);
		void Dispose();
		bool GetAchievementAndUnlockTime(mscorlib::System::String* pchName, bool& pbAchieved, uint32_t& punUnlockTime);
		mscorlib::System::String* GetAchievementDisplayAttribute(mscorlib::System::String* pchName, mscorlib::System::String* pchKey);
		int32_t GetAchievementIcon(mscorlib::System::String* pchName);
		mscorlib::System::String* GetAchievementName(uint32_t iAchievement);
		uint32_t GetNumAchievements();
		bool RequestCurrentStats();
	};
}

