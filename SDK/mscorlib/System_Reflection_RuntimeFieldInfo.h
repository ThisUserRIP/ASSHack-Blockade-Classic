#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_FieldInfo.h"
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Module; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System::Reflection { struct RuntimeModule; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System::Reflection
{
	struct RuntimeFieldInfo : mscorlib::System::Reflection::FieldInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::BindingFlags get_BindingFlags();
		mscorlib::System::Reflection::Module* get_Module();
		mscorlib::System::RuntimeType* GetDeclaringTypeInternal();
		mscorlib::System::RuntimeType* get_ReflectedTypeInternal();
		mscorlib::System::Reflection::RuntimeModule* GetRuntimeModule();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor();
	};
}

