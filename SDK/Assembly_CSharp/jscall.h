#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct jscall : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void cb_get_auth_id(mscorlib::System::String* _id);
		static void cb_get_network(int32_t _network);
		static void cb_get_auth_key(mscorlib::System::String* _key);
		static void cb_set_key(mscorlib::System::String* _key);
		static void cb_get_auth_country(mscorlib::System::String* _country);
		void _ctor();
	};
}

