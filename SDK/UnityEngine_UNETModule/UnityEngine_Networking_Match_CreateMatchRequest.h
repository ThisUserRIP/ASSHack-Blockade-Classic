#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_Match_Request.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct CreateMatchRequest : UnityEngine_UNETModule::UnityEngine::Networking::Match::Request
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name_k__BackingField;
		uint32_t _size_k__BackingField;
		mscorlib::System::String* _publicAddress_k__BackingField;
		mscorlib::System::String* _privateAddress_k__BackingField;
		int32_t _eloScore_k__BackingField;
		bool _advertise_k__BackingField;
		mscorlib::System::String* _password_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* _matchAttributes_k__BackingField;
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		uint32_t get_size();
		void set_size(uint32_t value);
		mscorlib::System::String* get_publicAddress();
		void set_publicAddress(mscorlib::System::String* value);
		mscorlib::System::String* get_privateAddress();
		void set_privateAddress(mscorlib::System::String* value);
		int32_t get_eloScore();
		void set_eloScore(int32_t value);
		bool get_advertise();
		void set_advertise(bool value);
		mscorlib::System::String* get_password();
		void set_password(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* get_matchAttributes();
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

