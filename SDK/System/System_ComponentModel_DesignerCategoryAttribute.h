#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
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
	struct DesignerCategoryAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* category;
		mscorlib::System::String* typeId;
		struct StaticFields
		{
			System::ComponentModel::DesignerCategoryAttribute* Component;
			System::ComponentModel::DesignerCategoryAttribute* Default;
			System::ComponentModel::DesignerCategoryAttribute* Form;
			System::ComponentModel::DesignerCategoryAttribute* Generic;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::String* category);
		mscorlib::System::String* get_Category();
		mscorlib::System::Object* get_TypeId();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool IsDefaultAttribute();
		static void _cctor();
	};
}

