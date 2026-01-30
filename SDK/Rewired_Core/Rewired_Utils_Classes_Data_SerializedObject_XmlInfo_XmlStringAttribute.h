#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_Data_SerializedObject_XmlInfo_XmlAttribute.h"
#include "Rewired_Utils_Classes_Data_SerializedObject_XmlInfo.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_XmlInfo; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct SerializedObject_XmlInfo_XmlStringAttribute : Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo_XmlAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* prefix;
		mscorlib::System::String* localName;
		mscorlib::System::String* ns;
		mscorlib::System::String* value;
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

