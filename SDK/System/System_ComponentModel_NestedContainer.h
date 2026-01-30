#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_Container.h"
namespace System::System::ComponentModel { struct IComponent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct ISite; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct EventArgs; };

namespace System::System::ComponentModel
{
	struct NestedContainer : System::ComponentModel::Container
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::IComponent* _owner;
		void _ctor(System::ComponentModel::IComponent* owner);
		System::ComponentModel::IComponent* get_Owner();
		mscorlib::System::String* get_OwnerName();
		System::ComponentModel::ISite* CreateSite(System::ComponentModel::IComponent* component, mscorlib::System::String* name);
		void Dispose(bool disposing);
		mscorlib::System::Object* GetService(mscorlib::System::Type* service);
		void OnOwnerDisposed(mscorlib::System::Object* sender, mscorlib::System::EventArgs* e);
	};
}

