#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct IWebRequestCreate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct WebRequestPrefixElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Prefix;
		System::Net::IWebRequestCreate* creator;
		mscorlib::System::Type* creatorType;
		System::Net::IWebRequestCreate* get_Creator();
		void set_Creator(System::Net::IWebRequestCreate* value);
		void _ctor(mscorlib::System::String* P, System::Net::IWebRequestCreate* C);
	};
}

