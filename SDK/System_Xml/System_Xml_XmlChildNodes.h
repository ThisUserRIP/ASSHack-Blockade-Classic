#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNodeList.h"
namespace System_Xml::System::Xml { struct XmlNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System_Xml::System::Xml
{
	struct XmlChildNodes : System_Xml::System::Xml::XmlNodeList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNode* container;
		void _ctor(System_Xml::System::Xml::XmlNode* container);
		System_Xml::System::Xml::XmlNode* Item(int32_t i);
		int32_t get_Count();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
	};
}

