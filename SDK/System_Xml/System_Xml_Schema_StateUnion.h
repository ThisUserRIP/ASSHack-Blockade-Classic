#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml::Schema
{
	struct StateUnion
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t State;
		int32_t AllElementsRequired;
		int32_t CurPosIndex;
		int32_t NumberOfRunningPos;
	};
}

