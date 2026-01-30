#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
#include "System_ComponentModel_ListSortDirection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct ListChangedEventHandler; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct IBindingList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_AllowNew();
		mscorlib::System::Object* AddNew();
		bool get_AllowEdit();
		bool get_AllowRemove();
		bool get_SupportsChangeNotification();
		bool get_SupportsSearching();
		bool get_SupportsSorting();
		bool get_IsSorted();
		System::ComponentModel::PropertyDescriptor* get_SortProperty();
		System::ComponentModel::ListSortDirection get_SortDirection();
		void add_ListChanged(System::ComponentModel::ListChangedEventHandler* value);
		void remove_ListChanged(System::ComponentModel::ListChangedEventHandler* value);
		void AddIndex(System::ComponentModel::PropertyDescriptor* property);
		void ApplySort(System::ComponentModel::PropertyDescriptor* property, System::ComponentModel::ListSortDirection direction);
		int32_t Find(System::ComponentModel::PropertyDescriptor* property, mscorlib::System::Object* key);
		void RemoveIndex(System::ComponentModel::PropertyDescriptor* property);
		void RemoveSort();
	};
}

