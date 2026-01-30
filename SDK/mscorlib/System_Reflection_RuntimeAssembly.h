#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_Assembly.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Policy { struct Evidence; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System::Reflection { struct AssemblyName; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Reflection
{
	struct RuntimeAssembly : mscorlib::System::Reflection::Assembly
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static mscorlib::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(mscorlib::System::String* partialName, mscorlib::System::Security::Policy::Evidence* securityEvidence, mscorlib::System::Threading::StackCrawlMark& stackMark);
		static mscorlib::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(mscorlib::System::Reflection::AssemblyName* an, mscorlib::System::Security::Policy::Evidence* securityEvidence, mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::Reflection::AssemblyName* GetName(bool copiedName);
		void _ctor();
	};
}

