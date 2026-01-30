#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::Mono { struct RuntimeStructs_GenericParamInfo; };
namespace mscorlib::Mono { struct RuntimeStructs_GenericParamInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Reflection_GenericParameterAttributes.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Mono
{
	struct RuntimeGenericParamInfoHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::RuntimeStructs_GenericParamInfo* value;
		void _ctor(intptr_t ptr);
		IL2CPP::Array<mscorlib::System::Type*>* get_Constraints();
		mscorlib::System::Reflection::GenericParameterAttributes get_Attributes();
		IL2CPP::Array<mscorlib::System::Type*>* GetConstraints();
		int32_t GetConstraintsCount();
	};
}

