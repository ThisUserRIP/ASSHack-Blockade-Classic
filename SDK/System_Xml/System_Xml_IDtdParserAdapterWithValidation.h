#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct IValidationEventHandling; };

namespace System_Xml::System::Xml
{
	struct IDtdParserAdapterWithValidation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_DtdValidation();
		System_Xml::System::Xml::IValidationEventHandling* get_ValidationEventHandling();
	};
}

