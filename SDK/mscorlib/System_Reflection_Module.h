#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct TypeFilter; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Reflection_BindingFlags.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System::Reflection
{
	struct Module : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _impl;
		mscorlib::System::Reflection::Assembly* assembly;
		mscorlib::System::String* fqname;
		mscorlib::System::String* name;
		mscorlib::System::String* scopename;
		bool is_resource;
		int32_t token;
		struct StaticFields
		{
			mscorlib::System::Reflection::TypeFilter* FilterTypeName;
			mscorlib::System::Reflection::TypeFilter* FilterTypeNameIgnoreCase;
			mscorlib::System::Reflection::BindingFlags defaultBindingFlags;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* ToString();
		mscorlib::System::Guid GetModuleVersionId();
		static bool filter_by_type_name(mscorlib::System::Type* m, mscorlib::System::Object* filterCriteria);
		static bool filter_by_type_name_ignore_case(mscorlib::System::Type* m, mscorlib::System::Object* filterCriteria);
		mscorlib::System::String* GetGuidInternal();
		bool Equals(mscorlib::System::Object* o);
		int32_t GetHashCode();
		static bool op_Equality(mscorlib::System::Reflection::Module* left, mscorlib::System::Reflection::Module* right);
		mscorlib::System::Reflection::Assembly* get_Assembly();
		mscorlib::System::String* get_ScopeName();
		mscorlib::System::Guid get_ModuleVersionId();
		mscorlib::System::String* get_FullyQualifiedName();
		static mscorlib::System::Exception* CreateNIE();
		bool IsResource();
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		static void _cctor();
	};
	bool operator==(mscorlib::System::Reflection::Module& left, mscorlib::System::Reflection::Module& right);
}

