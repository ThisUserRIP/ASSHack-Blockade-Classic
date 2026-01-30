#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml
{
	struct XmlComplianceUtil : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* NonCDataNormalize(mscorlib::System::String* value);
		static mscorlib::System::String* CDataNormalize(mscorlib::System::String* value);
	};
}

