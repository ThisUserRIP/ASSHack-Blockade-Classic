#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlTypeMapMember : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name;
		int32_t _index;
		int32_t _globalIndex;
		int32_t _specifiedGlobalIndex;
		System_Xml::System::Xml::Serialization::TypeData* _typeData;
		mscorlib::System::Reflection::MemberInfo* _member;
		mscorlib::System::Reflection::MemberInfo* _specifiedMember;
		mscorlib::System::Reflection::MethodInfo* _shouldSerialize;
		mscorlib::System::Object* _defaultValue;
		int32_t _flags;
		void _ctor();
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::Object* get_DefaultValue();
		void set_DefaultValue(mscorlib::System::Object* value);
		bool IsReadOnly(mscorlib::System::Type* type);
		static mscorlib::System::Object* GetValue(mscorlib::System::Object* ob, mscorlib::System::String* name);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* ob);
		void SetValue(mscorlib::System::Object* ob, mscorlib::System::Object* value);
		static void SetValue(mscorlib::System::Object* ob, mscorlib::System::String* name, mscorlib::System::Object* value);
		void InitMember(mscorlib::System::Type* type);
		System_Xml::System::Xml::Serialization::TypeData* get_TypeData();
		void set_TypeData(System_Xml::System::Xml::Serialization::TypeData* value);
		int32_t get_Index();
		void set_Index(int32_t value);
		int32_t get_GlobalIndex();
		void set_GlobalIndex(int32_t value);
		bool get_IsOptionalValueType();
		void set_IsOptionalValueType(bool value);
		bool get_IsReturnValue();
		void set_IsReturnValue(bool value);
		void CheckOptionalValueType(mscorlib::System::Type* type);
		bool GetValueSpecified(mscorlib::System::Object* ob);
		void SetValueSpecified(mscorlib::System::Object* ob, bool value);
	};
}

