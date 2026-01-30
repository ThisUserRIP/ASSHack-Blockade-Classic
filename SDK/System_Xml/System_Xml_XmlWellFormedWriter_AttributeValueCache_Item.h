#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlWellFormedWriter_AttributeValueCache.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter_AttributeValueCache; };
#include "System_Xml_XmlWellFormedWriter_AttributeValueCache_ItemType.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlWellFormedWriter_AttributeValueCache_Item : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType type;
		mscorlib::System::Object* data;
		void _ctor();
		void Set(System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType type, mscorlib::System::Object* data);
	};
}

