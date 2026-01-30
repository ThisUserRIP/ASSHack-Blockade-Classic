#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_LoginResult.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };

namespace Facebook_Unity::Facebook::Unity
{
	struct LoginStatusResult : Facebook_Unity::Facebook::Unity::LoginResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _Failed_k__BackingField;
		struct StaticFields
		{
			mscorlib::System::String* FailedKey;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		bool get_Failed();
		void set_Failed(bool value);
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}

