#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlSerializer.h"
namespace System_Xml::System::Xml::Serialization { struct XmlSerializer; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializerImplementation; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationWriter; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializer_SerializerData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::MethodInfo* ReaderMethod;
		mscorlib::System::Type* WriterType;
		mscorlib::System::Reflection::MethodInfo* WriterMethod;
		System_Xml::System::Xml::Serialization::XmlSerializerImplementation* Implementation;
		System_Xml::System::Xml::Serialization::XmlSerializationWriter* CreateWriter();
	};
}

