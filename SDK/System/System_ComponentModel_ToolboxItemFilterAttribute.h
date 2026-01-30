#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "System_ComponentModel_ToolboxItemFilterType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct ToolboxItemFilterAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::ToolboxItemFilterType filterType;
		mscorlib::System::String* filterString;
		mscorlib::System::String* typeId;
		void _ctor(mscorlib::System::String* filterString);
		void _ctor(mscorlib::System::String* filterString, System::ComponentModel::ToolboxItemFilterType filterType);
		mscorlib::System::String* get_FilterString();
		System::ComponentModel::ToolboxItemFilterType get_FilterType();
		mscorlib::System::Object* get_TypeId();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool Match(mscorlib::System::Object* obj);
		mscorlib::System::String* ToString();
	};
}

