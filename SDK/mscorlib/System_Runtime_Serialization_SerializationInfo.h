#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Runtime::Serialization { struct IFormatterConverter; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfoEnumerator; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };

namespace mscorlib::System::Runtime::Serialization
{
	struct SerializationInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* m_members;
		IL2CPP::Array<mscorlib::System::Object*>* m_data;
		IL2CPP::Array<mscorlib::System::Type*>* m_types;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* m_nameToIndex;
		int32_t m_currMember;
		mscorlib::System::Runtime::Serialization::IFormatterConverter* m_converter;
		mscorlib::System::String* m_fullTypeName;
		mscorlib::System::String* m_assemName;
		mscorlib::System::Type* objectType;
		bool isFullTypeNameSetExplicit;
		bool isAssemblyNameSetExplicit;
		bool requireSameTokenInPartialTrust;
		struct StaticFields
		{
			int32_t defaultSize;
			mscorlib::System::String* s_mscorlibAssemblySimpleName;
			mscorlib::System::String* s_mscorlibFileName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter);
		void _ctor(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool requireSameTokenInPartialTrust);
		mscorlib::System::String* get_FullTypeName();
		mscorlib::System::String* get_AssemblyName();
		void SetType(mscorlib::System::Type* type);
		static bool Compare(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		static void DemandForUnsafeAssemblyNameAssignments(mscorlib::System::String* originalAssemblyName, mscorlib::System::String* newAssemblyName);
		static bool IsAssemblyNameAssignmentSafe(mscorlib::System::String* originalAssemblyName, mscorlib::System::String* newAssemblyName);
		int32_t get_MemberCount();
		mscorlib::System::Type* get_ObjectType();
		bool get_IsFullTypeNameSetExplicit();
		bool get_IsAssemblyNameSetExplicit();
		mscorlib::System::Runtime::Serialization::SerializationInfoEnumerator* GetEnumerator();
		void ExpandArrays();
		void AddValue(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::System::Type* type);
		void AddValue(mscorlib::System::String* name, mscorlib::System::Object* value);
		void AddValue(mscorlib::System::String* name, bool value);
		void AddValue(mscorlib::System::String* name, wchar_t value);
		void AddValue(mscorlib::System::String* name, uint8_t value);
		void AddValue(mscorlib::System::String* name, int16_t value);
		void AddValue(mscorlib::System::String* name, int32_t value);
		void AddValue(mscorlib::System::String* name, int64_t value);
		void AddValue(mscorlib::System::String* name, uint64_t value);
		void AddValue(mscorlib::System::String* name, float value);
		void AddValue(mscorlib::System::String* name, mscorlib::System::DateTime value);
		void AddValueInternal(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::System::Type* type);
		void UpdateValue(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::System::Type* type);
		int32_t FindElement(mscorlib::System::String* name);
		mscorlib::System::Object* GetElement(mscorlib::System::String* name, mscorlib::System::Type& foundType);
		mscorlib::System::Object* GetElementNoThrow(mscorlib::System::String* name, mscorlib::System::Type& foundType);
		mscorlib::System::Object* GetValue(mscorlib::System::String* name, mscorlib::System::Type* type);
		mscorlib::System::Object* GetValueNoThrow(mscorlib::System::String* name, mscorlib::System::Type* type);
		bool GetBoolean(mscorlib::System::String* name);
		int32_t GetInt32(mscorlib::System::String* name);
		int64_t GetInt64(mscorlib::System::String* name);
		float GetSingle(mscorlib::System::String* name);
		mscorlib::System::String* GetString(mscorlib::System::String* name);
	};
}

