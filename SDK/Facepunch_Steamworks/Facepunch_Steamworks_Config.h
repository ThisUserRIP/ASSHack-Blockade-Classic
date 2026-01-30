#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "Facepunch_Steamworks_OperatingSystem.h"
#include "Facepunch_Steamworks_Architecture.h"

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Config : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool _UseThisCall_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void ForUnity(mscorlib::System::String* platform);
		static bool get_UseThisCall();
		static void set_UseThisCall(bool value);
		static void ForcePlatform(Facepunch_Steamworks::Facepunch::Steamworks::OperatingSystem os, Facepunch_Steamworks::Facepunch::Steamworks::Architecture arch);
		static void _cctor();
	};
}

