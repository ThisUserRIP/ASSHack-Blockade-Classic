#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IEnumerable; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct DataErrorsChangedEventArgs; };
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };

namespace System::System::ComponentModel
{
	struct INotifyDataErrorInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_HasErrors();
		mscorlib::System::Collections::IEnumerable* GetErrors(mscorlib::System::String* propertyName);
		void add_ErrorsChanged(mscorlib::System::EventHandler_1<System::ComponentModel::DataErrorsChangedEventArgs>* value);
		void remove_ErrorsChanged(mscorlib::System::EventHandler_1<System::ComponentModel::DataErrorsChangedEventArgs>* value);
	};
}

