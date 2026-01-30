#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlSerializationReader.h"
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationReader_CollectionItemFixup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Array* list;
		int32_t index;
		mscorlib::System::String* id;
		void _ctor(mscorlib::System::Array* list, int32_t index, mscorlib::System::String* id);
		mscorlib::System::Array* get_Collection();
		int32_t get_Index();
		mscorlib::System::String* get_Id();
	};
}

