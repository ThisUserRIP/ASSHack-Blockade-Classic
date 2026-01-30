#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlSerializationReader.h"
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationFixupCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationReader_Fixup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* source;
		IL2CPP::Array<mscorlib::System::String*>* ids;
		System_Xml::System::Xml::Serialization::XmlSerializationFixupCallback* callback;
		void _ctor(mscorlib::System::Object* o, System_Xml::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int32_t count);
		System_Xml::System::Xml::Serialization::XmlSerializationFixupCallback* get_Callback();
		IL2CPP::Array<mscorlib::System::String*>* get_Ids();
		mscorlib::System::Object* get_Source();
	};
}

