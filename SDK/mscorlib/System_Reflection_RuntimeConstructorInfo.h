#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_ConstructorInfo.h"
namespace mscorlib::System::Reflection { struct Module; };
namespace mscorlib::System::Reflection { struct RuntimeModule; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System { struct RuntimeType; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Reflection
{
	struct RuntimeConstructorInfo : mscorlib::System::Reflection::ConstructorInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::Module* get_Module();
		mscorlib::System::Reflection::RuntimeModule* GetRuntimeModule();
		mscorlib::System::Reflection::BindingFlags get_BindingFlags();
		mscorlib::System::RuntimeType* get_ReflectedTypeInternal();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* SerializationToString();
		void SerializationInvoke(mscorlib::System::Object* target, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor();
	};
}

