#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Collections::Specialized { struct NameValueCollection; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace System::System::Configuration
{
	struct ConfigurationSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static System::Collections::Specialized::NameValueCollection* get_AppSettings();
		static mscorlib::System::Object* GetConfig(mscorlib::System::String* sectionName);
	};
}

