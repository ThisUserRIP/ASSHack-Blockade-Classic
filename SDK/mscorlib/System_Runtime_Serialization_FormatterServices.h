#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Serialization { struct MemberHolder; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System::Collections::Concurrent { template <typename TKey, typename TValue> struct ConcurrentDictionary_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct Binder; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Runtime::Serialization
{
	struct FormatterServices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::Runtime::Serialization::MemberHolder, IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>>* m_MemberInfoTable;
			bool unsafeTypeForwardersIsEnabled;
			bool unsafeTypeForwardersIsEnabledInitialized;
			IL2CPP::Array<mscorlib::System::Type*>* advancedTypes;
			mscorlib::System::Reflection::Binder* s_binder;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* GetSerializableMembers(mscorlib::System::RuntimeType* type);
		static bool CheckSerializable(mscorlib::System::RuntimeType* type);
		static IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* InternalGetSerializableMembers(mscorlib::System::RuntimeType* type);
		static bool GetParentTypes(mscorlib::System::RuntimeType* parentType, IL2CPP::Array<mscorlib::System::RuntimeType*>& parentTypes, int32_t& parentTypeCount);
		static IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* GetSerializableMembers(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static mscorlib::System::Object* GetUninitializedObject(mscorlib::System::Type* type);
		static mscorlib::System::Object* nativeGetUninitializedObject(mscorlib::System::RuntimeType* type);
		static bool GetEnableUnsafeTypeForwarders();
		static bool UnsafeTypeForwardersIsEnabled();
		static void SerializationSetValue(mscorlib::System::Reflection::MemberInfo* fi, mscorlib::System::Object* target, mscorlib::System::Object* value);
		static mscorlib::System::Object* PopulateObjectMembers(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* members, IL2CPP::Array<mscorlib::System::Object*>* data);
		static IL2CPP::Array<mscorlib::System::Object*>* GetObjectData(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* members);
		static mscorlib::System::Type* GetTypeFromAssembly(mscorlib::System::Reflection::Assembly* assem, mscorlib::System::String* name);
		static mscorlib::System::Reflection::Assembly* LoadAssemblyFromString(mscorlib::System::String* assemblyName);
		static mscorlib::System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(mscorlib::System::String* assemblyName);
		static mscorlib::System::String* GetClrAssemblyName(mscorlib::System::Type* type, bool& hasTypeForwardedFrom);
		static mscorlib::System::String* GetClrTypeFullName(mscorlib::System::Type* type);
		static mscorlib::System::String* GetClrTypeFullNameForArray(mscorlib::System::Type* type);
		static mscorlib::System::String* GetClrTypeFullNameForNonArrayTypes(mscorlib::System::Type* type);
	};
}

