#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Security_Cryptography_OidGroup.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Security::Cryptography
{
	struct Oid : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_value;
		mscorlib::System::String* m_friendlyName;
		System::Security::Cryptography::OidGroup m_group;
		void _ctor(mscorlib::System::String* oid);
		void _ctor(mscorlib::System::String* oid, System::Security::Cryptography::OidGroup group, bool lookupFriendlyName);
		void _ctor(mscorlib::System::String* value, mscorlib::System::String* friendlyName);
		void _ctor(System::Security::Cryptography::Oid* oid);
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		mscorlib::System::String* get_FriendlyName();
	};
}

