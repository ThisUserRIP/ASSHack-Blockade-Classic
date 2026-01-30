#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_ComponentModel_BindingDirection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_ComponentModel_BindableSupport.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct BindableAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool bindable;
		bool isDefault;
		System::ComponentModel::BindingDirection direction;
		struct StaticFields
		{
			System::ComponentModel::BindableAttribute* Yes;
			System::ComponentModel::BindableAttribute* No;
			System::ComponentModel::BindableAttribute* Default;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(bool bindable);
		void _ctor(bool bindable, System::ComponentModel::BindingDirection direction);
		void _ctor(System::ComponentModel::BindableSupport flags);
		void _ctor(System::ComponentModel::BindableSupport flags, System::ComponentModel::BindingDirection direction);
		bool get_Bindable();
		System::ComponentModel::BindingDirection get_Direction();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool IsDefaultAttribute();
		static void _cctor();
	};
}

