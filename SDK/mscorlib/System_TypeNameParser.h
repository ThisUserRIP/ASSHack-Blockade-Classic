#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct AssemblyName; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename TResult> struct Func_4; };
#include "System_Threading_StackCrawlMark.h"

namespace mscorlib::System
{
	struct TypeNameParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Type* GetType(mscorlib::System::String* typeName, mscorlib::System::Func_2<mscorlib::System::Reflection::AssemblyName, mscorlib::System::Reflection::Assembly>* assemblyResolver, mscorlib::System::Func_4<mscorlib::System::Reflection::Assembly, mscorlib::System::String, mscorlib::System::Boolean, mscorlib::System::Type>* typeResolver, bool throwOnError, bool ignoreCase, mscorlib::System::Threading::StackCrawlMark& stackMark);
	};
}

