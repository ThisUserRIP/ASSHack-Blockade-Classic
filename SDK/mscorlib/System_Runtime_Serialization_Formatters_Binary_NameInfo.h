#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_Serialization_Formatters_Binary_InternalArrayTypeE.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct NameInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* NIFullName;
		int64_t NIobjectId;
		int64_t NIassemId;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum;
		mscorlib::System::Type* NItype;
		bool NIisSealed;
		bool NIisArray;
		bool NIisArrayItem;
		bool NItransmitTypeOnObject;
		bool NItransmitTypeOnMember;
		bool NIisParentTypeOnObject;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum;
		bool NIsealedStatusChecked;
		void _ctor();
		void Init();
		bool get_IsSealed();
		mscorlib::System::String* get_NIname();
		void set_NIname(mscorlib::System::String* value);
	};
}

