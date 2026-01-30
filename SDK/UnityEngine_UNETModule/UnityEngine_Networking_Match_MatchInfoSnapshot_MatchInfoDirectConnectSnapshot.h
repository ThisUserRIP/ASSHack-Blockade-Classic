#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_Match_MatchInfoSnapshot.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfoSnapshot; };
#include "UnityEngine_Networking_Types_NodeID.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_Networking_Types_HostPriority.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchDirectConnectInfo; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct MatchInfoSnapshot_MatchInfoDirectConnectSnapshot : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID _nodeId_k__BackingField;
		mscorlib::System::String* _publicAddress_k__BackingField;
		mscorlib::System::String* _privateAddress_k__BackingField;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::HostPriority _hostPriority_k__BackingField;
		void set_nodeId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID value);
		void set_publicAddress(mscorlib::System::String* value);
		void set_privateAddress(mscorlib::System::String* value);
		void set_hostPriority(UnityEngine_UNETModule::UnityEngine::Networking::Types::HostPriority value);
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchDirectConnectInfo* matchDirectConnectInfo);
	};
}

