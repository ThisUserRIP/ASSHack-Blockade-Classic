#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlSerializationWriter.h"
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationWriter; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationWriteCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationWriter_WriteCallbackInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* Type;
		mscorlib::System::String* TypeName;
		mscorlib::System::String* TypeNs;
		System_Xml::System::Xml::Serialization::XmlSerializationWriteCallback* Callback;
		void _ctor();
	};
}

