#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "Rewired_Utils_Attributes_SerializationTypeAttribute_SerializationType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Attributes
{
	struct SerializationTypeAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType _serializationType;
		Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType get_serializationType();
		void _ctor(Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType serializationType);
	};
}

