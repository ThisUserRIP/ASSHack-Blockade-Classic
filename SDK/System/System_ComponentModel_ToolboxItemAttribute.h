#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct ToolboxItemAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* toolboxItemType;
		mscorlib::System::String* toolboxItemTypeName;
		struct StaticFields
		{
			System::ComponentModel::ToolboxItemAttribute* Default;
			System::ComponentModel::ToolboxItemAttribute* None;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool IsDefaultAttribute();
		void _ctor(bool defaultType);
		void _ctor(mscorlib::System::String* toolboxItemTypeName);
		void _ctor(mscorlib::System::Type* toolboxItemType);
		mscorlib::System::Type* get_ToolboxItemType();
		mscorlib::System::String* get_ToolboxItemTypeName();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static void _cctor();
	};
}

