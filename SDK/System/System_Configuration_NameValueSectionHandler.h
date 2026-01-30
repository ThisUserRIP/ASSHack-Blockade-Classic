#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlNode; };

namespace System::System::Configuration
{
	struct NameValueSectionHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::String* get_KeyAttributeName();
		mscorlib::System::String* get_ValueAttributeName();
		mscorlib::System::Object* Create(mscorlib::System::Object* parent, mscorlib::System::Object* context, System_Xml::System::Xml::XmlNode* section);
	};
}

