#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ParameterizedStrings.h"
namespace mscorlib::System { struct ParameterizedStrings; };
#include "System_ParameterizedStrings_FormatParam.h"
namespace mscorlib::System { struct ParameterizedStrings_FormatParam; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct ParameterizedStrings_LowLevelStack : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>* _arr;
		int32_t _count;
		void _ctor();
		mscorlib::System::ParameterizedStrings_FormatParam Pop();
		void Push(mscorlib::System::ParameterizedStrings_FormatParam item);
		void Clear();
	};
}

