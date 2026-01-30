#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_TypeDescriptor.h"
namespace System::System::ComponentModel { struct TypeDescriptor; };
namespace mscorlib::System { struct Attribute; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct TypeDescriptor_AttributeFilterCacheItem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Attribute*>* _filter;
		mscorlib::System::Collections::ICollection* FilteredMembers;
		void _ctor(IL2CPP::Array<mscorlib::System::Attribute*>* filter, mscorlib::System::Collections::ICollection* filteredMembers);
		bool IsValid(IL2CPP::Array<mscorlib::System::Attribute*>* filter);
	};
}

