#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_LocalVariableInfo.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection::Emit { struct ILGenerator; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Reflection::Emit
{
	struct LocalBuilder : mscorlib::System::Reflection::LocalVariableInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::Reflection::Emit::ILGenerator* ilgen;
		int32_t startOffset;
		int32_t endOffset;
	};
}

