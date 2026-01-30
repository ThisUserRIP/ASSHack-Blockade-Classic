#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlSerializationReader.h"
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReadCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationReader_WriteCallbackInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* Type;
		mscorlib::System::String* TypeName;
		mscorlib::System::String* TypeNs;
		System_Xml::System::Xml::Serialization::XmlSerializationReadCallback* Callback;
		void _ctor();
	};
}

