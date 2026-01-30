#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct ListSortDescriptionCollection; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct IBindingListView
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void ApplySort(System::ComponentModel::ListSortDescriptionCollection* sorts);
		mscorlib::System::String* get_Filter();
		void set_Filter(mscorlib::System::String* value);
		System::ComponentModel::ListSortDescriptionCollection* get_SortDescriptions();
		void RemoveFilter();
		bool get_SupportsAdvancedSorting();
		bool get_SupportsFiltering();
	};
}

