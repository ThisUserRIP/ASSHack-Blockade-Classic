#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Globalization { struct CultureInfo; };

namespace System_Xml
{
	struct SR : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* GetString(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::String* GetString(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

