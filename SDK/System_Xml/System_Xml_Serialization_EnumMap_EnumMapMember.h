#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_EnumMap.h"
namespace System_Xml::System::Xml::Serialization { struct EnumMap; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct EnumMap_EnumMapMember : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _xmlName;
		mscorlib::System::String* _enumName;
		int64_t _value;
		void _ctor(mscorlib::System::String* xmlName, mscorlib::System::String* enumName, int64_t value);
		mscorlib::System::String* get_XmlName();
		mscorlib::System::String* get_EnumName();
		int64_t get_Value();
	};
}

