#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Attribute; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct EventInfo; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System
{
	struct Attribute : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<mscorlib::System::Attribute*>* InternalGetCustomAttributes(mscorlib::System::Reflection::PropertyInfo* element, mscorlib::System::Type* type, bool inherit);
		static IL2CPP::Array<mscorlib::System::Attribute*>* InternalGetCustomAttributes(mscorlib::System::Reflection::EventInfo* element, mscorlib::System::Type* type, bool inherit);
		static bool InternalIsDefined(mscorlib::System::Reflection::PropertyInfo* element, mscorlib::System::Type* attributeType, bool inherit);
		static bool InternalIsDefined(mscorlib::System::Reflection::EventInfo* element, mscorlib::System::Type* attributeType, bool inherit);
		static IL2CPP::Array<mscorlib::System::Attribute*>* GetCustomAttributes(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* type, bool inherit);
		static bool IsDefined(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType);
		static bool IsDefined(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType, bool inherit);
		static mscorlib::System::Attribute* GetCustomAttribute(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType);
		static mscorlib::System::Attribute* GetCustomAttribute(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType, bool inherit);
		static IL2CPP::Array<mscorlib::System::Attribute*>* GetCustomAttributes(mscorlib::System::Reflection::Assembly* element, mscorlib::System::Type* attributeType, bool inherit);
		static mscorlib::System::Attribute* GetCustomAttribute(mscorlib::System::Reflection::Assembly* element, mscorlib::System::Type* attributeType);
		static mscorlib::System::Attribute* GetCustomAttribute(mscorlib::System::Reflection::Assembly* element, mscorlib::System::Type* attributeType, bool inherit);
		void _ctor();
		bool Equals(mscorlib::System::Object* obj);
		static bool AreFieldValuesEqual(mscorlib::System::Object* thisValue, mscorlib::System::Object* thatValue);
		int32_t GetHashCode();
		mscorlib::System::Object* get_TypeId();
		bool Match(mscorlib::System::Object* obj);
		bool IsDefaultAttribute();
	};
}

