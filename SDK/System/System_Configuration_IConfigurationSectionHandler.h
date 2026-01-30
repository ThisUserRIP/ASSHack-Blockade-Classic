#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlNode; };

namespace System::System::Configuration
{
	struct IConfigurationSectionHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* Create(mscorlib::System::Object* parent, mscorlib::System::Object* configContext, System_Xml::System::Xml::XmlNode* section);
	};
}

