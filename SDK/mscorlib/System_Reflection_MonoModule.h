#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RuntimeModule.h"
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { struct String; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Reflection { struct RuntimeAssembly; };

namespace mscorlib::System::Reflection
{
	struct MonoModule : mscorlib::System::Reflection::RuntimeModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::Assembly* get_Assembly();
		mscorlib::System::String* get_ScopeName();
		mscorlib::System::Guid get_ModuleVersionId();
		mscorlib::System::String* get_FullyQualifiedName();
		bool IsResource();
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Reflection::RuntimeAssembly* GetRuntimeAssembly();
		void _ctor();
	};
}

