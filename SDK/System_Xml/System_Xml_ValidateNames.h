#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };

namespace System_Xml::System::Xml
{
	struct ValidateNames : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System_Xml::System::Xml::XmlCharType xmlCharType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t ParseNmtoken(mscorlib::System::String* s, int32_t offset);
		static int32_t ParseNmtokenNoNamespaces(mscorlib::System::String* s, int32_t offset);
		static int32_t ParseNameNoNamespaces(mscorlib::System::String* s, int32_t offset);
		static bool IsNameNoNamespaces(mscorlib::System::String* s);
		static int32_t ParseNCName(mscorlib::System::String* s, int32_t offset);
		static int32_t ParseNCName(mscorlib::System::String* s);
		static int32_t ParseQName(mscorlib::System::String* s, int32_t offset, int32_t& colonOffset);
		static void ParseQNameThrow(mscorlib::System::String* s, mscorlib::System::String& prefix, mscorlib::System::String& localName);
		static void ThrowInvalidName(mscorlib::System::String* s, int32_t offsetStartChar, int32_t offsetBadChar);
		static mscorlib::System::Exception* GetInvalidNameException(mscorlib::System::String* s, int32_t offsetStartChar, int32_t offsetBadChar);
		static void SplitQName(mscorlib::System::String* name, mscorlib::System::String& prefix, mscorlib::System::String& lname);
		static void _cctor();
	};
}

