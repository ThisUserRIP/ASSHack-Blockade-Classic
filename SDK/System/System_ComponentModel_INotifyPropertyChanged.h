#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct PropertyChangedEventHandler; };

namespace System::System::ComponentModel
{
	struct INotifyPropertyChanged
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void add_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler* value);
		void remove_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler* value);
	};
}

