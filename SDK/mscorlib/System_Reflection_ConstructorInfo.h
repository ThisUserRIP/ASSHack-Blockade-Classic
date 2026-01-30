#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_MethodBase.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Reflection_MemberTypes.h"
namespace mscorlib::System { struct Object; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Reflection
{
	struct ConstructorInfo : mscorlib::System::Reflection::MethodBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* ConstructorName;
			mscorlib::System::String* TypeConstructorName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::Reflection::MemberTypes get_MemberType();
		mscorlib::System::Object* Invoke(IL2CPP::Array<mscorlib::System::Object*>* parameters);
		mscorlib::System::Object* Invoke(mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static bool op_Equality(mscorlib::System::Reflection::ConstructorInfo* left, mscorlib::System::Reflection::ConstructorInfo* right);
		static bool op_Inequality(mscorlib::System::Reflection::ConstructorInfo* left, mscorlib::System::Reflection::ConstructorInfo* right);
		static void _cctor();
	};
	bool operator==(mscorlib::System::Reflection::ConstructorInfo& left, mscorlib::System::Reflection::ConstructorInfo& right);
	bool operator!=(mscorlib::System::Reflection::ConstructorInfo& left, mscorlib::System::Reflection::ConstructorInfo& right);
}

