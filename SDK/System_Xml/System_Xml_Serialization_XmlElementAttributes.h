#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Collections_CollectionBase.h"
namespace System_Xml::System::Xml::Serialization { struct XmlElementAttribute; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlElementAttributes : mscorlib::System::Collections::CollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlElementAttribute* get_Item(int32_t index);
		int32_t Add(System_Xml::System::Xml::Serialization::XmlElementAttribute* attribute);
		int32_t get_Order();
		void _ctor();
	};
}

