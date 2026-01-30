#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct IdRefNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Id;
		int32_t LineNo;
		int32_t LinePos;
		System_Xml::System::Xml::Schema::IdRefNode* Next;
		void _ctor(System_Xml::System::Xml::Schema::IdRefNode* next, mscorlib::System::String* id, int32_t lineNo, int32_t linePos);
	};
}

