#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlLinkedNode.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml
{
	struct XmlCharacterData : System_Xml::System::Xml::XmlLinkedNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* data;
		void _ctor(mscorlib::System::String* data, System_Xml::System::Xml::XmlDocument* doc);
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		mscorlib::System::String* get_InnerText();
		void set_InnerText(mscorlib::System::String* value);
		mscorlib::System::String* get_Data();
		void set_Data(mscorlib::System::String* value);
		bool CheckOnData(mscorlib::System::String* data);
	};
}

