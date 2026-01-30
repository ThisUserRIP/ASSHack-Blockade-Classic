#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "System_ComponentModel_RefreshProperties.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct RefreshPropertiesAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::RefreshProperties refresh;
		struct StaticFields
		{
			System::ComponentModel::RefreshPropertiesAttribute* All;
			System::ComponentModel::RefreshPropertiesAttribute* Repaint;
			System::ComponentModel::RefreshPropertiesAttribute* Default;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System::ComponentModel::RefreshProperties refresh);
		System::ComponentModel::RefreshProperties get_RefreshProperties();
		bool Equals(mscorlib::System::Object* value);
		int32_t GetHashCode();
		bool IsDefaultAttribute();
		static void _cctor();
	};
}

