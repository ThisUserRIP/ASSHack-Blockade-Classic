#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlSerializationWriterInterpreter.h"
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationWriterInterpreter; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapping; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationWriterInterpreter_CallbackInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter* _swi;
		System_Xml::System::Xml::Serialization::XmlTypeMapping* _typeMap;
		void _ctor(System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter* swi, System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap);
		void WriteObject(mscorlib::System::Object* ob);
		void WriteEnum(mscorlib::System::Object* ob);
	};
}

