#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facepunch_Steamworks_BaseSteamworks.h"

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Server : Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facepunch_Steamworks::Facepunch::Steamworks::Server* _Instance_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Facepunch_Steamworks::Facepunch::Steamworks::Server* get_Instance();
	};
}

