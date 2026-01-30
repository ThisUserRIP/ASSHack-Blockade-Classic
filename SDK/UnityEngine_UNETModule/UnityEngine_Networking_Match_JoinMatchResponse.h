#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_Match_BasicResponse.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "UnityEngine_Networking_Types_NodeID.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct JoinMatchResponse : UnityEngine_UNETModule::UnityEngine::Networking::Match::BasicResponse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* address;
		int32_t port;
		int32_t domain;
		uint64_t networkId;
		mscorlib::System::String* accessTokenString;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID nodeId;
		bool usingRelay;
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

