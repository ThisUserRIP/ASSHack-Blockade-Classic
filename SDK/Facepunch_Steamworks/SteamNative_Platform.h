#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_OperatingSystem.h"
#include "Facepunch_Steamworks_Architecture.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct Platform : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facepunch_Steamworks::Facepunch::Steamworks::OperatingSystem _os;
			Facepunch_Steamworks::Facepunch::Steamworks::Architecture _arch;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Facepunch_Steamworks::Facepunch::Steamworks::OperatingSystem RunningPlatform();
		static Facepunch_Steamworks::Facepunch::Steamworks::OperatingSystem get_Os();
		static void set_Os(Facepunch_Steamworks::Facepunch::Steamworks::OperatingSystem value);
		static Facepunch_Steamworks::Facepunch::Steamworks::Architecture get_Arch();
		static void set_Arch(Facepunch_Steamworks::Facepunch::Steamworks::Architecture value);
		static bool get_IsWindows();
		static bool get_IsWindows64();
		static bool get_IsWindows32();
		static bool get_IsLinux64();
		static bool get_IsLinux32();
		static bool get_IsOsx();
		static bool get_PackSmall();
	};
}

