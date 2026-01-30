#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct NotifyParentPropertyAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool notifyParent;
		struct StaticFields
		{
			System::ComponentModel::NotifyParentPropertyAttribute* Yes;
			System::ComponentModel::NotifyParentPropertyAttribute* No;
			System::ComponentModel::NotifyParentPropertyAttribute* Default;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(bool notifyParent);
		bool get_NotifyParent();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool IsDefaultAttribute();
		static void _cctor();
	};
}

