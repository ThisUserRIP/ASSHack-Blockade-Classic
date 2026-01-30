#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Networking_Types_NetworkID.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking::Types { struct NetworkAccessToken; };
#include "UnityEngine_Networking_Types_NodeID.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct CreateMatchResponse; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct JoinMatchResponse; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct MatchInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _address_k__BackingField;
		int32_t _port_k__BackingField;
		int32_t _domain_k__BackingField;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID _networkId_k__BackingField;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken* _accessToken_k__BackingField;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID _nodeId_k__BackingField;
		bool _usingRelay_k__BackingField;
		mscorlib::System::String* get_address();
		void set_address(mscorlib::System::String* value);
		int32_t get_port();
		void set_port(int32_t value);
		int32_t get_domain();
		void set_domain(int32_t value);
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID get_networkId();
		void set_networkId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID value);
		void set_accessToken(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken* value);
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID get_nodeId();
		void set_nodeId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID value);
		bool get_usingRelay();
		void set_usingRelay(bool value);
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::Match::CreateMatchResponse* matchResponse);
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::Match::JoinMatchResponse* matchResponse);
		mscorlib::System::String* ToString();
	};
}

