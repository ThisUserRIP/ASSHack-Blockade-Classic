#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_Match_Request.h"
#include "UnityEngine_Networking_Types_NetworkID.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct DestroyMatchRequest : UnityEngine_UNETModule::UnityEngine::Networking::Match::Request
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID _networkId_k__BackingField;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID get_networkId();
		void set_networkId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID value);
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

