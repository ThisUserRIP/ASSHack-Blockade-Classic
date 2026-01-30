#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RuntimeFieldInfo.h"
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_TypedReference.h"
namespace mscorlib::System { struct TypedReference; };

namespace mscorlib::System::Reflection
{
	struct RtFieldInfo : mscorlib::System::Reflection::RuntimeFieldInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* UnsafeGetValue(mscorlib::System::Object* obj);
		void CheckConsistency(mscorlib::System::Object* target);
		void UnsafeSetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Globalization::CultureInfo* culture);
		void SetValueDirect(mscorlib::System::TypedReference obj, mscorlib::System::Object* value);
		void _ctor();
	};
}

