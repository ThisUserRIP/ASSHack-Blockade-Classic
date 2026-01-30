#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Xml_Schema_XmlSchemaWhiteSpace.h"
namespace mscorlib::System { struct Object; };
#include "System_Xml_Schema_RestrictionFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct RestrictionFacets : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Length;
		int32_t MinLength;
		int32_t MaxLength;
		mscorlib::System::Collections::ArrayList* Patterns;
		mscorlib::System::Collections::ArrayList* Enumeration;
		System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace WhiteSpace;
		mscorlib::System::Object* MaxInclusive;
		mscorlib::System::Object* MaxExclusive;
		mscorlib::System::Object* MinInclusive;
		mscorlib::System::Object* MinExclusive;
		int32_t TotalDigits;
		int32_t FractionDigits;
		System_Xml::System::Xml::Schema::RestrictionFlags Flags;
		System_Xml::System::Xml::Schema::RestrictionFlags FixedFlags;
		void _ctor();
	};
}

