#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_TypeDescriptor.h"
namespace System::System::ComponentModel { struct TypeDescriptor; };
namespace System::System::ComponentModel::Design { struct ITypeDescriptorFilterService; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct TypeDescriptor_FilterCacheItem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::Design::ITypeDescriptorFilterService* _filterService;
		mscorlib::System::Collections::ICollection* FilteredMembers;
		void _ctor(System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, mscorlib::System::Collections::ICollection* filteredMembers);
		bool IsValid(System::ComponentModel::Design::ITypeDescriptorFilterService* filterService);
	};
}

