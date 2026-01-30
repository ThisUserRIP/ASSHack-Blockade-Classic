#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "System_ComponentModel_DesignerSerializationVisibility.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct DesignerSerializationVisibilityAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::DesignerSerializationVisibility visibility;
		struct StaticFields
		{
			System::ComponentModel::DesignerSerializationVisibilityAttribute* Content;
			System::ComponentModel::DesignerSerializationVisibilityAttribute* Hidden;
			System::ComponentModel::DesignerSerializationVisibilityAttribute* Visible;
			System::ComponentModel::DesignerSerializationVisibilityAttribute* Default;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System::ComponentModel::DesignerSerializationVisibility visibility);
		System::ComponentModel::DesignerSerializationVisibility get_Visibility();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool IsDefaultAttribute();
		static void _cctor();
	};
}

