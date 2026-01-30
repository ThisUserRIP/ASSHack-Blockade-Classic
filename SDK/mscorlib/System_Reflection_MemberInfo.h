#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Reflection_MemberTypes.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct Module; };

namespace mscorlib::System::Reflection
{
	struct MemberInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::Reflection::MemberTypes get_MemberType();
		mscorlib::System::String* get_Name();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::Type* get_ReflectedType();
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesData();
		int32_t get_MetadataToken();
		mscorlib::System::Reflection::Module* get_Module();
		static bool op_Equality(mscorlib::System::Reflection::MemberInfo* left, mscorlib::System::Reflection::MemberInfo* right);
		static bool op_Inequality(mscorlib::System::Reflection::MemberInfo* left, mscorlib::System::Reflection::MemberInfo* right);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
	bool operator==(mscorlib::System::Reflection::MemberInfo& left, mscorlib::System::Reflection::MemberInfo& right);
	bool operator!=(mscorlib::System::Reflection::MemberInfo& left, mscorlib::System::Reflection::MemberInfo& right);
}

