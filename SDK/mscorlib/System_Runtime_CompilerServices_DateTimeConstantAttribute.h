#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_CompilerServices_CustomConstantAttribute.h"
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct DateTimeConstantAttribute : mscorlib::System::Runtime::CompilerServices::CustomConstantAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime date;
		mscorlib::System::Object* get_Value();
	};
}

