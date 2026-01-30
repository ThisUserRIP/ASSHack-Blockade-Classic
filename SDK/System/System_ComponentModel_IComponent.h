#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System::ComponentModel { struct ISite; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct EventHandler; };

namespace System::System::ComponentModel
{
	struct IComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::ISite* get_Site();
		void set_Site(System::ComponentModel::ISite* value);
		void add_Disposed(mscorlib::System::EventHandler* value);
		void remove_Disposed(mscorlib::System::EventHandler* value);
	};
}

