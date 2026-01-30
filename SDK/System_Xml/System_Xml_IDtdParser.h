#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System_Xml::System::Xml { struct IDtdInfo; };
namespace System_Xml::System::Xml { struct IDtdParserAdapter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml
{
	struct IDtdParser
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::IDtdInfo* ParseInternalDtd(System_Xml::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset);
		System_Xml::System::Xml::IDtdInfo* ParseFreeFloatingDtd(mscorlib::System::String* baseUri, mscorlib::System::String* docTypeName, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset, System_Xml::System::Xml::IDtdParserAdapter* adapter);
	};
}

