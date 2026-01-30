#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
#include "System_ComponentModel_ListChangedType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct ListChangedEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::ListChangedType listChangedType;
		int32_t newIndex;
		int32_t oldIndex;
		System::ComponentModel::PropertyDescriptor* propDesc;
		void _ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex);
		void _ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, System::ComponentModel::PropertyDescriptor* propDesc);
		void _ctor(System::ComponentModel::ListChangedType listChangedType, System::ComponentModel::PropertyDescriptor* propDesc);
		void _ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex);
		System::ComponentModel::ListChangedType get_ListChangedType();
		int32_t get_NewIndex();
		int32_t get_OldIndex();
		System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor();
	};
}

