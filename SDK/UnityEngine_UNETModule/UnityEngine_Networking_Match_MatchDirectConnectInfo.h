#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_Types_NodeID.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_Networking_Types_HostPriority.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct MatchDirectConnectInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID nodeId;
		mscorlib::System::String* publicAddress;
		mscorlib::System::String* privateAddress;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::HostPriority hostPriority;
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

