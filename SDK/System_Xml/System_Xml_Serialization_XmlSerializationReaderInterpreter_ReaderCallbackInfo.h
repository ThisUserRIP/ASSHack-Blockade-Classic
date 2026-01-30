#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlSerializationReaderInterpreter.h"
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReaderInterpreter; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapping; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationReaderInterpreter_ReaderCallbackInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri;
		System_Xml::System::Xml::Serialization::XmlTypeMapping* _typeMap;
		void _ctor(System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri, System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap);
		mscorlib::System::Object* ReadObject();
	};
}

