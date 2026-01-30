#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct TypedReference
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::RuntimeTypeHandle type;
		intptr_t Value;
		intptr_t Type;
		static mscorlib::System::TypedReference MakeTypedReference(mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* flds);
		static mscorlib::System::TypedReference MakeTypedReferenceInternal(mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* fields);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* o);
		bool get_IsNull();
		static void SetTypedReference(mscorlib::System::TypedReference target, mscorlib::System::Object* value);
	};
}

