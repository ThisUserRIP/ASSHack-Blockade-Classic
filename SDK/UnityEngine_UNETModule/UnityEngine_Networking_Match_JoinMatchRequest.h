#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_Match_Request.h"
#include "UnityEngine_Networking_Types_NetworkID.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct JoinMatchRequest : UnityEngine_UNETModule::UnityEngine::Networking::Match::Request
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID _networkId_k__BackingField;
		mscorlib::System::String* _publicAddress_k__BackingField;
		mscorlib::System::String* _privateAddress_k__BackingField;
		int32_t _eloScore_k__BackingField;
		mscorlib::System::String* _password_k__BackingField;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID get_networkId();
		void set_networkId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID value);
		mscorlib::System::String* get_publicAddress();
		void set_publicAddress(mscorlib::System::String* value);
		mscorlib::System::String* get_privateAddress();
		void set_privateAddress(mscorlib::System::String* value);
		int32_t get_eloScore();
		void set_eloScore(int32_t value);
		mscorlib::System::String* get_password();
		void set_password(mscorlib::System::String* value);
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

