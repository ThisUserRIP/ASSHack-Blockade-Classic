#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_Formatters_Binary_ValueFixupEnum.h"
namespace mscorlib::System { struct Array; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ReadObjectInfo; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ParseRecord; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct ValueFixup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum valueFixupEnum;
		mscorlib::System::Array* arrayObj;
		IL2CPP::Array<int32_t>* indexMap;
		mscorlib::System::Object* header;
		mscorlib::System::Object* memberObject;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;
		mscorlib::System::String* memberName;
		struct StaticFields
		{
			mscorlib::System::Reflection::MemberInfo* valueInfo;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Array* arrayObj, IL2CPP::Array<int32_t>* indexMap);
		void _ctor(mscorlib::System::Object* memberObject, mscorlib::System::String* memberName, mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo);
		void Fixup(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* record, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent);
	};
}

