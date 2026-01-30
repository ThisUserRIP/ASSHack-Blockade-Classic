#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::ComponentModel { struct PropertyDescriptor; };
#include "System_ComponentModel_ListSortDirection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct ListSortDescription : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::PropertyDescriptor* property;
		System::ComponentModel::ListSortDirection sortDirection;
		void _ctor(System::ComponentModel::PropertyDescriptor* property, System::ComponentModel::ListSortDirection direction);
		System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor();
		void set_PropertyDescriptor(System::ComponentModel::PropertyDescriptor* value);
		System::ComponentModel::ListSortDirection get_SortDirection();
		void set_SortDirection(System::ComponentModel::ListSortDirection value);
	};
}

