#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_DtdParser.h"
namespace System_Xml::System::Xml { struct DtdParser; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_DtdParser_Token.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct DtdParser_ParseElementOnlyContent_LocalFrame : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t startParenEntityId;
		System_Xml::System::Xml::DtdParser_Token parsingSchema;
		void _ctor(int32_t startParentEntityIdParam);
	};
}

