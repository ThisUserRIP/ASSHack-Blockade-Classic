#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Reflection_CustomAttributeData.h"
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Reflection
{
	struct CustomAttributeData_LazyCAttrData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::Assembly* assembly;
		intptr_t data;
		uint32_t data_length;
		void _ctor();
	};
}

