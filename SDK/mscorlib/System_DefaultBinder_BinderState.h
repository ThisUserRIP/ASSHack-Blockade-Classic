#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_DefaultBinder.h"
namespace mscorlib::System { struct DefaultBinder; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct DefaultBinder_BinderState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* m_argsMap;
		int32_t m_originalSize;
		bool m_isParamArray;
		void _ctor(IL2CPP::Array<int32_t>* argsMap, int32_t originalSize, bool isParamArray);
	};
}

