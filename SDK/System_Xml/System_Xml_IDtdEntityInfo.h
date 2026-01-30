#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml
{
	struct IDtdEntityInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_Name();
		bool get_IsExternal();
		bool get_IsDeclaredInExternal();
		bool get_IsUnparsedEntity();
		bool get_IsParameterEntity();
		mscorlib::System::String* get_BaseUriString();
		mscorlib::System::String* get_DeclaredUriString();
		mscorlib::System::String* get_SystemId();
		mscorlib::System::String* get_PublicId();
		mscorlib::System::String* get_Text();
		int32_t get_LineNumber();
		int32_t get_LinePosition();
	};
}

